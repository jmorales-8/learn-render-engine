#include "backend.hpp"

void VulkanBackend::saySomething()
{
    int i = VK_KHR_ACCELERATION_STRUCTURE_SPEC_VERSION;
    printf("The acceleration structure spec version is: %d", i);
}
