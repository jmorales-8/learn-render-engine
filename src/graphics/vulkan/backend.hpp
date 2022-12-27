#ifndef GRAPHICS_VULKAN_BACKEND_HPP
#define GRAPHICS_VULKAN_BACKEND_HPP

#include <stdio.h>
#include <vulkan/vulkan.hpp>

class VulkanBackend
{
public:
    void saySomething()
    {
        int i = VK_KHR_ACCELERATION_STRUCTURE_SPEC_VERSION;
        printf("The acceleration structure spec version is: %d", i);
    }
};

#endif //GRAPHICS_VULKAN_BACKEND_HPP