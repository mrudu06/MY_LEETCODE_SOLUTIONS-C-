int maxArea(int* height, int heightSize) 
{
    int left = 0;
    int right = heightSize - 1;
    int max_area = 0;

    while (left < right) {
        int height_left = height[left];
        int height_right = height[right];

        int current_height;
        if (height_left < height_right) 
        {
            current_height = height_left;
        } else 
        {
            current_height = height_right;
        }

        int width = right - left;
        int area = current_height * width;

        if (area > max_area) 
        {
            max_area = area;
        }

        if (height_left < height_right) 
        {
            left++;
        } else 
        {
            right--;
        }
    }

    return max_area;
}
