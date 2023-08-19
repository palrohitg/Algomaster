import json 
import os 



class SchemaTransformer:
    
    def __init__(self, schema_path='schema', mapping_path='mapping.json'):
        self.schema_path = schema_path
        self.mapping = self.load_mapping(mapping_path)
        
    
    def load_mapping(self, mapping_path):
        with open(mapping_path) as f:
            return json.load(f)
        
    
    def load_schema(self, schema_name):
        schema_file = os.path.join(self.schema_path, schema_name + '.json') 
        with open(schema_file) as f:
            return json.load(f)
    
    def validate_fileds(self, data, schema):
        required_fields = set(schema.keys())
        optional_fields = set(schema.get('optional', []))
        provided_fields = set(data.keys())
        missing_fields = required_fields - provided_fields
        if missing_fields:
            raise ValueError('Missing required fields')
        
        invalid_fields = provided_fields - (required_fields | optional_fields)
        
        if invalid_fields:
            raise ValueError('Invalid required fields')
    
    def transform_data(self, data, schema_name, provider):
        target_schema = self.load_schema(schema_name)
        mapping = self.mapping.get(schema_name, {}).get(provider, {})
        
        transformed_data = {}
        for input_field, target_field in mapping.items():
            transformed_data[target_field]= data.get(input_field)
        
        return transformed_data  
    
    
    def build_from_json(self, json_file_path):
        # data : files 
        with open(json_file_path) as f:
            data = json.load(f)
            
        file_name = os.path.basename(json_file_path)
        
        file_parts = file_name.split('_')
        if len(file_parts) < 3 :
            raise ValueError(f"The filename '{file_name}' doesn't have the expected format.")
 
        provider, schema_name = file_name.split('_')[:2]
        schema = self.load_schema(schema_name)
   
        self.validate_fileds(data, schema)
        
        return self.transform_data(data, schema_name, provider)
    
