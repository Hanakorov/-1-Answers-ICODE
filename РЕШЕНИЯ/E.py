from datetime import date, timedelta

def find_almost_palindrome_year(k):
    current_date = date(k, 12, 31)
    
    while current_date.year == k:
        day_sum = sum(map(int, f"{current_date.day:02d}"))
        month_sum = sum(map(int, f"{current_date.month:02d}"))
        year_sum = sum(map(int, f"{current_date.year}"))
        
        if day_sum + month_sum == year_sum:
            return current_date.strftime("%d.%m.%Y")
        
        current_date -= timedelta(days=1)

k = int(input().strip()) 
result = find_almost_palindrome_year(k)
print(result)
