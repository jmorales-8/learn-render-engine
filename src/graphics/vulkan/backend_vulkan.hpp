#ifndef BACKEND_VULKAN_HPP
#define BACKEND_VULKAN_HPP

#include <stdio.h>
#include <vulkan/vulkan.hpp>

class backend_vulkan 
{
public:
    void saySomething()
    {
        int i = VK_KHR_ACCELERATION_STRUCTURE_SPEC_VERSION;
        printf("The acceleration structure spec version is: %d", i);
    }
};

#endif //BACKEND_VULKAN_HPP