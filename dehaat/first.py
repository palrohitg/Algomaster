

operationMap = {
    "addition" : "+",
    "mutiplication" : "*", 
}


class EqualSerializer(BaseSerializer):
    
    ## Validate functions 
    
    def __init__(self, data): 
        
        equations = ""
        for key, value in data.items(): 
            if key in operationMap: 
                    if key is not operationMap[key] : 
                        pass 
                        # raise exception 
                    equations =  equations + operationMap[key]
                    operand1, operand2 = self.getValue(value)
                    equations = operand1 + equations + operand2
                    
        return equations
    
    
    def equationLeaf() :
        for key, value in data.items(): 
            if key in operationMap: 
                    if key is not operationMap[key] : 
                        pass 
                        # raise exception 
                    equations =  equations + operationMap[key]
                    operand1, operand2 = self.getValue(value)
                    equations = operand1 + equations + operand2
                    
        return equations

                
                    
    def getValues(self, expression):
        """
            {
                "mul" : {
                    "operand1" : 1
                    "operand2" : 1
                }
                
            }
        
        """
        
        operand1 = ""
        operand2 = ""
        for key, value in expression: 
            # check in regularexpresssion if we have operand key 
            operand1 = value  # check basic of counts if 0 then assign to operand 1 else to operand 2 
            
            # if operator 
            operand2 = equationLeaf
          
        
        
        
    