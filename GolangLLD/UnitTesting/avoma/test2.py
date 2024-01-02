import requests

def calculate_discounted_price(price, discount):
    discounted_price = price - ((discount / 100) * price)
    return discounted_price


def getDiscountedPrice(barcode):
    api_url = 'https://jsonmock.hackerrank.com/api/inventory?barcode=' + barcode
    response = requests.get(api_url)
    if response.status_code == 200:
        api_data = response.json()
        if api_data.get('data') and len(api_data.get('data')) >= 1: 
            data_final = api_data.get('data')[0] 
        # Extract data from the API response
            barcode = data_final.get('barcode', '')
            price = data_final.get('price', 0)
            discount = data_final.get('discount', 0)
            discounted_price = calculate_discounted_price(price, discount)
            return discounted_price
    
        return -1 
    else:
        print(f"Failed to fetch data. Status code: {response.status_code}")
        return -1

if __name__ == "__main__":
    barcode = "74001755"
    print(getDiscountedPrice(barcode))