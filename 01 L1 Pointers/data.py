schema = {
    "id": "str",
    "displayName": "str",
    "firstName": "str",
    "lastName": "str",
    "email": "str",
    "addresses": "list[str]",
    "contact_details": {
      "phone_number": "str",
      "emergency_contact": {
        "name": "str",
        "phone_number": "str",
        "relation": "str"
      }
    },
    "optional": ["lastName", "addresses"]
  }

required_fields = set(schema.keys())
optional_fields = set(schema.get('optional', []))
# provided_fields = set(data.keys())
print(required_fields)
print(optional_fields)