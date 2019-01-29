#pragma once

#include <memory>
#define VULKAN_NO_PROTOTYPES
#include <vulkan/vulkan.h>

#include "spk/spock.h"

namespace spk {

spk::global_dispatch_table load_global_dispatch_table(
    PFN_vkGetInstanceProcAddr pvkGetInstanceProcAddr);

spk::instance_dispatch_table load_instance_dispatch_table(
    PFN_vkGetInstanceProcAddr pvkGetInstanceProcAddr,
    spk::instance_ref instance);

spk::device_dispatch_table load_device_dispatch_table(
    PFN_vkGetDeviceProcAddr pvkGetDeviceProcAddr, spk::device_ref device);

class loader {
 public:
  loader();

  PFN_vkGetInstanceProcAddr pvkGetInstanceProcAddr;

  spk::version instance_version() const;

  std::vector<spk::layer_properties> instance_layer_properties() const;
  std::vector<spk::extension_properties> instance_extension_properties() const;
  std::vector<spk::extension_properties> instance_extension_properties(
      const std::string& layer_name) const;

  spk::instance_ref create_instance(
      spk::instance_create_info const* create_info,
      spk::allocation_callbacks const* allocator) const;

 private:
  std::vector<spk::extension_properties> instance_extension_properties_(
      const char* layer_name) const;

  spk::global_dispatch_table global_dispatch_table;

  struct deleter {
    void operator()(void* handle);
  };
  std::unique_ptr<void, deleter> handle;
};

}  // namespace spk
