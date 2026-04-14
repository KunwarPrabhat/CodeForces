#include <iostream>
#include <string>

void abbreviation(std::string arr)
{
    int size = arr.length();
    std::string result = "";

    result += arr[0];
    result += std::to_string(size - 2);
    result += arr[size - 1];

    std::cout << result << std::endl;
}
int main()
{
    int n;
    std::cin >> n;

    while (n--)
    {
        std::string arr;
        std::cin >> arr;

        if (arr.length() > 10)
        {
            abbreviation(arr);
        }
        else
        {
            for (int i = 0; i < arr.length(); i++)
            {
                std::cout << arr[i];
            }std::cout<<std::endl;
        }
    }
}
