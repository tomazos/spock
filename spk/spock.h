#pragma once

#include <array>
#include <cstring>
#include <type_traits>
#include <vulkan/vulkan.h>

#include "spk/spock_fwd.h"

namespace spk {

// bitmask VkAccessFlags
enum class access_flags {
  indirect_command_read = VK_ACCESS_INDIRECT_COMMAND_READ_BIT,
  index_read = VK_ACCESS_INDEX_READ_BIT,
  vertex_attribute_read = VK_ACCESS_VERTEX_ATTRIBUTE_READ_BIT,
  uniform_read = VK_ACCESS_UNIFORM_READ_BIT,
  input_attachment_read = VK_ACCESS_INPUT_ATTACHMENT_READ_BIT,
  shader_read = VK_ACCESS_SHADER_READ_BIT,
  shader_write = VK_ACCESS_SHADER_WRITE_BIT,
  color_attachment_read = VK_ACCESS_COLOR_ATTACHMENT_READ_BIT,
  color_attachment_write = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT,
  depth_stencil_attachment_read = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_READ_BIT,
  depth_stencil_attachment_write = VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT,
  transfer_read = VK_ACCESS_TRANSFER_READ_BIT,
  transfer_write = VK_ACCESS_TRANSFER_WRITE_BIT,
  host_read = VK_ACCESS_HOST_READ_BIT,
  host_write = VK_ACCESS_HOST_WRITE_BIT,
  memory_read = VK_ACCESS_MEMORY_READ_BIT,
  memory_write = VK_ACCESS_MEMORY_WRITE_BIT,
  conditional_rendering_read_ext = VK_ACCESS_CONDITIONAL_RENDERING_READ_BIT_EXT,
  command_process_read_nvx = VK_ACCESS_COMMAND_PROCESS_READ_BIT_NVX,
  command_process_write_nvx = VK_ACCESS_COMMAND_PROCESS_WRITE_BIT_NVX,
  color_attachment_read_noncoherent_ext = VK_ACCESS_COLOR_ATTACHMENT_READ_NONCOHERENT_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(access_flags);

inline std::ostream& operator<<(std::ostream& o, access_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(access_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, indirect_command_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, index_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, vertex_attribute_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, uniform_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, input_attachment_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, shader_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, shader_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, color_attachment_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, color_attachment_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, depth_stencil_attachment_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, depth_stencil_attachment_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, transfer_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, transfer_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, host_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, host_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, memory_read)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, memory_write)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, conditional_rendering_read_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, command_process_read_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, command_process_write_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(access_flags, color_attachment_read_noncoherent_ext)
  SPK_END_BITMASK_OUTPUT(access_flags)
}
// bitmask VkAttachmentDescriptionFlags
enum class attachment_description_flags {
  may_alias = VK_ATTACHMENT_DESCRIPTION_MAY_ALIAS_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(attachment_description_flags);

inline std::ostream& operator<<(std::ostream& o, attachment_description_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(attachment_description_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(attachment_description_flags, may_alias)
  SPK_END_BITMASK_OUTPUT(attachment_description_flags)
}
// bitmask VkBufferCreateFlags
enum class buffer_create_flags {
  sparse_binding = VK_BUFFER_CREATE_SPARSE_BINDING_BIT,
  sparse_residency = VK_BUFFER_CREATE_SPARSE_RESIDENCY_BIT,
  sparse_aliased = VK_BUFFER_CREATE_SPARSE_ALIASED_BIT,
  protected_ = VK_BUFFER_CREATE_PROTECTED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(buffer_create_flags);

inline std::ostream& operator<<(std::ostream& o, buffer_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(buffer_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_create_flags, sparse_binding)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_create_flags, sparse_residency)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_create_flags, sparse_aliased)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_create_flags, protected_)
  SPK_END_BITMASK_OUTPUT(buffer_create_flags)
}
// bitmask VkBufferUsageFlags
enum class buffer_usage_flags {
  transfer_src = VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
  transfer_dst = VK_BUFFER_USAGE_TRANSFER_DST_BIT,
  uniform_texel_buffer = VK_BUFFER_USAGE_UNIFORM_TEXEL_BUFFER_BIT,
  storage_texel_buffer = VK_BUFFER_USAGE_STORAGE_TEXEL_BUFFER_BIT,
  uniform_buffer = VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT,
  storage_buffer = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT,
  index_buffer = VK_BUFFER_USAGE_INDEX_BUFFER_BIT,
  vertex_buffer = VK_BUFFER_USAGE_VERTEX_BUFFER_BIT,
  indirect_buffer = VK_BUFFER_USAGE_INDIRECT_BUFFER_BIT,
  conditional_rendering_ext = VK_BUFFER_USAGE_CONDITIONAL_RENDERING_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(buffer_usage_flags);

inline std::ostream& operator<<(std::ostream& o, buffer_usage_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(buffer_usage_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, transfer_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, transfer_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, uniform_texel_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, storage_texel_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, uniform_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, storage_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, index_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, vertex_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, indirect_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(buffer_usage_flags, conditional_rendering_ext)
  SPK_END_BITMASK_OUTPUT(buffer_usage_flags)
}
// bitmask VkColorComponentFlags
enum class color_component_flags {
  r = VK_COLOR_COMPONENT_R_BIT,
  g = VK_COLOR_COMPONENT_G_BIT,
  b = VK_COLOR_COMPONENT_B_BIT,
  a = VK_COLOR_COMPONENT_A_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(color_component_flags);

inline std::ostream& operator<<(std::ostream& o, color_component_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(color_component_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(color_component_flags, r)
  SPK_BITMASK_OUTPUT_ENUMERATOR(color_component_flags, g)
  SPK_BITMASK_OUTPUT_ENUMERATOR(color_component_flags, b)
  SPK_BITMASK_OUTPUT_ENUMERATOR(color_component_flags, a)
  SPK_END_BITMASK_OUTPUT(color_component_flags)
}
// bitmask VkCommandBufferResetFlags
enum class command_buffer_reset_flags {
  release_resources = VK_COMMAND_BUFFER_RESET_RELEASE_RESOURCES_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(command_buffer_reset_flags);

inline std::ostream& operator<<(std::ostream& o, command_buffer_reset_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(command_buffer_reset_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_buffer_reset_flags, release_resources)
  SPK_END_BITMASK_OUTPUT(command_buffer_reset_flags)
}
// bitmask VkCommandBufferUsageFlags
enum class command_buffer_usage_flags {
  one_time_submit = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT,
  render_pass_continue = VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT,
  simultaneous_use = VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(command_buffer_usage_flags);

inline std::ostream& operator<<(std::ostream& o, command_buffer_usage_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(command_buffer_usage_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_buffer_usage_flags, one_time_submit)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_buffer_usage_flags, render_pass_continue)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_buffer_usage_flags, simultaneous_use)
  SPK_END_BITMASK_OUTPUT(command_buffer_usage_flags)
}
// bitmask VkCommandPoolCreateFlags
enum class command_pool_create_flags {
  transient = VK_COMMAND_POOL_CREATE_TRANSIENT_BIT,
  reset_command_buffer = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT,
  protected_ = VK_COMMAND_POOL_CREATE_PROTECTED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(command_pool_create_flags);

inline std::ostream& operator<<(std::ostream& o, command_pool_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(command_pool_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_pool_create_flags, transient)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_pool_create_flags, reset_command_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_pool_create_flags, protected_)
  SPK_END_BITMASK_OUTPUT(command_pool_create_flags)
}
// bitmask VkCommandPoolResetFlags
enum class command_pool_reset_flags {
  release_resources = VK_COMMAND_POOL_RESET_RELEASE_RESOURCES_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(command_pool_reset_flags);

inline std::ostream& operator<<(std::ostream& o, command_pool_reset_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(command_pool_reset_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(command_pool_reset_flags, release_resources)
  SPK_END_BITMASK_OUTPUT(command_pool_reset_flags)
}
// bitmask VkCompositeAlphaFlagsKHR
enum class composite_alpha_flags_khr {
  opaque_khr = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR,
  pre_multiplied_khr = VK_COMPOSITE_ALPHA_PRE_MULTIPLIED_BIT_KHR,
  post_multiplied_khr = VK_COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR,
  inherit_khr = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(composite_alpha_flags_khr);

inline std::ostream& operator<<(std::ostream& o, composite_alpha_flags_khr e){
  SPK_BEGIN_BITMASK_OUTPUT(composite_alpha_flags_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(composite_alpha_flags_khr, opaque_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(composite_alpha_flags_khr, pre_multiplied_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(composite_alpha_flags_khr, post_multiplied_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(composite_alpha_flags_khr, inherit_khr)
  SPK_END_BITMASK_OUTPUT(composite_alpha_flags_khr)
}
// bitmask VkConditionalRenderingFlagsEXT
enum class conditional_rendering_flags_ext {
  inverted_ext = VK_CONDITIONAL_RENDERING_INVERTED_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(conditional_rendering_flags_ext);

inline std::ostream& operator<<(std::ostream& o, conditional_rendering_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(conditional_rendering_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(conditional_rendering_flags_ext, inverted_ext)
  SPK_END_BITMASK_OUTPUT(conditional_rendering_flags_ext)
}
// bitmask VkCullModeFlags
enum class cull_mode_flags {
  none = VK_CULL_MODE_NONE,
  front = VK_CULL_MODE_FRONT_BIT,
  back = VK_CULL_MODE_BACK_BIT,
  front_and_back = VK_CULL_MODE_FRONT_AND_BACK,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(cull_mode_flags);

inline std::ostream& operator<<(std::ostream& o, cull_mode_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(cull_mode_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(cull_mode_flags, none)
  SPK_BITMASK_OUTPUT_ENUMERATOR(cull_mode_flags, front)
  SPK_BITMASK_OUTPUT_ENUMERATOR(cull_mode_flags, back)
  SPK_BITMASK_OUTPUT_ENUMERATOR(cull_mode_flags, front_and_back)
  SPK_END_BITMASK_OUTPUT(cull_mode_flags)
}
// bitmask VkDebugReportFlagsEXT
enum class debug_report_flags_ext {
  information_ext = VK_DEBUG_REPORT_INFORMATION_BIT_EXT,
  warning_ext = VK_DEBUG_REPORT_WARNING_BIT_EXT,
  performance_warning_ext = VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT,
  error_ext = VK_DEBUG_REPORT_ERROR_BIT_EXT,
  debug_ext = VK_DEBUG_REPORT_DEBUG_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(debug_report_flags_ext);

inline std::ostream& operator<<(std::ostream& o, debug_report_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(debug_report_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_report_flags_ext, information_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_report_flags_ext, warning_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_report_flags_ext, performance_warning_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_report_flags_ext, error_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_report_flags_ext, debug_ext)
  SPK_END_BITMASK_OUTPUT(debug_report_flags_ext)
}
// bitmask VkDebugUtilsMessageSeverityFlagsEXT
enum class debug_utils_message_severity_flags_ext {
  verbose_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT,
  info_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT,
  warning_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT,
  error_ext = VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(debug_utils_message_severity_flags_ext);

inline std::ostream& operator<<(std::ostream& o, debug_utils_message_severity_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(debug_utils_message_severity_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_severity_flags_ext, verbose_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_severity_flags_ext, info_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_severity_flags_ext, warning_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_severity_flags_ext, error_ext)
  SPK_END_BITMASK_OUTPUT(debug_utils_message_severity_flags_ext)
}
// bitmask VkDebugUtilsMessageTypeFlagsEXT
enum class debug_utils_message_type_flags_ext {
  general_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT,
  validation_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT,
  performance_ext = VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(debug_utils_message_type_flags_ext);

inline std::ostream& operator<<(std::ostream& o, debug_utils_message_type_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(debug_utils_message_type_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_type_flags_ext, general_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_type_flags_ext, validation_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(debug_utils_message_type_flags_ext, performance_ext)
  SPK_END_BITMASK_OUTPUT(debug_utils_message_type_flags_ext)
}
// bitmask VkDependencyFlags
enum class dependency_flags {
  by_region = VK_DEPENDENCY_BY_REGION_BIT,
  device_group = VK_DEPENDENCY_DEVICE_GROUP_BIT,
  view_local = VK_DEPENDENCY_VIEW_LOCAL_BIT,
  view_local_khr = VK_DEPENDENCY_VIEW_LOCAL_BIT_KHR,
  device_group_khr = VK_DEPENDENCY_DEVICE_GROUP_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(dependency_flags);

inline std::ostream& operator<<(std::ostream& o, dependency_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(dependency_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(dependency_flags, by_region)
  SPK_BITMASK_OUTPUT_ENUMERATOR(dependency_flags, device_group)
  SPK_BITMASK_OUTPUT_ENUMERATOR(dependency_flags, view_local)
  SPK_BITMASK_OUTPUT_ENUMERATOR(dependency_flags, view_local_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(dependency_flags, device_group_khr)
  SPK_END_BITMASK_OUTPUT(dependency_flags)
}
// bitmask VkDescriptorBindingFlagsEXT
enum class descriptor_binding_flags_ext {
  update_after_bind_ext = VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT_EXT,
  update_unused_while_pending_ext = VK_DESCRIPTOR_BINDING_UPDATE_UNUSED_WHILE_PENDING_BIT_EXT,
  partially_bound_ext = VK_DESCRIPTOR_BINDING_PARTIALLY_BOUND_BIT_EXT,
  variable_descriptor_count_ext = VK_DESCRIPTOR_BINDING_VARIABLE_DESCRIPTOR_COUNT_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(descriptor_binding_flags_ext);

inline std::ostream& operator<<(std::ostream& o, descriptor_binding_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(descriptor_binding_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_binding_flags_ext, update_after_bind_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_binding_flags_ext, update_unused_while_pending_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_binding_flags_ext, partially_bound_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_binding_flags_ext, variable_descriptor_count_ext)
  SPK_END_BITMASK_OUTPUT(descriptor_binding_flags_ext)
}
// bitmask VkDescriptorPoolCreateFlags
enum class descriptor_pool_create_flags {
  free_descriptor_set = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT,
  update_after_bind_ext = VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(descriptor_pool_create_flags);

inline std::ostream& operator<<(std::ostream& o, descriptor_pool_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(descriptor_pool_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_pool_create_flags, free_descriptor_set)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_pool_create_flags, update_after_bind_ext)
  SPK_END_BITMASK_OUTPUT(descriptor_pool_create_flags)
}
// bitmask VkDescriptorSetLayoutCreateFlags
enum class descriptor_set_layout_create_flags {
  push_descriptor_khr = VK_DESCRIPTOR_SET_LAYOUT_CREATE_PUSH_DESCRIPTOR_BIT_KHR,
  update_after_bind_pool_ext = VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(descriptor_set_layout_create_flags);

inline std::ostream& operator<<(std::ostream& o, descriptor_set_layout_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(descriptor_set_layout_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_set_layout_create_flags, push_descriptor_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(descriptor_set_layout_create_flags, update_after_bind_pool_ext)
  SPK_END_BITMASK_OUTPUT(descriptor_set_layout_create_flags)
}
// bitmask VkDeviceGroupPresentModeFlagsKHR
enum class device_group_present_mode_flags_khr {
  local_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR,
  remote_khr = VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR,
  sum_khr = VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR,
  local_multi_device_khr = VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_MULTI_DEVICE_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(device_group_present_mode_flags_khr);

inline std::ostream& operator<<(std::ostream& o, device_group_present_mode_flags_khr e){
  SPK_BEGIN_BITMASK_OUTPUT(device_group_present_mode_flags_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(device_group_present_mode_flags_khr, local_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(device_group_present_mode_flags_khr, remote_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(device_group_present_mode_flags_khr, sum_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(device_group_present_mode_flags_khr, local_multi_device_khr)
  SPK_END_BITMASK_OUTPUT(device_group_present_mode_flags_khr)
}
// bitmask VkDeviceQueueCreateFlags
enum class device_queue_create_flags {
  protected_ = VK_DEVICE_QUEUE_CREATE_PROTECTED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(device_queue_create_flags);

inline std::ostream& operator<<(std::ostream& o, device_queue_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(device_queue_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(device_queue_create_flags, protected_)
  SPK_END_BITMASK_OUTPUT(device_queue_create_flags)
}
// bitmask VkDisplayPlaneAlphaFlagsKHR
enum class display_plane_alpha_flags_khr {
  opaque_khr = VK_DISPLAY_PLANE_ALPHA_OPAQUE_BIT_KHR,
  global_khr = VK_DISPLAY_PLANE_ALPHA_GLOBAL_BIT_KHR,
  per_pixel_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_BIT_KHR,
  per_pixel_premultiplied_khr = VK_DISPLAY_PLANE_ALPHA_PER_PIXEL_PREMULTIPLIED_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(display_plane_alpha_flags_khr);

inline std::ostream& operator<<(std::ostream& o, display_plane_alpha_flags_khr e){
  SPK_BEGIN_BITMASK_OUTPUT(display_plane_alpha_flags_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(display_plane_alpha_flags_khr, opaque_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(display_plane_alpha_flags_khr, global_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(display_plane_alpha_flags_khr, per_pixel_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(display_plane_alpha_flags_khr, per_pixel_premultiplied_khr)
  SPK_END_BITMASK_OUTPUT(display_plane_alpha_flags_khr)
}
// bitmask VkExternalFenceFeatureFlags
enum class external_fence_feature_flags {
  exportable = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT,
  importable = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT,
  exportable_khr = VK_EXTERNAL_FENCE_FEATURE_EXPORTABLE_BIT_KHR,
  importable_khr = VK_EXTERNAL_FENCE_FEATURE_IMPORTABLE_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_fence_feature_flags);

using external_fence_feature_flags_khr = external_fence_feature_flags;

inline std::ostream& operator<<(std::ostream& o, external_fence_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_fence_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_feature_flags, exportable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_feature_flags, importable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_feature_flags, exportable_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_feature_flags, importable_khr)
  SPK_END_BITMASK_OUTPUT(external_fence_feature_flags)
}
// bitmask VkExternalFenceHandleTypeFlags
enum class external_fence_handle_type_flags {
  opaque_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT,
  opaque_win32 = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
  opaque_win32_kmt = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
  sync_fd = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT,
  opaque_fd_khr = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,
  opaque_win32_khr = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,
  opaque_win32_kmt_khr = VK_EXTERNAL_FENCE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,
  sync_fd_khr = VK_EXTERNAL_FENCE_HANDLE_TYPE_SYNC_FD_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_fence_handle_type_flags);

using external_fence_handle_type_flags_khr = external_fence_handle_type_flags;

inline std::ostream& operator<<(std::ostream& o, external_fence_handle_type_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_fence_handle_type_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_fd)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_win32)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_win32_kmt)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, sync_fd)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_fd_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_win32_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, opaque_win32_kmt_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_fence_handle_type_flags, sync_fd_khr)
  SPK_END_BITMASK_OUTPUT(external_fence_handle_type_flags)
}
// bitmask VkExternalMemoryFeatureFlags
enum class external_memory_feature_flags {
  dedicated_only = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT,
  exportable = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT,
  importable = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT,
  dedicated_only_khr = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_KHR,
  exportable_khr = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_KHR,
  importable_khr = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_memory_feature_flags);

using external_memory_feature_flags_khr = external_memory_feature_flags;

inline std::ostream& operator<<(std::ostream& o, external_memory_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_memory_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, dedicated_only)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, exportable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, importable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, dedicated_only_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, exportable_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags, importable_khr)
  SPK_END_BITMASK_OUTPUT(external_memory_feature_flags)
}
// bitmask VkExternalMemoryFeatureFlagsNV
enum class external_memory_feature_flags_nv {
  dedicated_only_nv = VK_EXTERNAL_MEMORY_FEATURE_DEDICATED_ONLY_BIT_NV,
  exportable_nv = VK_EXTERNAL_MEMORY_FEATURE_EXPORTABLE_BIT_NV,
  importable_nv = VK_EXTERNAL_MEMORY_FEATURE_IMPORTABLE_BIT_NV,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_memory_feature_flags_nv);

inline std::ostream& operator<<(std::ostream& o, external_memory_feature_flags_nv e){
  SPK_BEGIN_BITMASK_OUTPUT(external_memory_feature_flags_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags_nv, dedicated_only_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags_nv, exportable_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_feature_flags_nv, importable_nv)
  SPK_END_BITMASK_OUTPUT(external_memory_feature_flags_nv)
}
// bitmask VkExternalMemoryHandleTypeFlags
enum class external_memory_handle_type_flags {
  opaque_fd = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT,
  opaque_win32 = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT,
  opaque_win32_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
  d3d11_texture = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT,
  d3d11_texture_kmt = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT,
  d3d12_heap = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT,
  d3d12_resource = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT,
  opaque_fd_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,
  opaque_win32_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,
  opaque_win32_kmt_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,
  d3d11_texture_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_BIT_KHR,
  d3d11_texture_kmt_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_TEXTURE_KMT_BIT_KHR,
  d3d12_heap_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_HEAP_BIT_KHR,
  d3d12_resource_khr = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D12_RESOURCE_BIT_KHR,
  dma_buf_ext = VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT,
  android_hardware_buffer_android = VK_EXTERNAL_MEMORY_HANDLE_TYPE_ANDROID_HARDWARE_BUFFER_BIT_ANDROID,
  host_allocation_ext = VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_ALLOCATION_BIT_EXT,
  host_mapped_foreign_memory_ext = VK_EXTERNAL_MEMORY_HANDLE_TYPE_HOST_MAPPED_FOREIGN_MEMORY_BIT_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_memory_handle_type_flags);

using external_memory_handle_type_flags_khr = external_memory_handle_type_flags;

inline std::ostream& operator<<(std::ostream& o, external_memory_handle_type_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_memory_handle_type_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_fd)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_win32)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_win32_kmt)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d11_texture)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d11_texture_kmt)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d12_heap)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d12_resource)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_fd_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_win32_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, opaque_win32_kmt_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d11_texture_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d11_texture_kmt_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d12_heap_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, d3d12_resource_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, dma_buf_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, android_hardware_buffer_android)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, host_allocation_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags, host_mapped_foreign_memory_ext)
  SPK_END_BITMASK_OUTPUT(external_memory_handle_type_flags)
}
// bitmask VkExternalMemoryHandleTypeFlagsNV
enum class external_memory_handle_type_flags_nv {
  opaque_win32_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT_NV,
  opaque_win32_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_NV,
  d3d11_image_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_BIT_NV,
  d3d11_image_kmt_nv = VK_EXTERNAL_MEMORY_HANDLE_TYPE_D3D11_IMAGE_KMT_BIT_NV,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_memory_handle_type_flags_nv);

inline std::ostream& operator<<(std::ostream& o, external_memory_handle_type_flags_nv e){
  SPK_BEGIN_BITMASK_OUTPUT(external_memory_handle_type_flags_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags_nv, opaque_win32_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags_nv, opaque_win32_kmt_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags_nv, d3d11_image_nv)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_memory_handle_type_flags_nv, d3d11_image_kmt_nv)
  SPK_END_BITMASK_OUTPUT(external_memory_handle_type_flags_nv)
}
// bitmask VkExternalSemaphoreFeatureFlags
enum class external_semaphore_feature_flags {
  exportable = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT,
  importable = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT,
  exportable_khr = VK_EXTERNAL_SEMAPHORE_FEATURE_EXPORTABLE_BIT_KHR,
  importable_khr = VK_EXTERNAL_SEMAPHORE_FEATURE_IMPORTABLE_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_semaphore_feature_flags);

using external_semaphore_feature_flags_khr = external_semaphore_feature_flags;

inline std::ostream& operator<<(std::ostream& o, external_semaphore_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_semaphore_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_feature_flags, exportable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_feature_flags, importable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_feature_flags, exportable_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_feature_flags, importable_khr)
  SPK_END_BITMASK_OUTPUT(external_semaphore_feature_flags)
}
// bitmask VkExternalSemaphoreHandleTypeFlags
enum class external_semaphore_handle_type_flags {
  opaque_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT,
  opaque_win32 = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT,
  opaque_win32_kmt = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT,
  d3d12_fence = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT,
  sync_fd = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT,
  opaque_fd_khr = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT_KHR,
  opaque_win32_khr = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT_KHR,
  opaque_win32_kmt_khr = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_KMT_BIT_KHR,
  d3d12_fence_khr = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_D3D12_FENCE_BIT_KHR,
  sync_fd_khr = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_SYNC_FD_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(external_semaphore_handle_type_flags);

using external_semaphore_handle_type_flags_khr = external_semaphore_handle_type_flags;

inline std::ostream& operator<<(std::ostream& o, external_semaphore_handle_type_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(external_semaphore_handle_type_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_fd)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_win32)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_win32_kmt)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, d3d12_fence)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, sync_fd)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_fd_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_win32_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, opaque_win32_kmt_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, d3d12_fence_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(external_semaphore_handle_type_flags, sync_fd_khr)
  SPK_END_BITMASK_OUTPUT(external_semaphore_handle_type_flags)
}
// bitmask VkFenceCreateFlags
enum class fence_create_flags {
  signaled = VK_FENCE_CREATE_SIGNALED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(fence_create_flags);

inline std::ostream& operator<<(std::ostream& o, fence_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(fence_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(fence_create_flags, signaled)
  SPK_END_BITMASK_OUTPUT(fence_create_flags)
}
// bitmask VkFenceImportFlags
enum class fence_import_flags {
  temporary = VK_FENCE_IMPORT_TEMPORARY_BIT,
  temporary_khr = VK_FENCE_IMPORT_TEMPORARY_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(fence_import_flags);

using fence_import_flags_khr = fence_import_flags;

inline std::ostream& operator<<(std::ostream& o, fence_import_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(fence_import_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(fence_import_flags, temporary)
  SPK_BITMASK_OUTPUT_ENUMERATOR(fence_import_flags, temporary_khr)
  SPK_END_BITMASK_OUTPUT(fence_import_flags)
}
// bitmask VkFormatFeatureFlags
enum class format_feature_flags {
  sampled_image = VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT,
  storage_image = VK_FORMAT_FEATURE_STORAGE_IMAGE_BIT,
  storage_image_atomic = VK_FORMAT_FEATURE_STORAGE_IMAGE_ATOMIC_BIT,
  uniform_texel_buffer = VK_FORMAT_FEATURE_UNIFORM_TEXEL_BUFFER_BIT,
  storage_texel_buffer = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_BIT,
  storage_texel_buffer_atomic = VK_FORMAT_FEATURE_STORAGE_TEXEL_BUFFER_ATOMIC_BIT,
  vertex_buffer = VK_FORMAT_FEATURE_VERTEX_BUFFER_BIT,
  color_attachment = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT,
  color_attachment_blend = VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BLEND_BIT,
  depth_stencil_attachment = VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT,
  blit_src = VK_FORMAT_FEATURE_BLIT_SRC_BIT,
  blit_dst = VK_FORMAT_FEATURE_BLIT_DST_BIT,
  sampled_image_filter_linear = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_LINEAR_BIT,
  transfer_src = VK_FORMAT_FEATURE_TRANSFER_SRC_BIT,
  transfer_dst = VK_FORMAT_FEATURE_TRANSFER_DST_BIT,
  midpoint_chroma_samples = VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT,
  sampled_image_ycbcr_conversion_linear_filter = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT,
  sampled_image_ycbcr_conversion_separate_reconstruction_filter = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT,
  sampled_image_ycbcr_conversion_chroma_reconstruction_explicit = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT,
  sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT,
  disjoint = VK_FORMAT_FEATURE_DISJOINT_BIT,
  cosited_chroma_samples = VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT,
  sampled_image_filter_cubic_img = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_CUBIC_BIT_IMG,
  transfer_src_khr = VK_FORMAT_FEATURE_TRANSFER_SRC_BIT_KHR,
  transfer_dst_khr = VK_FORMAT_FEATURE_TRANSFER_DST_BIT_KHR,
  sampled_image_filter_minmax_ext = VK_FORMAT_FEATURE_SAMPLED_IMAGE_FILTER_MINMAX_BIT_EXT,
  midpoint_chroma_samples_khr = VK_FORMAT_FEATURE_MIDPOINT_CHROMA_SAMPLES_BIT_KHR,
  sampled_image_ycbcr_conversion_linear_filter_khr = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_LINEAR_FILTER_BIT_KHR,
  sampled_image_ycbcr_conversion_separate_reconstruction_filter_khr = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_SEPARATE_RECONSTRUCTION_FILTER_BIT_KHR,
  sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_khr = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_BIT_KHR,
  sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_khr = VK_FORMAT_FEATURE_SAMPLED_IMAGE_YCBCR_CONVERSION_CHROMA_RECONSTRUCTION_EXPLICIT_FORCEABLE_BIT_KHR,
  disjoint_khr = VK_FORMAT_FEATURE_DISJOINT_BIT_KHR,
  cosited_chroma_samples_khr = VK_FORMAT_FEATURE_COSITED_CHROMA_SAMPLES_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(format_feature_flags);

inline std::ostream& operator<<(std::ostream& o, format_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(format_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, storage_image)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, storage_image_atomic)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, uniform_texel_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, storage_texel_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, storage_texel_buffer_atomic)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, vertex_buffer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, color_attachment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, color_attachment_blend)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, depth_stencil_attachment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, blit_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, blit_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_filter_linear)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, transfer_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, transfer_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, midpoint_chroma_samples)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_linear_filter)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_separate_reconstruction_filter)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_chroma_reconstruction_explicit)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, disjoint)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, cosited_chroma_samples)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_filter_cubic_img)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, transfer_src_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, transfer_dst_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_filter_minmax_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, midpoint_chroma_samples_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_linear_filter_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_separate_reconstruction_filter_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, disjoint_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(format_feature_flags, cosited_chroma_samples_khr)
  SPK_END_BITMASK_OUTPUT(format_feature_flags)
}
// bitmask VkImageAspectFlags
enum class image_aspect_flags {
  color = VK_IMAGE_ASPECT_COLOR_BIT,
  depth = VK_IMAGE_ASPECT_DEPTH_BIT,
  stencil = VK_IMAGE_ASPECT_STENCIL_BIT,
  metadata = VK_IMAGE_ASPECT_METADATA_BIT,
  plane_0 = VK_IMAGE_ASPECT_PLANE_0_BIT,
  plane_1 = VK_IMAGE_ASPECT_PLANE_1_BIT,
  plane_2 = VK_IMAGE_ASPECT_PLANE_2_BIT,
  plane_0_khr = VK_IMAGE_ASPECT_PLANE_0_BIT_KHR,
  plane_1_khr = VK_IMAGE_ASPECT_PLANE_1_BIT_KHR,
  plane_2_khr = VK_IMAGE_ASPECT_PLANE_2_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(image_aspect_flags);

inline std::ostream& operator<<(std::ostream& o, image_aspect_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(image_aspect_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, color)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, depth)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, stencil)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, metadata)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_0)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_1)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_2)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_0_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_1_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_aspect_flags, plane_2_khr)
  SPK_END_BITMASK_OUTPUT(image_aspect_flags)
}
// bitmask VkImageCreateFlags
enum class image_create_flags {
  sparse_binding = VK_IMAGE_CREATE_SPARSE_BINDING_BIT,
  sparse_residency = VK_IMAGE_CREATE_SPARSE_RESIDENCY_BIT,
  sparse_aliased = VK_IMAGE_CREATE_SPARSE_ALIASED_BIT,
  mutable_format = VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT,
  cube_compatible = VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT,
  alias = VK_IMAGE_CREATE_ALIAS_BIT,
  split_instance_bind_regions = VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT,
  n2d_array_compatible = VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT,
  block_texel_view_compatible = VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT,
  extended_usage = VK_IMAGE_CREATE_EXTENDED_USAGE_BIT,
  protected_ = VK_IMAGE_CREATE_PROTECTED_BIT,
  disjoint = VK_IMAGE_CREATE_DISJOINT_BIT,
  split_instance_bind_regions_khr = VK_IMAGE_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR,
  n2d_array_compatible_khr = VK_IMAGE_CREATE_2D_ARRAY_COMPATIBLE_BIT_KHR,
  block_texel_view_compatible_khr = VK_IMAGE_CREATE_BLOCK_TEXEL_VIEW_COMPATIBLE_BIT_KHR,
  extended_usage_khr = VK_IMAGE_CREATE_EXTENDED_USAGE_BIT_KHR,
  sample_locations_compatible_depth_ext = VK_IMAGE_CREATE_SAMPLE_LOCATIONS_COMPATIBLE_DEPTH_BIT_EXT,
  disjoint_khr = VK_IMAGE_CREATE_DISJOINT_BIT_KHR,
  alias_khr = VK_IMAGE_CREATE_ALIAS_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(image_create_flags);

inline std::ostream& operator<<(std::ostream& o, image_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(image_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, sparse_binding)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, sparse_residency)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, sparse_aliased)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, mutable_format)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, cube_compatible)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, alias)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, split_instance_bind_regions)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, n2d_array_compatible)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, block_texel_view_compatible)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, extended_usage)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, protected_)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, disjoint)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, split_instance_bind_regions_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, n2d_array_compatible_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, block_texel_view_compatible_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, extended_usage_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, sample_locations_compatible_depth_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, disjoint_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_create_flags, alias_khr)
  SPK_END_BITMASK_OUTPUT(image_create_flags)
}
// bitmask VkImageUsageFlags
enum class image_usage_flags {
  transfer_src = VK_IMAGE_USAGE_TRANSFER_SRC_BIT,
  transfer_dst = VK_IMAGE_USAGE_TRANSFER_DST_BIT,
  sampled = VK_IMAGE_USAGE_SAMPLED_BIT,
  storage = VK_IMAGE_USAGE_STORAGE_BIT,
  color_attachment = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT,
  depth_stencil_attachment = VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT,
  transient_attachment = VK_IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT,
  input_attachment = VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(image_usage_flags);

inline std::ostream& operator<<(std::ostream& o, image_usage_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(image_usage_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, transfer_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, transfer_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, sampled)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, storage)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, color_attachment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, depth_stencil_attachment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, transient_attachment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(image_usage_flags, input_attachment)
  SPK_END_BITMASK_OUTPUT(image_usage_flags)
}
// bitmask VkIndirectCommandsLayoutUsageFlagsNVX
enum class indirect_commands_layout_usage_flags_nvx {
  unordered_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_UNORDERED_SEQUENCES_BIT_NVX,
  sparse_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_SPARSE_SEQUENCES_BIT_NVX,
  empty_executions_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_EMPTY_EXECUTIONS_BIT_NVX,
  indexed_sequences_nvx = VK_INDIRECT_COMMANDS_LAYOUT_USAGE_INDEXED_SEQUENCES_BIT_NVX,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(indirect_commands_layout_usage_flags_nvx);

inline std::ostream& operator<<(std::ostream& o, indirect_commands_layout_usage_flags_nvx e){
  SPK_BEGIN_BITMASK_OUTPUT(indirect_commands_layout_usage_flags_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(indirect_commands_layout_usage_flags_nvx, unordered_sequences_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(indirect_commands_layout_usage_flags_nvx, sparse_sequences_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(indirect_commands_layout_usage_flags_nvx, empty_executions_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(indirect_commands_layout_usage_flags_nvx, indexed_sequences_nvx)
  SPK_END_BITMASK_OUTPUT(indirect_commands_layout_usage_flags_nvx)
}
// bitmask VkMemoryAllocateFlags
enum class memory_allocate_flags {
  device_mask = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT,
  device_mask_khr = VK_MEMORY_ALLOCATE_DEVICE_MASK_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(memory_allocate_flags);

using memory_allocate_flags_khr = memory_allocate_flags;

inline std::ostream& operator<<(std::ostream& o, memory_allocate_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(memory_allocate_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_allocate_flags, device_mask)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_allocate_flags, device_mask_khr)
  SPK_END_BITMASK_OUTPUT(memory_allocate_flags)
}
// bitmask VkMemoryHeapFlags
enum class memory_heap_flags {
  device_local = VK_MEMORY_HEAP_DEVICE_LOCAL_BIT,
  multi_instance = VK_MEMORY_HEAP_MULTI_INSTANCE_BIT,
  multi_instance_khr = VK_MEMORY_HEAP_MULTI_INSTANCE_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(memory_heap_flags);

inline std::ostream& operator<<(std::ostream& o, memory_heap_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(memory_heap_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_heap_flags, device_local)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_heap_flags, multi_instance)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_heap_flags, multi_instance_khr)
  SPK_END_BITMASK_OUTPUT(memory_heap_flags)
}
// bitmask VkMemoryPropertyFlags
enum class memory_property_flags {
  device_local = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
  host_visible = VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT,
  host_coherent = VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
  host_cached = VK_MEMORY_PROPERTY_HOST_CACHED_BIT,
  lazily_allocated = VK_MEMORY_PROPERTY_LAZILY_ALLOCATED_BIT,
  protected_ = VK_MEMORY_PROPERTY_PROTECTED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(memory_property_flags);

inline std::ostream& operator<<(std::ostream& o, memory_property_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(memory_property_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, device_local)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, host_visible)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, host_coherent)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, host_cached)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, lazily_allocated)
  SPK_BITMASK_OUTPUT_ENUMERATOR(memory_property_flags, protected_)
  SPK_END_BITMASK_OUTPUT(memory_property_flags)
}
// bitmask VkObjectEntryUsageFlagsNVX
enum class object_entry_usage_flags_nvx {
  graphics_nvx = VK_OBJECT_ENTRY_USAGE_GRAPHICS_BIT_NVX,
  compute_nvx = VK_OBJECT_ENTRY_USAGE_COMPUTE_BIT_NVX,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(object_entry_usage_flags_nvx);

inline std::ostream& operator<<(std::ostream& o, object_entry_usage_flags_nvx e){
  SPK_BEGIN_BITMASK_OUTPUT(object_entry_usage_flags_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(object_entry_usage_flags_nvx, graphics_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(object_entry_usage_flags_nvx, compute_nvx)
  SPK_END_BITMASK_OUTPUT(object_entry_usage_flags_nvx)
}
// bitmask VkPeerMemoryFeatureFlags
enum class peer_memory_feature_flags {
  copy_src = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT,
  copy_dst = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT,
  generic_src = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT,
  generic_dst = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT,
  copy_src_khr = VK_PEER_MEMORY_FEATURE_COPY_SRC_BIT_KHR,
  copy_dst_khr = VK_PEER_MEMORY_FEATURE_COPY_DST_BIT_KHR,
  generic_src_khr = VK_PEER_MEMORY_FEATURE_GENERIC_SRC_BIT_KHR,
  generic_dst_khr = VK_PEER_MEMORY_FEATURE_GENERIC_DST_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(peer_memory_feature_flags);

using peer_memory_feature_flags_khr = peer_memory_feature_flags;

inline std::ostream& operator<<(std::ostream& o, peer_memory_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(peer_memory_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, copy_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, copy_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, generic_src)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, generic_dst)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, copy_src_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, copy_dst_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, generic_src_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(peer_memory_feature_flags, generic_dst_khr)
  SPK_END_BITMASK_OUTPUT(peer_memory_feature_flags)
}
// bitmask VkPipelineCreateFlags
enum class pipeline_create_flags {
  disable_optimization = VK_PIPELINE_CREATE_DISABLE_OPTIMIZATION_BIT,
  allow_derivatives = VK_PIPELINE_CREATE_ALLOW_DERIVATIVES_BIT,
  derivative = VK_PIPELINE_CREATE_DERIVATIVE_BIT,
  view_index_from_device_index = VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT,
  dispatch_base = VK_PIPELINE_CREATE_DISPATCH_BASE,
  view_index_from_device_index_khr = VK_PIPELINE_CREATE_VIEW_INDEX_FROM_DEVICE_INDEX_BIT_KHR,
  dispatch_base_khr = VK_PIPELINE_CREATE_DISPATCH_BASE_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(pipeline_create_flags);

inline std::ostream& operator<<(std::ostream& o, pipeline_create_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(pipeline_create_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, disable_optimization)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, allow_derivatives)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, derivative)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, view_index_from_device_index)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, dispatch_base)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, view_index_from_device_index_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_create_flags, dispatch_base_khr)
  SPK_END_BITMASK_OUTPUT(pipeline_create_flags)
}
// bitmask VkPipelineStageFlags
enum class pipeline_stage_flags {
  top_of_pipe = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
  draw_indirect = VK_PIPELINE_STAGE_DRAW_INDIRECT_BIT,
  vertex_input = VK_PIPELINE_STAGE_VERTEX_INPUT_BIT,
  vertex_shader = VK_PIPELINE_STAGE_VERTEX_SHADER_BIT,
  tessellation_control_shader = VK_PIPELINE_STAGE_TESSELLATION_CONTROL_SHADER_BIT,
  tessellation_evaluation_shader = VK_PIPELINE_STAGE_TESSELLATION_EVALUATION_SHADER_BIT,
  geometry_shader = VK_PIPELINE_STAGE_GEOMETRY_SHADER_BIT,
  fragment_shader = VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
  early_fragment_tests = VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT,
  late_fragment_tests = VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
  color_attachment_output = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
  compute_shader = VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT,
  transfer = VK_PIPELINE_STAGE_TRANSFER_BIT,
  bottom_of_pipe = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
  host = VK_PIPELINE_STAGE_HOST_BIT,
  all_graphics = VK_PIPELINE_STAGE_ALL_GRAPHICS_BIT,
  all_commands = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
  conditional_rendering_ext = VK_PIPELINE_STAGE_CONDITIONAL_RENDERING_BIT_EXT,
  command_process_nvx = VK_PIPELINE_STAGE_COMMAND_PROCESS_BIT_NVX,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(pipeline_stage_flags);

inline std::ostream& operator<<(std::ostream& o, pipeline_stage_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(pipeline_stage_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, top_of_pipe)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, draw_indirect)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, vertex_input)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, vertex_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, tessellation_control_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, tessellation_evaluation_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, geometry_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, fragment_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, early_fragment_tests)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, late_fragment_tests)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, color_attachment_output)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, compute_shader)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, transfer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, bottom_of_pipe)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, host)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, all_graphics)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, all_commands)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, conditional_rendering_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(pipeline_stage_flags, command_process_nvx)
  SPK_END_BITMASK_OUTPUT(pipeline_stage_flags)
}
// bitmask VkQueryControlFlags
enum class query_control_flags {
  precise = VK_QUERY_CONTROL_PRECISE_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(query_control_flags);

inline std::ostream& operator<<(std::ostream& o, query_control_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(query_control_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_control_flags, precise)
  SPK_END_BITMASK_OUTPUT(query_control_flags)
}
// bitmask VkQueryPipelineStatisticFlags
enum class query_pipeline_statistic_flags {
  input_assembly_vertices = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_VERTICES_BIT,
  input_assembly_primitives = VK_QUERY_PIPELINE_STATISTIC_INPUT_ASSEMBLY_PRIMITIVES_BIT,
  vertex_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_VERTEX_SHADER_INVOCATIONS_BIT,
  geometry_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_INVOCATIONS_BIT,
  geometry_shader_primitives = VK_QUERY_PIPELINE_STATISTIC_GEOMETRY_SHADER_PRIMITIVES_BIT,
  clipping_invocations = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_INVOCATIONS_BIT,
  clipping_primitives = VK_QUERY_PIPELINE_STATISTIC_CLIPPING_PRIMITIVES_BIT,
  fragment_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_FRAGMENT_SHADER_INVOCATIONS_BIT,
  tessellation_control_shader_patches = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_CONTROL_SHADER_PATCHES_BIT,
  tessellation_evaluation_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_TESSELLATION_EVALUATION_SHADER_INVOCATIONS_BIT,
  compute_shader_invocations = VK_QUERY_PIPELINE_STATISTIC_COMPUTE_SHADER_INVOCATIONS_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(query_pipeline_statistic_flags);

inline std::ostream& operator<<(std::ostream& o, query_pipeline_statistic_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(query_pipeline_statistic_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, input_assembly_vertices)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, input_assembly_primitives)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, vertex_shader_invocations)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, geometry_shader_invocations)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, geometry_shader_primitives)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, clipping_invocations)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, clipping_primitives)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, fragment_shader_invocations)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, tessellation_control_shader_patches)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, tessellation_evaluation_shader_invocations)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_pipeline_statistic_flags, compute_shader_invocations)
  SPK_END_BITMASK_OUTPUT(query_pipeline_statistic_flags)
}
// bitmask VkQueryResultFlags
enum class query_result_flags {
  n64 = VK_QUERY_RESULT_64_BIT,
  wait = VK_QUERY_RESULT_WAIT_BIT,
  with_availability = VK_QUERY_RESULT_WITH_AVAILABILITY_BIT,
  partial = VK_QUERY_RESULT_PARTIAL_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(query_result_flags);

inline std::ostream& operator<<(std::ostream& o, query_result_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(query_result_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_result_flags, n64)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_result_flags, wait)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_result_flags, with_availability)
  SPK_BITMASK_OUTPUT_ENUMERATOR(query_result_flags, partial)
  SPK_END_BITMASK_OUTPUT(query_result_flags)
}
// bitmask VkQueueFlags
enum class queue_flags {
  graphics = VK_QUEUE_GRAPHICS_BIT,
  compute = VK_QUEUE_COMPUTE_BIT,
  transfer = VK_QUEUE_TRANSFER_BIT,
  sparse_binding = VK_QUEUE_SPARSE_BINDING_BIT,
  protected_ = VK_QUEUE_PROTECTED_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(queue_flags);

inline std::ostream& operator<<(std::ostream& o, queue_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(queue_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(queue_flags, graphics)
  SPK_BITMASK_OUTPUT_ENUMERATOR(queue_flags, compute)
  SPK_BITMASK_OUTPUT_ENUMERATOR(queue_flags, transfer)
  SPK_BITMASK_OUTPUT_ENUMERATOR(queue_flags, sparse_binding)
  SPK_BITMASK_OUTPUT_ENUMERATOR(queue_flags, protected_)
  SPK_END_BITMASK_OUTPUT(queue_flags)
}
// bitmask VkSampleCountFlags
enum class sample_count_flags {
  n1 = VK_SAMPLE_COUNT_1_BIT,
  n2 = VK_SAMPLE_COUNT_2_BIT,
  n4 = VK_SAMPLE_COUNT_4_BIT,
  n8 = VK_SAMPLE_COUNT_8_BIT,
  n16 = VK_SAMPLE_COUNT_16_BIT,
  n32 = VK_SAMPLE_COUNT_32_BIT,
  n64 = VK_SAMPLE_COUNT_64_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(sample_count_flags);

inline std::ostream& operator<<(std::ostream& o, sample_count_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(sample_count_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n1)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n2)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n4)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n8)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n16)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n32)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sample_count_flags, n64)
  SPK_END_BITMASK_OUTPUT(sample_count_flags)
}
// bitmask VkSemaphoreImportFlags
enum class semaphore_import_flags {
  temporary = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT,
  temporary_khr = VK_SEMAPHORE_IMPORT_TEMPORARY_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(semaphore_import_flags);

using semaphore_import_flags_khr = semaphore_import_flags;

inline std::ostream& operator<<(std::ostream& o, semaphore_import_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(semaphore_import_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(semaphore_import_flags, temporary)
  SPK_BITMASK_OUTPUT_ENUMERATOR(semaphore_import_flags, temporary_khr)
  SPK_END_BITMASK_OUTPUT(semaphore_import_flags)
}
// bitmask VkShaderStageFlags
enum class shader_stage_flags {
  vertex = VK_SHADER_STAGE_VERTEX_BIT,
  tessellation_control = VK_SHADER_STAGE_TESSELLATION_CONTROL_BIT,
  tessellation_evaluation = VK_SHADER_STAGE_TESSELLATION_EVALUATION_BIT,
  geometry = VK_SHADER_STAGE_GEOMETRY_BIT,
  fragment = VK_SHADER_STAGE_FRAGMENT_BIT,
  compute = VK_SHADER_STAGE_COMPUTE_BIT,
  all_graphics = VK_SHADER_STAGE_ALL_GRAPHICS,
  all = VK_SHADER_STAGE_ALL,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(shader_stage_flags);

inline std::ostream& operator<<(std::ostream& o, shader_stage_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(shader_stage_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, vertex)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, tessellation_control)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, tessellation_evaluation)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, geometry)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, fragment)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, compute)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, all_graphics)
  SPK_BITMASK_OUTPUT_ENUMERATOR(shader_stage_flags, all)
  SPK_END_BITMASK_OUTPUT(shader_stage_flags)
}
// bitmask VkSparseImageFormatFlags
enum class sparse_image_format_flags {
  single_miptail = VK_SPARSE_IMAGE_FORMAT_SINGLE_MIPTAIL_BIT,
  aligned_mip_size = VK_SPARSE_IMAGE_FORMAT_ALIGNED_MIP_SIZE_BIT,
  nonstandard_block_size = VK_SPARSE_IMAGE_FORMAT_NONSTANDARD_BLOCK_SIZE_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(sparse_image_format_flags);

inline std::ostream& operator<<(std::ostream& o, sparse_image_format_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(sparse_image_format_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sparse_image_format_flags, single_miptail)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sparse_image_format_flags, aligned_mip_size)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sparse_image_format_flags, nonstandard_block_size)
  SPK_END_BITMASK_OUTPUT(sparse_image_format_flags)
}
// bitmask VkSparseMemoryBindFlags
enum class sparse_memory_bind_flags {
  metadata = VK_SPARSE_MEMORY_BIND_METADATA_BIT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(sparse_memory_bind_flags);

inline std::ostream& operator<<(std::ostream& o, sparse_memory_bind_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(sparse_memory_bind_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(sparse_memory_bind_flags, metadata)
  SPK_END_BITMASK_OUTPUT(sparse_memory_bind_flags)
}
// bitmask VkStencilFaceFlags
enum class stencil_face_flags {
  face_front = VK_STENCIL_FACE_FRONT_BIT,
  face_back = VK_STENCIL_FACE_BACK_BIT,
  front_and_back = VK_STENCIL_FRONT_AND_BACK,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(stencil_face_flags);

inline std::ostream& operator<<(std::ostream& o, stencil_face_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(stencil_face_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(stencil_face_flags, face_front)
  SPK_BITMASK_OUTPUT_ENUMERATOR(stencil_face_flags, face_back)
  SPK_BITMASK_OUTPUT_ENUMERATOR(stencil_face_flags, front_and_back)
  SPK_END_BITMASK_OUTPUT(stencil_face_flags)
}
// bitmask VkSubgroupFeatureFlags
enum class subgroup_feature_flags {
  basic = VK_SUBGROUP_FEATURE_BASIC_BIT,
  vote = VK_SUBGROUP_FEATURE_VOTE_BIT,
  arithmetic = VK_SUBGROUP_FEATURE_ARITHMETIC_BIT,
  ballot = VK_SUBGROUP_FEATURE_BALLOT_BIT,
  shuffle = VK_SUBGROUP_FEATURE_SHUFFLE_BIT,
  shuffle_relative = VK_SUBGROUP_FEATURE_SHUFFLE_RELATIVE_BIT,
  clustered = VK_SUBGROUP_FEATURE_CLUSTERED_BIT,
  quad = VK_SUBGROUP_FEATURE_QUAD_BIT,
  partitioned_nv = VK_SUBGROUP_FEATURE_PARTITIONED_BIT_NV,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(subgroup_feature_flags);

inline std::ostream& operator<<(std::ostream& o, subgroup_feature_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(subgroup_feature_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, basic)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, vote)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, arithmetic)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, ballot)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, shuffle)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, shuffle_relative)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, clustered)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, quad)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subgroup_feature_flags, partitioned_nv)
  SPK_END_BITMASK_OUTPUT(subgroup_feature_flags)
}
// bitmask VkSubpassDescriptionFlags
enum class subpass_description_flags {
  per_view_attributes_nvx = VK_SUBPASS_DESCRIPTION_PER_VIEW_ATTRIBUTES_BIT_NVX,
  per_view_position_x_only_nvx = VK_SUBPASS_DESCRIPTION_PER_VIEW_POSITION_X_ONLY_BIT_NVX,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(subpass_description_flags);

inline std::ostream& operator<<(std::ostream& o, subpass_description_flags e){
  SPK_BEGIN_BITMASK_OUTPUT(subpass_description_flags)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subpass_description_flags, per_view_attributes_nvx)
  SPK_BITMASK_OUTPUT_ENUMERATOR(subpass_description_flags, per_view_position_x_only_nvx)
  SPK_END_BITMASK_OUTPUT(subpass_description_flags)
}
// bitmask VkSurfaceCounterFlagsEXT
enum class surface_counter_flags_ext {
  vblank_ext = VK_SURFACE_COUNTER_VBLANK_EXT,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(surface_counter_flags_ext);

inline std::ostream& operator<<(std::ostream& o, surface_counter_flags_ext e){
  SPK_BEGIN_BITMASK_OUTPUT(surface_counter_flags_ext)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_counter_flags_ext, vblank_ext)
  SPK_END_BITMASK_OUTPUT(surface_counter_flags_ext)
}
// bitmask VkSurfaceTransformFlagsKHR
enum class surface_transform_flags_khr {
  identity_khr = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR,
  rotate_90_khr = VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR,
  rotate_180_khr = VK_SURFACE_TRANSFORM_ROTATE_180_BIT_KHR,
  rotate_270_khr = VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR,
  horizontal_mirror_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_BIT_KHR,
  horizontal_mirror_rotate_90_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT_KHR,
  horizontal_mirror_rotate_180_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT_KHR,
  horizontal_mirror_rotate_270_khr = VK_SURFACE_TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT_KHR,
  inherit_khr = VK_SURFACE_TRANSFORM_INHERIT_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(surface_transform_flags_khr);

inline std::ostream& operator<<(std::ostream& o, surface_transform_flags_khr e){
  SPK_BEGIN_BITMASK_OUTPUT(surface_transform_flags_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, identity_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, rotate_90_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, rotate_180_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, rotate_270_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, horizontal_mirror_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, horizontal_mirror_rotate_90_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, horizontal_mirror_rotate_180_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, horizontal_mirror_rotate_270_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(surface_transform_flags_khr, inherit_khr)
  SPK_END_BITMASK_OUTPUT(surface_transform_flags_khr)
}
// bitmask VkSwapchainCreateFlagsKHR
enum class swapchain_create_flags_khr {
  split_instance_bind_regions_khr = VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR,
  protected_khr = VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR,
};
SPK_DEFINE_BITMASK_BITWISE_OPS(swapchain_create_flags_khr);

inline std::ostream& operator<<(std::ostream& o, swapchain_create_flags_khr e){
  SPK_BEGIN_BITMASK_OUTPUT(swapchain_create_flags_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(swapchain_create_flags_khr, split_instance_bind_regions_khr)
  SPK_BITMASK_OUTPUT_ENUMERATOR(swapchain_create_flags_khr, protected_khr)
  SPK_END_BITMASK_OUTPUT(swapchain_create_flags_khr)
}
// enumeration VkAttachmentLoadOp
enum class attachment_load_op {
  load = VK_ATTACHMENT_LOAD_OP_LOAD,
  clear = VK_ATTACHMENT_LOAD_OP_CLEAR,
  dont_care = VK_ATTACHMENT_LOAD_OP_DONT_CARE,
};

inline std::ostream& operator<<(std::ostream& o, attachment_load_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(attachment_load_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(attachment_load_op, load)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(attachment_load_op, clear)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(attachment_load_op, dont_care)
  SPK_END_ENUMERATION_OUTPUT(attachment_load_op)
}
// enumeration VkAttachmentStoreOp
enum class attachment_store_op {
  store = VK_ATTACHMENT_STORE_OP_STORE,
  dont_care = VK_ATTACHMENT_STORE_OP_DONT_CARE,
};

inline std::ostream& operator<<(std::ostream& o, attachment_store_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(attachment_store_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(attachment_store_op, store)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(attachment_store_op, dont_care)
  SPK_END_ENUMERATION_OUTPUT(attachment_store_op)
}
// enumeration VkBlendFactor
enum class blend_factor {
  zero = VK_BLEND_FACTOR_ZERO,
  one = VK_BLEND_FACTOR_ONE,
  src_color = VK_BLEND_FACTOR_SRC_COLOR,
  one_minus_src_color = VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR,
  dst_color = VK_BLEND_FACTOR_DST_COLOR,
  one_minus_dst_color = VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR,
  src_alpha = VK_BLEND_FACTOR_SRC_ALPHA,
  one_minus_src_alpha = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA,
  dst_alpha = VK_BLEND_FACTOR_DST_ALPHA,
  one_minus_dst_alpha = VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA,
  constant_color = VK_BLEND_FACTOR_CONSTANT_COLOR,
  one_minus_constant_color = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR,
  constant_alpha = VK_BLEND_FACTOR_CONSTANT_ALPHA,
  one_minus_constant_alpha = VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA,
  src_alpha_saturate = VK_BLEND_FACTOR_SRC_ALPHA_SATURATE,
  src1_color = VK_BLEND_FACTOR_SRC1_COLOR,
  one_minus_src1_color = VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR,
  src1_alpha = VK_BLEND_FACTOR_SRC1_ALPHA,
  one_minus_src1_alpha = VK_BLEND_FACTOR_ONE_MINUS_SRC1_ALPHA,
};

inline std::ostream& operator<<(std::ostream& o, blend_factor e){
  SPK_BEGIN_ENUMERATION_OUTPUT(blend_factor)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, zero)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, src_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_src_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, dst_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_dst_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, src_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_src_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, dst_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_dst_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, constant_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_constant_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, constant_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_constant_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, src_alpha_saturate)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, src1_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_src1_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, src1_alpha)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_factor, one_minus_src1_alpha)
  SPK_END_ENUMERATION_OUTPUT(blend_factor)
}
// enumeration VkBlendOp
enum class blend_op {
  add = VK_BLEND_OP_ADD,
  subtract = VK_BLEND_OP_SUBTRACT,
  reverse_subtract = VK_BLEND_OP_REVERSE_SUBTRACT,
  min = VK_BLEND_OP_MIN,
  max = VK_BLEND_OP_MAX,
  zero_ext = VK_BLEND_OP_ZERO_EXT,
  src_ext = VK_BLEND_OP_SRC_EXT,
  dst_ext = VK_BLEND_OP_DST_EXT,
  src_over_ext = VK_BLEND_OP_SRC_OVER_EXT,
  dst_over_ext = VK_BLEND_OP_DST_OVER_EXT,
  src_in_ext = VK_BLEND_OP_SRC_IN_EXT,
  dst_in_ext = VK_BLEND_OP_DST_IN_EXT,
  src_out_ext = VK_BLEND_OP_SRC_OUT_EXT,
  dst_out_ext = VK_BLEND_OP_DST_OUT_EXT,
  src_atop_ext = VK_BLEND_OP_SRC_ATOP_EXT,
  dst_atop_ext = VK_BLEND_OP_DST_ATOP_EXT,
  xor_ext = VK_BLEND_OP_XOR_EXT,
  multiply_ext = VK_BLEND_OP_MULTIPLY_EXT,
  screen_ext = VK_BLEND_OP_SCREEN_EXT,
  overlay_ext = VK_BLEND_OP_OVERLAY_EXT,
  darken_ext = VK_BLEND_OP_DARKEN_EXT,
  lighten_ext = VK_BLEND_OP_LIGHTEN_EXT,
  colordodge_ext = VK_BLEND_OP_COLORDODGE_EXT,
  colorburn_ext = VK_BLEND_OP_COLORBURN_EXT,
  hardlight_ext = VK_BLEND_OP_HARDLIGHT_EXT,
  softlight_ext = VK_BLEND_OP_SOFTLIGHT_EXT,
  difference_ext = VK_BLEND_OP_DIFFERENCE_EXT,
  exclusion_ext = VK_BLEND_OP_EXCLUSION_EXT,
  invert_ext = VK_BLEND_OP_INVERT_EXT,
  invert_rgb_ext = VK_BLEND_OP_INVERT_RGB_EXT,
  lineardodge_ext = VK_BLEND_OP_LINEARDODGE_EXT,
  linearburn_ext = VK_BLEND_OP_LINEARBURN_EXT,
  vividlight_ext = VK_BLEND_OP_VIVIDLIGHT_EXT,
  linearlight_ext = VK_BLEND_OP_LINEARLIGHT_EXT,
  pinlight_ext = VK_BLEND_OP_PINLIGHT_EXT,
  hardmix_ext = VK_BLEND_OP_HARDMIX_EXT,
  hsl_hue_ext = VK_BLEND_OP_HSL_HUE_EXT,
  hsl_saturation_ext = VK_BLEND_OP_HSL_SATURATION_EXT,
  hsl_color_ext = VK_BLEND_OP_HSL_COLOR_EXT,
  hsl_luminosity_ext = VK_BLEND_OP_HSL_LUMINOSITY_EXT,
  plus_ext = VK_BLEND_OP_PLUS_EXT,
  plus_clamped_ext = VK_BLEND_OP_PLUS_CLAMPED_EXT,
  plus_clamped_alpha_ext = VK_BLEND_OP_PLUS_CLAMPED_ALPHA_EXT,
  plus_darker_ext = VK_BLEND_OP_PLUS_DARKER_EXT,
  minus_ext = VK_BLEND_OP_MINUS_EXT,
  minus_clamped_ext = VK_BLEND_OP_MINUS_CLAMPED_EXT,
  contrast_ext = VK_BLEND_OP_CONTRAST_EXT,
  invert_ovg_ext = VK_BLEND_OP_INVERT_OVG_EXT,
  red_ext = VK_BLEND_OP_RED_EXT,
  green_ext = VK_BLEND_OP_GREEN_EXT,
  blue_ext = VK_BLEND_OP_BLUE_EXT,
};

inline std::ostream& operator<<(std::ostream& o, blend_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(blend_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, add)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, subtract)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, reverse_subtract)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, min)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, max)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, zero_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, src_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, dst_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, src_over_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, dst_over_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, src_in_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, dst_in_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, src_out_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, dst_out_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, src_atop_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, dst_atop_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, xor_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, multiply_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, screen_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, overlay_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, darken_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, lighten_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, colordodge_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, colorburn_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hardlight_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, softlight_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, difference_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, exclusion_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, invert_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, invert_rgb_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, lineardodge_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, linearburn_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, vividlight_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, linearlight_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, pinlight_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hardmix_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hsl_hue_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hsl_saturation_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hsl_color_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, hsl_luminosity_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, plus_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, plus_clamped_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, plus_clamped_alpha_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, plus_darker_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, minus_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, minus_clamped_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, contrast_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, invert_ovg_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, red_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, green_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_op, blue_ext)
  SPK_END_ENUMERATION_OUTPUT(blend_op)
}
// enumeration VkBlendOverlapEXT
enum class blend_overlap_ext {
  uncorrelated_ext = VK_BLEND_OVERLAP_UNCORRELATED_EXT,
  disjoint_ext = VK_BLEND_OVERLAP_DISJOINT_EXT,
  conjoint_ext = VK_BLEND_OVERLAP_CONJOINT_EXT,
};

inline std::ostream& operator<<(std::ostream& o, blend_overlap_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(blend_overlap_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_overlap_ext, uncorrelated_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_overlap_ext, disjoint_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(blend_overlap_ext, conjoint_ext)
  SPK_END_ENUMERATION_OUTPUT(blend_overlap_ext)
}
// enumeration VkBorderColor
enum class border_color {
  float_transparent_black = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK,
  int_transparent_black = VK_BORDER_COLOR_INT_TRANSPARENT_BLACK,
  float_opaque_black = VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK,
  int_opaque_black = VK_BORDER_COLOR_INT_OPAQUE_BLACK,
  float_opaque_white = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE,
  int_opaque_white = VK_BORDER_COLOR_INT_OPAQUE_WHITE,
};

inline std::ostream& operator<<(std::ostream& o, border_color e){
  SPK_BEGIN_ENUMERATION_OUTPUT(border_color)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, float_transparent_black)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, int_transparent_black)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, float_opaque_black)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, int_opaque_black)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, float_opaque_white)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(border_color, int_opaque_white)
  SPK_END_ENUMERATION_OUTPUT(border_color)
}
// enumeration VkChromaLocation
enum class chroma_location {
  cosited_even = VK_CHROMA_LOCATION_COSITED_EVEN,
  midpoint = VK_CHROMA_LOCATION_MIDPOINT,
  cosited_even_khr = VK_CHROMA_LOCATION_COSITED_EVEN_KHR,
  midpoint_khr = VK_CHROMA_LOCATION_MIDPOINT_KHR,
};

using chroma_location_khr = chroma_location;

inline std::ostream& operator<<(std::ostream& o, chroma_location e){
  SPK_BEGIN_ENUMERATION_OUTPUT(chroma_location)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(chroma_location, cosited_even)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(chroma_location, midpoint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(chroma_location, cosited_even_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(chroma_location, midpoint_khr)
  SPK_END_ENUMERATION_OUTPUT(chroma_location)
}
// enumeration VkColorSpaceKHR
enum class color_space_khr {
  srgb_nonlinear_khr = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR,
  display_p3_nonlinear_ext = VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT,
  extended_srgb_linear_ext = VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT,
  dci_p3_linear_ext = VK_COLOR_SPACE_DCI_P3_LINEAR_EXT,
  dci_p3_nonlinear_ext = VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT,
  bt709_linear_ext = VK_COLOR_SPACE_BT709_LINEAR_EXT,
  bt709_nonlinear_ext = VK_COLOR_SPACE_BT709_NONLINEAR_EXT,
  bt2020_linear_ext = VK_COLOR_SPACE_BT2020_LINEAR_EXT,
  hdr10_st2084_ext = VK_COLOR_SPACE_HDR10_ST2084_EXT,
  dolbyvision_ext = VK_COLOR_SPACE_DOLBYVISION_EXT,
  hdr10_hlg_ext = VK_COLOR_SPACE_HDR10_HLG_EXT,
  adobergb_linear_ext = VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT,
  adobergb_nonlinear_ext = VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT,
  pass_through_ext = VK_COLOR_SPACE_PASS_THROUGH_EXT,
  extended_srgb_nonlinear_ext = VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT,
};

inline std::ostream& operator<<(std::ostream& o, color_space_khr e){
  SPK_BEGIN_ENUMERATION_OUTPUT(color_space_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, srgb_nonlinear_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, display_p3_nonlinear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, extended_srgb_linear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, dci_p3_linear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, dci_p3_nonlinear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, bt709_linear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, bt709_nonlinear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, bt2020_linear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, hdr10_st2084_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, dolbyvision_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, hdr10_hlg_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, adobergb_linear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, adobergb_nonlinear_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, pass_through_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(color_space_khr, extended_srgb_nonlinear_ext)
  SPK_END_ENUMERATION_OUTPUT(color_space_khr)
}
// enumeration VkCommandBufferLevel
enum class command_buffer_level {
  primary = VK_COMMAND_BUFFER_LEVEL_PRIMARY,
  secondary = VK_COMMAND_BUFFER_LEVEL_SECONDARY,
};

inline std::ostream& operator<<(std::ostream& o, command_buffer_level e){
  SPK_BEGIN_ENUMERATION_OUTPUT(command_buffer_level)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(command_buffer_level, primary)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(command_buffer_level, secondary)
  SPK_END_ENUMERATION_OUTPUT(command_buffer_level)
}
// enumeration VkCompareOp
enum class compare_op {
  never = VK_COMPARE_OP_NEVER,
  less = VK_COMPARE_OP_LESS,
  equal = VK_COMPARE_OP_EQUAL,
  less_or_equal = VK_COMPARE_OP_LESS_OR_EQUAL,
  greater = VK_COMPARE_OP_GREATER,
  not_equal = VK_COMPARE_OP_NOT_EQUAL,
  greater_or_equal = VK_COMPARE_OP_GREATER_OR_EQUAL,
  always = VK_COMPARE_OP_ALWAYS,
};

inline std::ostream& operator<<(std::ostream& o, compare_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(compare_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, never)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, less)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, equal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, less_or_equal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, greater)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, not_equal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, greater_or_equal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(compare_op, always)
  SPK_END_ENUMERATION_OUTPUT(compare_op)
}
// enumeration VkComponentSwizzle
enum class component_swizzle {
  identity = VK_COMPONENT_SWIZZLE_IDENTITY,
  zero = VK_COMPONENT_SWIZZLE_ZERO,
  one = VK_COMPONENT_SWIZZLE_ONE,
  r = VK_COMPONENT_SWIZZLE_R,
  g = VK_COMPONENT_SWIZZLE_G,
  b = VK_COMPONENT_SWIZZLE_B,
  a = VK_COMPONENT_SWIZZLE_A,
};

inline std::ostream& operator<<(std::ostream& o, component_swizzle e){
  SPK_BEGIN_ENUMERATION_OUTPUT(component_swizzle)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, identity)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, zero)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, one)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, r)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, g)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, b)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(component_swizzle, a)
  SPK_END_ENUMERATION_OUTPUT(component_swizzle)
}
// enumeration VkConservativeRasterizationModeEXT
enum class conservative_rasterization_mode_ext {
  disabled_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_DISABLED_EXT,
  overestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_OVERESTIMATE_EXT,
  underestimate_ext = VK_CONSERVATIVE_RASTERIZATION_MODE_UNDERESTIMATE_EXT,
};

inline std::ostream& operator<<(std::ostream& o, conservative_rasterization_mode_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(conservative_rasterization_mode_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(conservative_rasterization_mode_ext, disabled_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(conservative_rasterization_mode_ext, overestimate_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(conservative_rasterization_mode_ext, underestimate_ext)
  SPK_END_ENUMERATION_OUTPUT(conservative_rasterization_mode_ext)
}
// enumeration VkCoverageModulationModeNV
enum class coverage_modulation_mode_nv {
  none_nv = VK_COVERAGE_MODULATION_MODE_NONE_NV,
  rgb_nv = VK_COVERAGE_MODULATION_MODE_RGB_NV,
  alpha_nv = VK_COVERAGE_MODULATION_MODE_ALPHA_NV,
  rgba_nv = VK_COVERAGE_MODULATION_MODE_RGBA_NV,
};

inline std::ostream& operator<<(std::ostream& o, coverage_modulation_mode_nv e){
  SPK_BEGIN_ENUMERATION_OUTPUT(coverage_modulation_mode_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(coverage_modulation_mode_nv, none_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(coverage_modulation_mode_nv, rgb_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(coverage_modulation_mode_nv, alpha_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(coverage_modulation_mode_nv, rgba_nv)
  SPK_END_ENUMERATION_OUTPUT(coverage_modulation_mode_nv)
}
// enumeration VkDebugReportObjectTypeEXT
enum class debug_report_object_type_ext {
  unknown_ext = VK_DEBUG_REPORT_OBJECT_TYPE_UNKNOWN_EXT,
  instance_ext = VK_DEBUG_REPORT_OBJECT_TYPE_INSTANCE_EXT,
  physical_device_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PHYSICAL_DEVICE_EXT,
  device_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_EXT,
  queue_ext = VK_DEBUG_REPORT_OBJECT_TYPE_QUEUE_EXT,
  semaphore_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SEMAPHORE_EXT,
  command_buffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_BUFFER_EXT,
  fence_ext = VK_DEBUG_REPORT_OBJECT_TYPE_FENCE_EXT,
  device_memory_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEVICE_MEMORY_EXT,
  buffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_EXT,
  image_ext = VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_EXT,
  event_ext = VK_DEBUG_REPORT_OBJECT_TYPE_EVENT_EXT,
  query_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_QUERY_POOL_EXT,
  buffer_view_ext = VK_DEBUG_REPORT_OBJECT_TYPE_BUFFER_VIEW_EXT,
  image_view_ext = VK_DEBUG_REPORT_OBJECT_TYPE_IMAGE_VIEW_EXT,
  shader_module_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SHADER_MODULE_EXT,
  pipeline_cache_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_CACHE_EXT,
  pipeline_layout_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_LAYOUT_EXT,
  render_pass_ext = VK_DEBUG_REPORT_OBJECT_TYPE_RENDER_PASS_EXT,
  pipeline_ext = VK_DEBUG_REPORT_OBJECT_TYPE_PIPELINE_EXT,
  descriptor_set_layout_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT_EXT,
  sampler_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_EXT,
  descriptor_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_POOL_EXT,
  descriptor_set_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_SET_EXT,
  framebuffer_ext = VK_DEBUG_REPORT_OBJECT_TYPE_FRAMEBUFFER_EXT,
  command_pool_ext = VK_DEBUG_REPORT_OBJECT_TYPE_COMMAND_POOL_EXT,
  surface_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SURFACE_KHR_EXT,
  swapchain_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SWAPCHAIN_KHR_EXT,
  debug_report_callback_ext_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT_EXT,
  display_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_KHR_EXT,
  display_mode_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DISPLAY_MODE_KHR_EXT,
  object_table_nvx_ext = VK_DEBUG_REPORT_OBJECT_TYPE_OBJECT_TABLE_NVX_EXT,
  indirect_commands_layout_nvx_ext = VK_DEBUG_REPORT_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX_EXT,
  validation_cache_ext_ext = VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT_EXT,
  sampler_ycbcr_conversion_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_EXT,
  descriptor_update_template_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_EXT,
  descriptor_update_template_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR_EXT,
  sampler_ycbcr_conversion_khr_ext = VK_DEBUG_REPORT_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR_EXT,
};

inline std::ostream& operator<<(std::ostream& o, debug_report_object_type_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(debug_report_object_type_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, unknown_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, instance_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, physical_device_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, device_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, queue_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, semaphore_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, command_buffer_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, fence_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, device_memory_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, buffer_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, image_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, event_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, query_pool_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, buffer_view_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, image_view_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, shader_module_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, pipeline_cache_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, pipeline_layout_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, render_pass_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, pipeline_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, descriptor_set_layout_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, sampler_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, descriptor_pool_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, descriptor_set_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, framebuffer_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, command_pool_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, surface_khr_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, swapchain_khr_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, debug_report_callback_ext_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, display_khr_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, display_mode_khr_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, object_table_nvx_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, indirect_commands_layout_nvx_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, validation_cache_ext_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, sampler_ycbcr_conversion_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, descriptor_update_template_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, descriptor_update_template_khr_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(debug_report_object_type_ext, sampler_ycbcr_conversion_khr_ext)
  SPK_END_ENUMERATION_OUTPUT(debug_report_object_type_ext)
}
// enumeration VkDescriptorType
enum class descriptor_type {
  sampler = VK_DESCRIPTOR_TYPE_SAMPLER,
  combined_image_sampler = VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
  sampled_image = VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE,
  storage_image = VK_DESCRIPTOR_TYPE_STORAGE_IMAGE,
  uniform_texel_buffer = VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER,
  storage_texel_buffer = VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER,
  uniform_buffer = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER,
  storage_buffer = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER,
  uniform_buffer_dynamic = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC,
  storage_buffer_dynamic = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER_DYNAMIC,
  input_attachment = VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT,
};

inline std::ostream& operator<<(std::ostream& o, descriptor_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(descriptor_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, sampler)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, combined_image_sampler)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, sampled_image)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, storage_image)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, uniform_texel_buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, storage_texel_buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, uniform_buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, storage_buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, uniform_buffer_dynamic)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, storage_buffer_dynamic)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_type, input_attachment)
  SPK_END_ENUMERATION_OUTPUT(descriptor_type)
}
// enumeration VkDescriptorUpdateTemplateType
enum class descriptor_update_template_type {
  descriptor_set = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET,
  push_descriptors_khr = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_PUSH_DESCRIPTORS_KHR,
  descriptor_set_khr = VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET_KHR,
};

using descriptor_update_template_type_khr = descriptor_update_template_type;

inline std::ostream& operator<<(std::ostream& o, descriptor_update_template_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(descriptor_update_template_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_update_template_type, descriptor_set)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_update_template_type, push_descriptors_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(descriptor_update_template_type, descriptor_set_khr)
  SPK_END_ENUMERATION_OUTPUT(descriptor_update_template_type)
}
// enumeration VkDeviceEventTypeEXT
enum class device_event_type_ext {
  display_hotplug_ext = VK_DEVICE_EVENT_TYPE_DISPLAY_HOTPLUG_EXT,
};

inline std::ostream& operator<<(std::ostream& o, device_event_type_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(device_event_type_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(device_event_type_ext, display_hotplug_ext)
  SPK_END_ENUMERATION_OUTPUT(device_event_type_ext)
}
// enumeration VkDiscardRectangleModeEXT
enum class discard_rectangle_mode_ext {
  inclusive_ext = VK_DISCARD_RECTANGLE_MODE_INCLUSIVE_EXT,
  exclusive_ext = VK_DISCARD_RECTANGLE_MODE_EXCLUSIVE_EXT,
};

inline std::ostream& operator<<(std::ostream& o, discard_rectangle_mode_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(discard_rectangle_mode_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(discard_rectangle_mode_ext, inclusive_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(discard_rectangle_mode_ext, exclusive_ext)
  SPK_END_ENUMERATION_OUTPUT(discard_rectangle_mode_ext)
}
// enumeration VkDisplayEventTypeEXT
enum class display_event_type_ext {
  first_pixel_out_ext = VK_DISPLAY_EVENT_TYPE_FIRST_PIXEL_OUT_EXT,
};

inline std::ostream& operator<<(std::ostream& o, display_event_type_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(display_event_type_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(display_event_type_ext, first_pixel_out_ext)
  SPK_END_ENUMERATION_OUTPUT(display_event_type_ext)
}
// enumeration VkDisplayPowerStateEXT
enum class display_power_state_ext {
  off_ext = VK_DISPLAY_POWER_STATE_OFF_EXT,
  suspend_ext = VK_DISPLAY_POWER_STATE_SUSPEND_EXT,
  on_ext = VK_DISPLAY_POWER_STATE_ON_EXT,
};

inline std::ostream& operator<<(std::ostream& o, display_power_state_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(display_power_state_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(display_power_state_ext, off_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(display_power_state_ext, suspend_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(display_power_state_ext, on_ext)
  SPK_END_ENUMERATION_OUTPUT(display_power_state_ext)
}
// enumeration VkDynamicState
enum class dynamic_state {
  viewport = VK_DYNAMIC_STATE_VIEWPORT,
  scissor = VK_DYNAMIC_STATE_SCISSOR,
  line_width = VK_DYNAMIC_STATE_LINE_WIDTH,
  depth_bias = VK_DYNAMIC_STATE_DEPTH_BIAS,
  blend_constants = VK_DYNAMIC_STATE_BLEND_CONSTANTS,
  depth_bounds = VK_DYNAMIC_STATE_DEPTH_BOUNDS,
  stencil_compare_mask = VK_DYNAMIC_STATE_STENCIL_COMPARE_MASK,
  stencil_write_mask = VK_DYNAMIC_STATE_STENCIL_WRITE_MASK,
  stencil_reference = VK_DYNAMIC_STATE_STENCIL_REFERENCE,
  viewport_w_scaling_nv = VK_DYNAMIC_STATE_VIEWPORT_W_SCALING_NV,
  discard_rectangle_ext = VK_DYNAMIC_STATE_DISCARD_RECTANGLE_EXT,
  sample_locations_ext = VK_DYNAMIC_STATE_SAMPLE_LOCATIONS_EXT,
};

inline std::ostream& operator<<(std::ostream& o, dynamic_state e){
  SPK_BEGIN_ENUMERATION_OUTPUT(dynamic_state)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, viewport)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, scissor)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, line_width)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, depth_bias)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, blend_constants)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, depth_bounds)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, stencil_compare_mask)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, stencil_write_mask)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, stencil_reference)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, viewport_w_scaling_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, discard_rectangle_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(dynamic_state, sample_locations_ext)
  SPK_END_ENUMERATION_OUTPUT(dynamic_state)
}
// enumeration VkFilter
enum class filter {
  nearest = VK_FILTER_NEAREST,
  linear = VK_FILTER_LINEAR,
  cubic_img = VK_FILTER_CUBIC_IMG,
};

inline std::ostream& operator<<(std::ostream& o, filter e){
  SPK_BEGIN_ENUMERATION_OUTPUT(filter)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(filter, nearest)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(filter, linear)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(filter, cubic_img)
  SPK_END_ENUMERATION_OUTPUT(filter)
}
// enumeration VkFormat
enum class format {
  undefined = VK_FORMAT_UNDEFINED,
  r4g4_unorm_pack8 = VK_FORMAT_R4G4_UNORM_PACK8,
  r4g4b4a4_unorm_pack16 = VK_FORMAT_R4G4B4A4_UNORM_PACK16,
  b4g4r4a4_unorm_pack16 = VK_FORMAT_B4G4R4A4_UNORM_PACK16,
  r5g6b5_unorm_pack16 = VK_FORMAT_R5G6B5_UNORM_PACK16,
  b5g6r5_unorm_pack16 = VK_FORMAT_B5G6R5_UNORM_PACK16,
  r5g5b5a1_unorm_pack16 = VK_FORMAT_R5G5B5A1_UNORM_PACK16,
  b5g5r5a1_unorm_pack16 = VK_FORMAT_B5G5R5A1_UNORM_PACK16,
  a1r5g5b5_unorm_pack16 = VK_FORMAT_A1R5G5B5_UNORM_PACK16,
  r8_unorm = VK_FORMAT_R8_UNORM,
  r8_snorm = VK_FORMAT_R8_SNORM,
  r8_uscaled = VK_FORMAT_R8_USCALED,
  r8_sscaled = VK_FORMAT_R8_SSCALED,
  r8_uint = VK_FORMAT_R8_UINT,
  r8_sint = VK_FORMAT_R8_SINT,
  r8_srgb = VK_FORMAT_R8_SRGB,
  r8g8_unorm = VK_FORMAT_R8G8_UNORM,
  r8g8_snorm = VK_FORMAT_R8G8_SNORM,
  r8g8_uscaled = VK_FORMAT_R8G8_USCALED,
  r8g8_sscaled = VK_FORMAT_R8G8_SSCALED,
  r8g8_uint = VK_FORMAT_R8G8_UINT,
  r8g8_sint = VK_FORMAT_R8G8_SINT,
  r8g8_srgb = VK_FORMAT_R8G8_SRGB,
  r8g8b8_unorm = VK_FORMAT_R8G8B8_UNORM,
  r8g8b8_snorm = VK_FORMAT_R8G8B8_SNORM,
  r8g8b8_uscaled = VK_FORMAT_R8G8B8_USCALED,
  r8g8b8_sscaled = VK_FORMAT_R8G8B8_SSCALED,
  r8g8b8_uint = VK_FORMAT_R8G8B8_UINT,
  r8g8b8_sint = VK_FORMAT_R8G8B8_SINT,
  r8g8b8_srgb = VK_FORMAT_R8G8B8_SRGB,
  b8g8r8_unorm = VK_FORMAT_B8G8R8_UNORM,
  b8g8r8_snorm = VK_FORMAT_B8G8R8_SNORM,
  b8g8r8_uscaled = VK_FORMAT_B8G8R8_USCALED,
  b8g8r8_sscaled = VK_FORMAT_B8G8R8_SSCALED,
  b8g8r8_uint = VK_FORMAT_B8G8R8_UINT,
  b8g8r8_sint = VK_FORMAT_B8G8R8_SINT,
  b8g8r8_srgb = VK_FORMAT_B8G8R8_SRGB,
  r8g8b8a8_unorm = VK_FORMAT_R8G8B8A8_UNORM,
  r8g8b8a8_snorm = VK_FORMAT_R8G8B8A8_SNORM,
  r8g8b8a8_uscaled = VK_FORMAT_R8G8B8A8_USCALED,
  r8g8b8a8_sscaled = VK_FORMAT_R8G8B8A8_SSCALED,
  r8g8b8a8_uint = VK_FORMAT_R8G8B8A8_UINT,
  r8g8b8a8_sint = VK_FORMAT_R8G8B8A8_SINT,
  r8g8b8a8_srgb = VK_FORMAT_R8G8B8A8_SRGB,
  b8g8r8a8_unorm = VK_FORMAT_B8G8R8A8_UNORM,
  b8g8r8a8_snorm = VK_FORMAT_B8G8R8A8_SNORM,
  b8g8r8a8_uscaled = VK_FORMAT_B8G8R8A8_USCALED,
  b8g8r8a8_sscaled = VK_FORMAT_B8G8R8A8_SSCALED,
  b8g8r8a8_uint = VK_FORMAT_B8G8R8A8_UINT,
  b8g8r8a8_sint = VK_FORMAT_B8G8R8A8_SINT,
  b8g8r8a8_srgb = VK_FORMAT_B8G8R8A8_SRGB,
  a8b8g8r8_unorm_pack32 = VK_FORMAT_A8B8G8R8_UNORM_PACK32,
  a8b8g8r8_snorm_pack32 = VK_FORMAT_A8B8G8R8_SNORM_PACK32,
  a8b8g8r8_uscaled_pack32 = VK_FORMAT_A8B8G8R8_USCALED_PACK32,
  a8b8g8r8_sscaled_pack32 = VK_FORMAT_A8B8G8R8_SSCALED_PACK32,
  a8b8g8r8_uint_pack32 = VK_FORMAT_A8B8G8R8_UINT_PACK32,
  a8b8g8r8_sint_pack32 = VK_FORMAT_A8B8G8R8_SINT_PACK32,
  a8b8g8r8_srgb_pack32 = VK_FORMAT_A8B8G8R8_SRGB_PACK32,
  a2r10g10b10_unorm_pack32 = VK_FORMAT_A2R10G10B10_UNORM_PACK32,
  a2r10g10b10_snorm_pack32 = VK_FORMAT_A2R10G10B10_SNORM_PACK32,
  a2r10g10b10_uscaled_pack32 = VK_FORMAT_A2R10G10B10_USCALED_PACK32,
  a2r10g10b10_sscaled_pack32 = VK_FORMAT_A2R10G10B10_SSCALED_PACK32,
  a2r10g10b10_uint_pack32 = VK_FORMAT_A2R10G10B10_UINT_PACK32,
  a2r10g10b10_sint_pack32 = VK_FORMAT_A2R10G10B10_SINT_PACK32,
  a2b10g10r10_unorm_pack32 = VK_FORMAT_A2B10G10R10_UNORM_PACK32,
  a2b10g10r10_snorm_pack32 = VK_FORMAT_A2B10G10R10_SNORM_PACK32,
  a2b10g10r10_uscaled_pack32 = VK_FORMAT_A2B10G10R10_USCALED_PACK32,
  a2b10g10r10_sscaled_pack32 = VK_FORMAT_A2B10G10R10_SSCALED_PACK32,
  a2b10g10r10_uint_pack32 = VK_FORMAT_A2B10G10R10_UINT_PACK32,
  a2b10g10r10_sint_pack32 = VK_FORMAT_A2B10G10R10_SINT_PACK32,
  r16_unorm = VK_FORMAT_R16_UNORM,
  r16_snorm = VK_FORMAT_R16_SNORM,
  r16_uscaled = VK_FORMAT_R16_USCALED,
  r16_sscaled = VK_FORMAT_R16_SSCALED,
  r16_uint = VK_FORMAT_R16_UINT,
  r16_sint = VK_FORMAT_R16_SINT,
  r16_sfloat = VK_FORMAT_R16_SFLOAT,
  r16g16_unorm = VK_FORMAT_R16G16_UNORM,
  r16g16_snorm = VK_FORMAT_R16G16_SNORM,
  r16g16_uscaled = VK_FORMAT_R16G16_USCALED,
  r16g16_sscaled = VK_FORMAT_R16G16_SSCALED,
  r16g16_uint = VK_FORMAT_R16G16_UINT,
  r16g16_sint = VK_FORMAT_R16G16_SINT,
  r16g16_sfloat = VK_FORMAT_R16G16_SFLOAT,
  r16g16b16_unorm = VK_FORMAT_R16G16B16_UNORM,
  r16g16b16_snorm = VK_FORMAT_R16G16B16_SNORM,
  r16g16b16_uscaled = VK_FORMAT_R16G16B16_USCALED,
  r16g16b16_sscaled = VK_FORMAT_R16G16B16_SSCALED,
  r16g16b16_uint = VK_FORMAT_R16G16B16_UINT,
  r16g16b16_sint = VK_FORMAT_R16G16B16_SINT,
  r16g16b16_sfloat = VK_FORMAT_R16G16B16_SFLOAT,
  r16g16b16a16_unorm = VK_FORMAT_R16G16B16A16_UNORM,
  r16g16b16a16_snorm = VK_FORMAT_R16G16B16A16_SNORM,
  r16g16b16a16_uscaled = VK_FORMAT_R16G16B16A16_USCALED,
  r16g16b16a16_sscaled = VK_FORMAT_R16G16B16A16_SSCALED,
  r16g16b16a16_uint = VK_FORMAT_R16G16B16A16_UINT,
  r16g16b16a16_sint = VK_FORMAT_R16G16B16A16_SINT,
  r16g16b16a16_sfloat = VK_FORMAT_R16G16B16A16_SFLOAT,
  r32_uint = VK_FORMAT_R32_UINT,
  r32_sint = VK_FORMAT_R32_SINT,
  r32_sfloat = VK_FORMAT_R32_SFLOAT,
  r32g32_uint = VK_FORMAT_R32G32_UINT,
  r32g32_sint = VK_FORMAT_R32G32_SINT,
  r32g32_sfloat = VK_FORMAT_R32G32_SFLOAT,
  r32g32b32_uint = VK_FORMAT_R32G32B32_UINT,
  r32g32b32_sint = VK_FORMAT_R32G32B32_SINT,
  r32g32b32_sfloat = VK_FORMAT_R32G32B32_SFLOAT,
  r32g32b32a32_uint = VK_FORMAT_R32G32B32A32_UINT,
  r32g32b32a32_sint = VK_FORMAT_R32G32B32A32_SINT,
  r32g32b32a32_sfloat = VK_FORMAT_R32G32B32A32_SFLOAT,
  r64_uint = VK_FORMAT_R64_UINT,
  r64_sint = VK_FORMAT_R64_SINT,
  r64_sfloat = VK_FORMAT_R64_SFLOAT,
  r64g64_uint = VK_FORMAT_R64G64_UINT,
  r64g64_sint = VK_FORMAT_R64G64_SINT,
  r64g64_sfloat = VK_FORMAT_R64G64_SFLOAT,
  r64g64b64_uint = VK_FORMAT_R64G64B64_UINT,
  r64g64b64_sint = VK_FORMAT_R64G64B64_SINT,
  r64g64b64_sfloat = VK_FORMAT_R64G64B64_SFLOAT,
  r64g64b64a64_uint = VK_FORMAT_R64G64B64A64_UINT,
  r64g64b64a64_sint = VK_FORMAT_R64G64B64A64_SINT,
  r64g64b64a64_sfloat = VK_FORMAT_R64G64B64A64_SFLOAT,
  b10g11r11_ufloat_pack32 = VK_FORMAT_B10G11R11_UFLOAT_PACK32,
  e5b9g9r9_ufloat_pack32 = VK_FORMAT_E5B9G9R9_UFLOAT_PACK32,
  d16_unorm = VK_FORMAT_D16_UNORM,
  x8_d24_unorm_pack32 = VK_FORMAT_X8_D24_UNORM_PACK32,
  d32_sfloat = VK_FORMAT_D32_SFLOAT,
  s8_uint = VK_FORMAT_S8_UINT,
  d16_unorm_s8_uint = VK_FORMAT_D16_UNORM_S8_UINT,
  d24_unorm_s8_uint = VK_FORMAT_D24_UNORM_S8_UINT,
  d32_sfloat_s8_uint = VK_FORMAT_D32_SFLOAT_S8_UINT,
  bc1_rgb_unorm_block = VK_FORMAT_BC1_RGB_UNORM_BLOCK,
  bc1_rgb_srgb_block = VK_FORMAT_BC1_RGB_SRGB_BLOCK,
  bc1_rgba_unorm_block = VK_FORMAT_BC1_RGBA_UNORM_BLOCK,
  bc1_rgba_srgb_block = VK_FORMAT_BC1_RGBA_SRGB_BLOCK,
  bc2_unorm_block = VK_FORMAT_BC2_UNORM_BLOCK,
  bc2_srgb_block = VK_FORMAT_BC2_SRGB_BLOCK,
  bc3_unorm_block = VK_FORMAT_BC3_UNORM_BLOCK,
  bc3_srgb_block = VK_FORMAT_BC3_SRGB_BLOCK,
  bc4_unorm_block = VK_FORMAT_BC4_UNORM_BLOCK,
  bc4_snorm_block = VK_FORMAT_BC4_SNORM_BLOCK,
  bc5_unorm_block = VK_FORMAT_BC5_UNORM_BLOCK,
  bc5_snorm_block = VK_FORMAT_BC5_SNORM_BLOCK,
  bc6h_ufloat_block = VK_FORMAT_BC6H_UFLOAT_BLOCK,
  bc6h_sfloat_block = VK_FORMAT_BC6H_SFLOAT_BLOCK,
  bc7_unorm_block = VK_FORMAT_BC7_UNORM_BLOCK,
  bc7_srgb_block = VK_FORMAT_BC7_SRGB_BLOCK,
  etc2_r8g8b8_unorm_block = VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK,
  etc2_r8g8b8_srgb_block = VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK,
  etc2_r8g8b8a1_unorm_block = VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK,
  etc2_r8g8b8a1_srgb_block = VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK,
  etc2_r8g8b8a8_unorm_block = VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK,
  etc2_r8g8b8a8_srgb_block = VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK,
  eac_r11_unorm_block = VK_FORMAT_EAC_R11_UNORM_BLOCK,
  eac_r11_snorm_block = VK_FORMAT_EAC_R11_SNORM_BLOCK,
  eac_r11g11_unorm_block = VK_FORMAT_EAC_R11G11_UNORM_BLOCK,
  eac_r11g11_snorm_block = VK_FORMAT_EAC_R11G11_SNORM_BLOCK,
  astc_4x_4_unorm_block = VK_FORMAT_ASTC_4x4_UNORM_BLOCK,
  astc_4x_4_srgb_block = VK_FORMAT_ASTC_4x4_SRGB_BLOCK,
  astc_5x_4_unorm_block = VK_FORMAT_ASTC_5x4_UNORM_BLOCK,
  astc_5x_4_srgb_block = VK_FORMAT_ASTC_5x4_SRGB_BLOCK,
  astc_5x_5_unorm_block = VK_FORMAT_ASTC_5x5_UNORM_BLOCK,
  astc_5x_5_srgb_block = VK_FORMAT_ASTC_5x5_SRGB_BLOCK,
  astc_6x_5_unorm_block = VK_FORMAT_ASTC_6x5_UNORM_BLOCK,
  astc_6x_5_srgb_block = VK_FORMAT_ASTC_6x5_SRGB_BLOCK,
  astc_6x_6_unorm_block = VK_FORMAT_ASTC_6x6_UNORM_BLOCK,
  astc_6x_6_srgb_block = VK_FORMAT_ASTC_6x6_SRGB_BLOCK,
  astc_8x_5_unorm_block = VK_FORMAT_ASTC_8x5_UNORM_BLOCK,
  astc_8x_5_srgb_block = VK_FORMAT_ASTC_8x5_SRGB_BLOCK,
  astc_8x_6_unorm_block = VK_FORMAT_ASTC_8x6_UNORM_BLOCK,
  astc_8x_6_srgb_block = VK_FORMAT_ASTC_8x6_SRGB_BLOCK,
  astc_8x_8_unorm_block = VK_FORMAT_ASTC_8x8_UNORM_BLOCK,
  astc_8x_8_srgb_block = VK_FORMAT_ASTC_8x8_SRGB_BLOCK,
  astc_10x_5_unorm_block = VK_FORMAT_ASTC_10x5_UNORM_BLOCK,
  astc_10x_5_srgb_block = VK_FORMAT_ASTC_10x5_SRGB_BLOCK,
  astc_10x_6_unorm_block = VK_FORMAT_ASTC_10x6_UNORM_BLOCK,
  astc_10x_6_srgb_block = VK_FORMAT_ASTC_10x6_SRGB_BLOCK,
  astc_10x_8_unorm_block = VK_FORMAT_ASTC_10x8_UNORM_BLOCK,
  astc_10x_8_srgb_block = VK_FORMAT_ASTC_10x8_SRGB_BLOCK,
  astc_10x_10_unorm_block = VK_FORMAT_ASTC_10x10_UNORM_BLOCK,
  astc_10x_10_srgb_block = VK_FORMAT_ASTC_10x10_SRGB_BLOCK,
  astc_12x_10_unorm_block = VK_FORMAT_ASTC_12x10_UNORM_BLOCK,
  astc_12x_10_srgb_block = VK_FORMAT_ASTC_12x10_SRGB_BLOCK,
  astc_12x_12_unorm_block = VK_FORMAT_ASTC_12x12_UNORM_BLOCK,
  astc_12x_12_srgb_block = VK_FORMAT_ASTC_12x12_SRGB_BLOCK,
  g8b8g8r8_422_unorm = VK_FORMAT_G8B8G8R8_422_UNORM,
  b8g8r8g8_422_unorm = VK_FORMAT_B8G8R8G8_422_UNORM,
  g8_b8_r8_3plane_420_unorm = VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM,
  g8_b8r8_2plane_420_unorm = VK_FORMAT_G8_B8R8_2PLANE_420_UNORM,
  g8_b8_r8_3plane_422_unorm = VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM,
  g8_b8r8_2plane_422_unorm = VK_FORMAT_G8_B8R8_2PLANE_422_UNORM,
  g8_b8_r8_3plane_444_unorm = VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM,
  r10x6_unorm_pack16 = VK_FORMAT_R10X6_UNORM_PACK16,
  r10x6g10x6_unorm_2pack16 = VK_FORMAT_R10X6G10X6_UNORM_2PACK16,
  r10x6g10x6b10x6a10x6_unorm_4pack16 = VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16,
  g10x6b10x6g10x6r10x6_422_unorm_4pack16 = VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16,
  b10x6g10x6r10x6g10x6_422_unorm_4pack16 = VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16,
  g10x6_b10x6_r10x6_3plane_420_unorm_3pack16 = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16,
  g10x6_b10x6r10x6_2plane_420_unorm_3pack16 = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16,
  g10x6_b10x6_r10x6_3plane_422_unorm_3pack16 = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16,
  g10x6_b10x6r10x6_2plane_422_unorm_3pack16 = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16,
  g10x6_b10x6_r10x6_3plane_444_unorm_3pack16 = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16,
  r12x4_unorm_pack16 = VK_FORMAT_R12X4_UNORM_PACK16,
  r12x4g12x4_unorm_2pack16 = VK_FORMAT_R12X4G12X4_UNORM_2PACK16,
  r12x4g12x4b12x4a12x4_unorm_4pack16 = VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16,
  g12x4b12x4g12x4r12x4_422_unorm_4pack16 = VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16,
  b12x4g12x4r12x4g12x4_422_unorm_4pack16 = VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16,
  g12x4_b12x4_r12x4_3plane_420_unorm_3pack16 = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16,
  g12x4_b12x4r12x4_2plane_420_unorm_3pack16 = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16,
  g12x4_b12x4_r12x4_3plane_422_unorm_3pack16 = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16,
  g12x4_b12x4r12x4_2plane_422_unorm_3pack16 = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16,
  g12x4_b12x4_r12x4_3plane_444_unorm_3pack16 = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16,
  g16b16g16r16_422_unorm = VK_FORMAT_G16B16G16R16_422_UNORM,
  b16g16r16g16_422_unorm = VK_FORMAT_B16G16R16G16_422_UNORM,
  g16_b16_r16_3plane_420_unorm = VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM,
  g16_b16r16_2plane_420_unorm = VK_FORMAT_G16_B16R16_2PLANE_420_UNORM,
  g16_b16_r16_3plane_422_unorm = VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM,
  g16_b16r16_2plane_422_unorm = VK_FORMAT_G16_B16R16_2PLANE_422_UNORM,
  g16_b16_r16_3plane_444_unorm = VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM,
  pvrtc1_2bpp_unorm_block_img = VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG,
  pvrtc1_4bpp_unorm_block_img = VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG,
  pvrtc2_2bpp_unorm_block_img = VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG,
  pvrtc2_4bpp_unorm_block_img = VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG,
  pvrtc1_2bpp_srgb_block_img = VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG,
  pvrtc1_4bpp_srgb_block_img = VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG,
  pvrtc2_2bpp_srgb_block_img = VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG,
  pvrtc2_4bpp_srgb_block_img = VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG,
  g8b8g8r8_422_unorm_khr = VK_FORMAT_G8B8G8R8_422_UNORM_KHR,
  b8g8r8g8_422_unorm_khr = VK_FORMAT_B8G8R8G8_422_UNORM_KHR,
  g8_b8_r8_3plane_420_unorm_khr = VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR,
  g8_b8r8_2plane_420_unorm_khr = VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR,
  g8_b8_r8_3plane_422_unorm_khr = VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR,
  g8_b8r8_2plane_422_unorm_khr = VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR,
  g8_b8_r8_3plane_444_unorm_khr = VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR,
  r10x6_unorm_pack16_khr = VK_FORMAT_R10X6_UNORM_PACK16_KHR,
  r10x6g10x6_unorm_2pack16_khr = VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR,
  r10x6g10x6b10x6a10x6_unorm_4pack16_khr = VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR,
  g10x6b10x6g10x6r10x6_422_unorm_4pack16_khr = VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR,
  b10x6g10x6r10x6g10x6_422_unorm_4pack16_khr = VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR,
  g10x6_b10x6_r10x6_3plane_420_unorm_3pack16_khr = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR,
  g10x6_b10x6r10x6_2plane_420_unorm_3pack16_khr = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR,
  g10x6_b10x6_r10x6_3plane_422_unorm_3pack16_khr = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR,
  g10x6_b10x6r10x6_2plane_422_unorm_3pack16_khr = VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR,
  g10x6_b10x6_r10x6_3plane_444_unorm_3pack16_khr = VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR,
  r12x4_unorm_pack16_khr = VK_FORMAT_R12X4_UNORM_PACK16_KHR,
  r12x4g12x4_unorm_2pack16_khr = VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR,
  r12x4g12x4b12x4a12x4_unorm_4pack16_khr = VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR,
  g12x4b12x4g12x4r12x4_422_unorm_4pack16_khr = VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR,
  b12x4g12x4r12x4g12x4_422_unorm_4pack16_khr = VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR,
  g12x4_b12x4_r12x4_3plane_420_unorm_3pack16_khr = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR,
  g12x4_b12x4r12x4_2plane_420_unorm_3pack16_khr = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR,
  g12x4_b12x4_r12x4_3plane_422_unorm_3pack16_khr = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR,
  g12x4_b12x4r12x4_2plane_422_unorm_3pack16_khr = VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR,
  g12x4_b12x4_r12x4_3plane_444_unorm_3pack16_khr = VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR,
  g16b16g16r16_422_unorm_khr = VK_FORMAT_G16B16G16R16_422_UNORM_KHR,
  b16g16r16g16_422_unorm_khr = VK_FORMAT_B16G16R16G16_422_UNORM_KHR,
  g16_b16_r16_3plane_420_unorm_khr = VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR,
  g16_b16r16_2plane_420_unorm_khr = VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR,
  g16_b16_r16_3plane_422_unorm_khr = VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR,
  g16_b16r16_2plane_422_unorm_khr = VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR,
  g16_b16_r16_3plane_444_unorm_khr = VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR,
};

inline std::ostream& operator<<(std::ostream& o, format e){
  SPK_BEGIN_ENUMERATION_OUTPUT(format)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, undefined)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r4g4_unorm_pack8)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r4g4b4a4_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b4g4r4a4_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r5g6b5_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b5g6r5_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r5g5b5a1_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b5g5r5a1_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a1r5g5b5_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r8g8b8a8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8a8_srgb)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_unorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_snorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_uscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_sscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_uint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_sint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a8b8g8r8_srgb_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_unorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_snorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_uscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_sscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_uint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2r10g10b10_sint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_unorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_snorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_uscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_sscaled_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_uint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, a2b10g10r10_sint_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_snorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_uscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_sscaled)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r16g16b16a16_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32a32_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32a32_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r32g32b32a32_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64a64_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64a64_sint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r64g64b64a64_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b10g11r11_ufloat_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, e5b9g9r9_ufloat_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, d16_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, x8_d24_unorm_pack32)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, d32_sfloat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, s8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, d16_unorm_s8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, d24_unorm_s8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, d32_sfloat_s8_uint)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc1_rgb_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc1_rgb_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc1_rgba_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc1_rgba_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc2_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc2_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc3_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc3_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc4_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc4_snorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc5_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc5_snorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc6h_ufloat_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc6h_sfloat_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc7_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, bc7_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8a1_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8a1_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8a8_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, etc2_r8g8b8a8_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, eac_r11_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, eac_r11_snorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, eac_r11g11_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, eac_r11g11_snorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_4x_4_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_4x_4_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_5x_4_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_5x_4_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_5x_5_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_5x_5_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_6x_5_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_6x_5_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_6x_6_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_6x_6_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_5_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_5_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_6_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_6_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_8_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_8x_8_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_5_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_5_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_6_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_6_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_8_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_8_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_10_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_10x_10_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_12x_10_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_12x_10_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_12x_12_unorm_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, astc_12x_12_srgb_block)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8b8g8r8_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8g8_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_420_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8r8_2plane_420_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8r8_2plane_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_444_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6g10x6_unorm_2pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6g10x6b10x6a10x6_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6b10x6g10x6r10x6_422_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b10x6g10x6r10x6g10x6_422_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_420_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6r10x6_2plane_420_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_422_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6r10x6_2plane_422_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_444_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4_unorm_pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4g12x4_unorm_2pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4g12x4b12x4a12x4_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4b12x4g12x4r12x4_422_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b12x4g12x4r12x4g12x4_422_unorm_4pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_420_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4r12x4_2plane_420_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_422_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4r12x4_2plane_422_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_444_unorm_3pack16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16b16g16r16_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b16g16r16g16_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_420_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16r16_2plane_420_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16r16_2plane_422_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_444_unorm)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc1_2bpp_unorm_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc1_4bpp_unorm_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc2_2bpp_unorm_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc2_4bpp_unorm_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc1_2bpp_srgb_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc1_4bpp_srgb_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc2_2bpp_srgb_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, pvrtc2_4bpp_srgb_block_img)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8b8g8r8_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b8g8r8g8_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_420_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8r8_2plane_420_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8r8_2plane_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g8_b8_r8_3plane_444_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6_unorm_pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6g10x6_unorm_2pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r10x6g10x6b10x6a10x6_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6b10x6g10x6r10x6_422_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b10x6g10x6r10x6g10x6_422_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_420_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6r10x6_2plane_420_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_422_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6r10x6_2plane_422_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g10x6_b10x6_r10x6_3plane_444_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4_unorm_pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4g12x4_unorm_2pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, r12x4g12x4b12x4a12x4_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4b12x4g12x4r12x4_422_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b12x4g12x4r12x4g12x4_422_unorm_4pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_420_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4r12x4_2plane_420_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_422_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4r12x4_2plane_422_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g12x4_b12x4_r12x4_3plane_444_unorm_3pack16_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16b16g16r16_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, b16g16r16g16_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_420_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16r16_2plane_420_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16r16_2plane_422_unorm_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(format, g16_b16_r16_3plane_444_unorm_khr)
  SPK_END_ENUMERATION_OUTPUT(format)
}
// enumeration VkFrontFace
enum class front_face {
  counter_clockwise = VK_FRONT_FACE_COUNTER_CLOCKWISE,
  clockwise = VK_FRONT_FACE_CLOCKWISE,
};

inline std::ostream& operator<<(std::ostream& o, front_face e){
  SPK_BEGIN_ENUMERATION_OUTPUT(front_face)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(front_face, counter_clockwise)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(front_face, clockwise)
  SPK_END_ENUMERATION_OUTPUT(front_face)
}
// enumeration VkImageLayout
enum class image_layout {
  undefined = VK_IMAGE_LAYOUT_UNDEFINED,
  general = VK_IMAGE_LAYOUT_GENERAL,
  color_attachment_optimal = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
  depth_stencil_attachment_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,
  depth_stencil_read_only_optimal = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL,
  shader_read_only_optimal = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
  transfer_src_optimal = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
  transfer_dst_optimal = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
  preinitialized = VK_IMAGE_LAYOUT_PREINITIALIZED,
  depth_read_only_stencil_attachment_optimal = VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL,
  depth_attachment_stencil_read_only_optimal = VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL,
  present_src_khr = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR,
  shared_present_khr = VK_IMAGE_LAYOUT_SHARED_PRESENT_KHR,
  depth_read_only_stencil_attachment_optimal_khr = VK_IMAGE_LAYOUT_DEPTH_READ_ONLY_STENCIL_ATTACHMENT_OPTIMAL_KHR,
  depth_attachment_stencil_read_only_optimal_khr = VK_IMAGE_LAYOUT_DEPTH_ATTACHMENT_STENCIL_READ_ONLY_OPTIMAL_KHR,
};

inline std::ostream& operator<<(std::ostream& o, image_layout e){
  SPK_BEGIN_ENUMERATION_OUTPUT(image_layout)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, undefined)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, general)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, color_attachment_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_stencil_attachment_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_stencil_read_only_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, shader_read_only_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, transfer_src_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, transfer_dst_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, preinitialized)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_read_only_stencil_attachment_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_attachment_stencil_read_only_optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, present_src_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, shared_present_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_read_only_stencil_attachment_optimal_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_layout, depth_attachment_stencil_read_only_optimal_khr)
  SPK_END_ENUMERATION_OUTPUT(image_layout)
}
// enumeration VkImageTiling
enum class image_tiling {
  optimal = VK_IMAGE_TILING_OPTIMAL,
  linear = VK_IMAGE_TILING_LINEAR,
};

inline std::ostream& operator<<(std::ostream& o, image_tiling e){
  SPK_BEGIN_ENUMERATION_OUTPUT(image_tiling)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_tiling, optimal)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_tiling, linear)
  SPK_END_ENUMERATION_OUTPUT(image_tiling)
}
// enumeration VkImageType
enum class image_type {
  n1d = VK_IMAGE_TYPE_1D,
  n2d = VK_IMAGE_TYPE_2D,
  n3d = VK_IMAGE_TYPE_3D,
};

inline std::ostream& operator<<(std::ostream& o, image_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(image_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_type, n1d)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_type, n2d)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_type, n3d)
  SPK_END_ENUMERATION_OUTPUT(image_type)
}
// enumeration VkImageViewType
enum class image_view_type {
  n1d = VK_IMAGE_VIEW_TYPE_1D,
  n2d = VK_IMAGE_VIEW_TYPE_2D,
  n3d = VK_IMAGE_VIEW_TYPE_3D,
  cube = VK_IMAGE_VIEW_TYPE_CUBE,
  n1d_array = VK_IMAGE_VIEW_TYPE_1D_ARRAY,
  n2d_array = VK_IMAGE_VIEW_TYPE_2D_ARRAY,
  cube_array = VK_IMAGE_VIEW_TYPE_CUBE_ARRAY,
};

inline std::ostream& operator<<(std::ostream& o, image_view_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(image_view_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, n1d)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, n2d)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, n3d)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, cube)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, n1d_array)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, n2d_array)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(image_view_type, cube_array)
  SPK_END_ENUMERATION_OUTPUT(image_view_type)
}
// enumeration VkIndexType
enum class index_type {
  uint16 = VK_INDEX_TYPE_UINT16,
  uint32 = VK_INDEX_TYPE_UINT32,
};

inline std::ostream& operator<<(std::ostream& o, index_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(index_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(index_type, uint16)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(index_type, uint32)
  SPK_END_ENUMERATION_OUTPUT(index_type)
}
// enumeration VkIndirectCommandsTokenTypeNVX
enum class indirect_commands_token_type_nvx {
  pipeline_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PIPELINE_NVX,
  descriptor_set_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DESCRIPTOR_SET_NVX,
  index_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NVX,
  vertex_buffer_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NVX,
  push_constant_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NVX,
  draw_indexed_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NVX,
  draw_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NVX,
  dispatch_nvx = VK_INDIRECT_COMMANDS_TOKEN_TYPE_DISPATCH_NVX,
};

inline std::ostream& operator<<(std::ostream& o, indirect_commands_token_type_nvx e){
  SPK_BEGIN_ENUMERATION_OUTPUT(indirect_commands_token_type_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, pipeline_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, descriptor_set_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, index_buffer_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, vertex_buffer_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, push_constant_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, draw_indexed_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, draw_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(indirect_commands_token_type_nvx, dispatch_nvx)
  SPK_END_ENUMERATION_OUTPUT(indirect_commands_token_type_nvx)
}
// enumeration VkInternalAllocationType
enum class internal_allocation_type {
  executable = VK_INTERNAL_ALLOCATION_TYPE_EXECUTABLE,
};

inline std::ostream& operator<<(std::ostream& o, internal_allocation_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(internal_allocation_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(internal_allocation_type, executable)
  SPK_END_ENUMERATION_OUTPUT(internal_allocation_type)
}
// enumeration VkLogicOp
enum class logic_op {
  clear = VK_LOGIC_OP_CLEAR,
  and_ = VK_LOGIC_OP_AND,
  and_reverse = VK_LOGIC_OP_AND_REVERSE,
  copy = VK_LOGIC_OP_COPY,
  and_inverted = VK_LOGIC_OP_AND_INVERTED,
  no_op = VK_LOGIC_OP_NO_OP,
  xor_ = VK_LOGIC_OP_XOR,
  or_ = VK_LOGIC_OP_OR,
  nor = VK_LOGIC_OP_NOR,
  equivalent = VK_LOGIC_OP_EQUIVALENT,
  invert = VK_LOGIC_OP_INVERT,
  or_reverse = VK_LOGIC_OP_OR_REVERSE,
  copy_inverted = VK_LOGIC_OP_COPY_INVERTED,
  or_inverted = VK_LOGIC_OP_OR_INVERTED,
  nand = VK_LOGIC_OP_NAND,
  set = VK_LOGIC_OP_SET,
};

inline std::ostream& operator<<(std::ostream& o, logic_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(logic_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, clear)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, and_)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, and_reverse)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, copy)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, and_inverted)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, no_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, xor_)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, or_)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, nor)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, equivalent)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, invert)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, or_reverse)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, copy_inverted)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, or_inverted)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, nand)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(logic_op, set)
  SPK_END_ENUMERATION_OUTPUT(logic_op)
}
// enumeration VkObjectEntryTypeNVX
enum class object_entry_type_nvx {
  descriptor_set_nvx = VK_OBJECT_ENTRY_TYPE_DESCRIPTOR_SET_NVX,
  pipeline_nvx = VK_OBJECT_ENTRY_TYPE_PIPELINE_NVX,
  index_buffer_nvx = VK_OBJECT_ENTRY_TYPE_INDEX_BUFFER_NVX,
  vertex_buffer_nvx = VK_OBJECT_ENTRY_TYPE_VERTEX_BUFFER_NVX,
  push_constant_nvx = VK_OBJECT_ENTRY_TYPE_PUSH_CONSTANT_NVX,
};

inline std::ostream& operator<<(std::ostream& o, object_entry_type_nvx e){
  SPK_BEGIN_ENUMERATION_OUTPUT(object_entry_type_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_entry_type_nvx, descriptor_set_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_entry_type_nvx, pipeline_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_entry_type_nvx, index_buffer_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_entry_type_nvx, vertex_buffer_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_entry_type_nvx, push_constant_nvx)
  SPK_END_ENUMERATION_OUTPUT(object_entry_type_nvx)
}
// enumeration VkObjectType
enum class object_type {
  unknown = VK_OBJECT_TYPE_UNKNOWN,
  instance = VK_OBJECT_TYPE_INSTANCE,
  physical_device = VK_OBJECT_TYPE_PHYSICAL_DEVICE,
  device = VK_OBJECT_TYPE_DEVICE,
  queue = VK_OBJECT_TYPE_QUEUE,
  semaphore = VK_OBJECT_TYPE_SEMAPHORE,
  command_buffer = VK_OBJECT_TYPE_COMMAND_BUFFER,
  fence = VK_OBJECT_TYPE_FENCE,
  device_memory = VK_OBJECT_TYPE_DEVICE_MEMORY,
  buffer = VK_OBJECT_TYPE_BUFFER,
  image = VK_OBJECT_TYPE_IMAGE,
  event = VK_OBJECT_TYPE_EVENT,
  query_pool = VK_OBJECT_TYPE_QUERY_POOL,
  buffer_view = VK_OBJECT_TYPE_BUFFER_VIEW,
  image_view = VK_OBJECT_TYPE_IMAGE_VIEW,
  shader_module = VK_OBJECT_TYPE_SHADER_MODULE,
  pipeline_cache = VK_OBJECT_TYPE_PIPELINE_CACHE,
  pipeline_layout = VK_OBJECT_TYPE_PIPELINE_LAYOUT,
  render_pass = VK_OBJECT_TYPE_RENDER_PASS,
  pipeline = VK_OBJECT_TYPE_PIPELINE,
  descriptor_set_layout = VK_OBJECT_TYPE_DESCRIPTOR_SET_LAYOUT,
  sampler = VK_OBJECT_TYPE_SAMPLER,
  descriptor_pool = VK_OBJECT_TYPE_DESCRIPTOR_POOL,
  descriptor_set = VK_OBJECT_TYPE_DESCRIPTOR_SET,
  framebuffer = VK_OBJECT_TYPE_FRAMEBUFFER,
  command_pool = VK_OBJECT_TYPE_COMMAND_POOL,
  sampler_ycbcr_conversion = VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION,
  descriptor_update_template = VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE,
  surface_khr = VK_OBJECT_TYPE_SURFACE_KHR,
  swapchain_khr = VK_OBJECT_TYPE_SWAPCHAIN_KHR,
  display_khr = VK_OBJECT_TYPE_DISPLAY_KHR,
  display_mode_khr = VK_OBJECT_TYPE_DISPLAY_MODE_KHR,
  debug_report_callback_ext = VK_OBJECT_TYPE_DEBUG_REPORT_CALLBACK_EXT,
  descriptor_update_template_khr = VK_OBJECT_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_KHR,
  object_table_nvx = VK_OBJECT_TYPE_OBJECT_TABLE_NVX,
  indirect_commands_layout_nvx = VK_OBJECT_TYPE_INDIRECT_COMMANDS_LAYOUT_NVX,
  debug_utils_messenger_ext = VK_OBJECT_TYPE_DEBUG_UTILS_MESSENGER_EXT,
  sampler_ycbcr_conversion_khr = VK_OBJECT_TYPE_SAMPLER_YCBCR_CONVERSION_KHR,
  validation_cache_ext = VK_OBJECT_TYPE_VALIDATION_CACHE_EXT,
};

inline std::ostream& operator<<(std::ostream& o, object_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(object_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, unknown)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, instance)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, physical_device)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, device)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, queue)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, semaphore)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, command_buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, fence)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, device_memory)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, buffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, image)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, event)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, query_pool)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, buffer_view)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, image_view)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, shader_module)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, pipeline_cache)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, pipeline_layout)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, render_pass)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, pipeline)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, descriptor_set_layout)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, sampler)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, descriptor_pool)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, descriptor_set)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, framebuffer)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, command_pool)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, sampler_ycbcr_conversion)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, descriptor_update_template)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, surface_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, swapchain_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, display_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, display_mode_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, debug_report_callback_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, descriptor_update_template_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, object_table_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, indirect_commands_layout_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, debug_utils_messenger_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, sampler_ycbcr_conversion_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(object_type, validation_cache_ext)
  SPK_END_ENUMERATION_OUTPUT(object_type)
}
// enumeration VkPhysicalDeviceType
enum class physical_device_type {
  other = VK_PHYSICAL_DEVICE_TYPE_OTHER,
  integrated_gpu = VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU,
  discrete_gpu = VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU,
  virtual_gpu = VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU,
  cpu = VK_PHYSICAL_DEVICE_TYPE_CPU,
};

inline std::ostream& operator<<(std::ostream& o, physical_device_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(physical_device_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(physical_device_type, other)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(physical_device_type, integrated_gpu)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(physical_device_type, discrete_gpu)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(physical_device_type, virtual_gpu)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(physical_device_type, cpu)
  SPK_END_ENUMERATION_OUTPUT(physical_device_type)
}
// enumeration VkPipelineBindPoint
enum class pipeline_bind_point {
  graphics = VK_PIPELINE_BIND_POINT_GRAPHICS,
  compute = VK_PIPELINE_BIND_POINT_COMPUTE,
};

inline std::ostream& operator<<(std::ostream& o, pipeline_bind_point e){
  SPK_BEGIN_ENUMERATION_OUTPUT(pipeline_bind_point)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(pipeline_bind_point, graphics)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(pipeline_bind_point, compute)
  SPK_END_ENUMERATION_OUTPUT(pipeline_bind_point)
}
// enumeration VkPipelineCacheHeaderVersion
enum class pipeline_cache_header_version {
  one = VK_PIPELINE_CACHE_HEADER_VERSION_ONE,
};

inline std::ostream& operator<<(std::ostream& o, pipeline_cache_header_version e){
  SPK_BEGIN_ENUMERATION_OUTPUT(pipeline_cache_header_version)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(pipeline_cache_header_version, one)
  SPK_END_ENUMERATION_OUTPUT(pipeline_cache_header_version)
}
// enumeration VkPointClippingBehavior
enum class point_clipping_behavior {
  all_clip_planes = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES,
  user_clip_planes_only = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY,
  all_clip_planes_khr = VK_POINT_CLIPPING_BEHAVIOR_ALL_CLIP_PLANES_KHR,
  user_clip_planes_only_khr = VK_POINT_CLIPPING_BEHAVIOR_USER_CLIP_PLANES_ONLY_KHR,
};

using point_clipping_behavior_khr = point_clipping_behavior;

inline std::ostream& operator<<(std::ostream& o, point_clipping_behavior e){
  SPK_BEGIN_ENUMERATION_OUTPUT(point_clipping_behavior)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(point_clipping_behavior, all_clip_planes)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(point_clipping_behavior, user_clip_planes_only)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(point_clipping_behavior, all_clip_planes_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(point_clipping_behavior, user_clip_planes_only_khr)
  SPK_END_ENUMERATION_OUTPUT(point_clipping_behavior)
}
// enumeration VkPolygonMode
enum class polygon_mode {
  fill = VK_POLYGON_MODE_FILL,
  line = VK_POLYGON_MODE_LINE,
  point = VK_POLYGON_MODE_POINT,
  fill_rectangle_nv = VK_POLYGON_MODE_FILL_RECTANGLE_NV,
};

inline std::ostream& operator<<(std::ostream& o, polygon_mode e){
  SPK_BEGIN_ENUMERATION_OUTPUT(polygon_mode)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(polygon_mode, fill)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(polygon_mode, line)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(polygon_mode, point)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(polygon_mode, fill_rectangle_nv)
  SPK_END_ENUMERATION_OUTPUT(polygon_mode)
}
// enumeration VkPresentModeKHR
enum class present_mode_khr {
  immediate_khr = VK_PRESENT_MODE_IMMEDIATE_KHR,
  mailbox_khr = VK_PRESENT_MODE_MAILBOX_KHR,
  fifo_khr = VK_PRESENT_MODE_FIFO_KHR,
  fifo_relaxed_khr = VK_PRESENT_MODE_FIFO_RELAXED_KHR,
  shared_demand_refresh_khr = VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR,
  shared_continuous_refresh_khr = VK_PRESENT_MODE_SHARED_CONTINUOUS_REFRESH_KHR,
};

inline std::ostream& operator<<(std::ostream& o, present_mode_khr e){
  SPK_BEGIN_ENUMERATION_OUTPUT(present_mode_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, immediate_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, mailbox_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, fifo_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, fifo_relaxed_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, shared_demand_refresh_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(present_mode_khr, shared_continuous_refresh_khr)
  SPK_END_ENUMERATION_OUTPUT(present_mode_khr)
}
// enumeration VkPrimitiveTopology
enum class primitive_topology {
  point_list = VK_PRIMITIVE_TOPOLOGY_POINT_LIST,
  line_list = VK_PRIMITIVE_TOPOLOGY_LINE_LIST,
  line_strip = VK_PRIMITIVE_TOPOLOGY_LINE_STRIP,
  triangle_list = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST,
  triangle_strip = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP,
  triangle_fan = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_FAN,
  line_list_with_adjacency = VK_PRIMITIVE_TOPOLOGY_LINE_LIST_WITH_ADJACENCY,
  line_strip_with_adjacency = VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY,
  triangle_list_with_adjacency = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST_WITH_ADJACENCY,
  triangle_strip_with_adjacency = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP_WITH_ADJACENCY,
  patch_list = VK_PRIMITIVE_TOPOLOGY_PATCH_LIST,
};

inline std::ostream& operator<<(std::ostream& o, primitive_topology e){
  SPK_BEGIN_ENUMERATION_OUTPUT(primitive_topology)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, point_list)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, line_list)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, line_strip)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, triangle_list)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, triangle_strip)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, triangle_fan)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, line_list_with_adjacency)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, line_strip_with_adjacency)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, triangle_list_with_adjacency)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, triangle_strip_with_adjacency)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(primitive_topology, patch_list)
  SPK_END_ENUMERATION_OUTPUT(primitive_topology)
}
// enumeration VkQueryType
enum class query_type {
  occlusion = VK_QUERY_TYPE_OCCLUSION,
  pipeline_statistics = VK_QUERY_TYPE_PIPELINE_STATISTICS,
  timestamp = VK_QUERY_TYPE_TIMESTAMP,
};

inline std::ostream& operator<<(std::ostream& o, query_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(query_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(query_type, occlusion)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(query_type, pipeline_statistics)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(query_type, timestamp)
  SPK_END_ENUMERATION_OUTPUT(query_type)
}
// enumeration VkQueueGlobalPriorityEXT
enum class queue_global_priority_ext {
  low_ext = VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT,
  medium_ext = VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT,
  high_ext = VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT,
  realtime_ext = VK_QUEUE_GLOBAL_PRIORITY_REALTIME_EXT,
};

inline std::ostream& operator<<(std::ostream& o, queue_global_priority_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(queue_global_priority_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(queue_global_priority_ext, low_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(queue_global_priority_ext, medium_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(queue_global_priority_ext, high_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(queue_global_priority_ext, realtime_ext)
  SPK_END_ENUMERATION_OUTPUT(queue_global_priority_ext)
}
// enumeration VkRasterizationOrderAMD
enum class rasterization_order_amd {
  strict_amd = VK_RASTERIZATION_ORDER_STRICT_AMD,
  relaxed_amd = VK_RASTERIZATION_ORDER_RELAXED_AMD,
};

inline std::ostream& operator<<(std::ostream& o, rasterization_order_amd e){
  SPK_BEGIN_ENUMERATION_OUTPUT(rasterization_order_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(rasterization_order_amd, strict_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(rasterization_order_amd, relaxed_amd)
  SPK_END_ENUMERATION_OUTPUT(rasterization_order_amd)
}
// enumeration VkResult
enum class result {
  success = VK_SUCCESS,
  not_ready = VK_NOT_READY,
  timeout = VK_TIMEOUT,
  event_set = VK_EVENT_SET,
  event_reset = VK_EVENT_RESET,
  incomplete = VK_INCOMPLETE,
  error_out_of_host_memory = VK_ERROR_OUT_OF_HOST_MEMORY,
  error_out_of_device_memory = VK_ERROR_OUT_OF_DEVICE_MEMORY,
  error_initialization_failed = VK_ERROR_INITIALIZATION_FAILED,
  error_device_lost = VK_ERROR_DEVICE_LOST,
  error_memory_map_failed = VK_ERROR_MEMORY_MAP_FAILED,
  error_layer_not_present = VK_ERROR_LAYER_NOT_PRESENT,
  error_extension_not_present = VK_ERROR_EXTENSION_NOT_PRESENT,
  error_feature_not_present = VK_ERROR_FEATURE_NOT_PRESENT,
  error_incompatible_driver = VK_ERROR_INCOMPATIBLE_DRIVER,
  error_too_many_objects = VK_ERROR_TOO_MANY_OBJECTS,
  error_format_not_supported = VK_ERROR_FORMAT_NOT_SUPPORTED,
  error_fragmented_pool = VK_ERROR_FRAGMENTED_POOL,
  error_out_of_pool_memory = VK_ERROR_OUT_OF_POOL_MEMORY,
  error_invalid_external_handle = VK_ERROR_INVALID_EXTERNAL_HANDLE,
  error_surface_lost_khr = VK_ERROR_SURFACE_LOST_KHR,
  error_native_window_in_use_khr = VK_ERROR_NATIVE_WINDOW_IN_USE_KHR,
  suboptimal_khr = VK_SUBOPTIMAL_KHR,
  error_out_of_date_khr = VK_ERROR_OUT_OF_DATE_KHR,
  error_incompatible_display_khr = VK_ERROR_INCOMPATIBLE_DISPLAY_KHR,
  error_validation_failed_ext = VK_ERROR_VALIDATION_FAILED_EXT,
  error_invalid_shader_nv = VK_ERROR_INVALID_SHADER_NV,
  error_out_of_pool_memory_khr = VK_ERROR_OUT_OF_POOL_MEMORY_KHR,
  error_invalid_external_handle_khr = VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR,
  error_fragmentation_ext = VK_ERROR_FRAGMENTATION_EXT,
  error_not_permitted_ext = VK_ERROR_NOT_PERMITTED_EXT,
};

inline std::ostream& operator<<(std::ostream& o, result e){
  SPK_BEGIN_ENUMERATION_OUTPUT(result)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, success)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, not_ready)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, timeout)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, event_set)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, event_reset)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, incomplete)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_out_of_host_memory)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_out_of_device_memory)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_initialization_failed)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_device_lost)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_memory_map_failed)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_layer_not_present)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_extension_not_present)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_feature_not_present)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_incompatible_driver)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_too_many_objects)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_format_not_supported)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_fragmented_pool)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_out_of_pool_memory)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_invalid_external_handle)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_surface_lost_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_native_window_in_use_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, suboptimal_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_out_of_date_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_incompatible_display_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_validation_failed_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_invalid_shader_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_out_of_pool_memory_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_invalid_external_handle_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_fragmentation_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(result, error_not_permitted_ext)
  SPK_END_ENUMERATION_OUTPUT(result)
}
SPK_BEGIN_RESULT_ERRORS
SPK_DEFINE_RESULT_ERROR(error_out_of_host_memory)
SPK_DEFINE_RESULT_ERROR(error_out_of_device_memory)
SPK_DEFINE_RESULT_ERROR(error_initialization_failed)
SPK_DEFINE_RESULT_ERROR(error_device_lost)
SPK_DEFINE_RESULT_ERROR(error_memory_map_failed)
SPK_DEFINE_RESULT_ERROR(error_layer_not_present)
SPK_DEFINE_RESULT_ERROR(error_extension_not_present)
SPK_DEFINE_RESULT_ERROR(error_feature_not_present)
SPK_DEFINE_RESULT_ERROR(error_incompatible_driver)
SPK_DEFINE_RESULT_ERROR(error_too_many_objects)
SPK_DEFINE_RESULT_ERROR(error_format_not_supported)
SPK_DEFINE_RESULT_ERROR(error_fragmented_pool)
SPK_DEFINE_RESULT_ERROR(error_out_of_pool_memory)
SPK_DEFINE_RESULT_ERROR(error_invalid_external_handle)
SPK_DEFINE_RESULT_ERROR(error_surface_lost_khr)
SPK_DEFINE_RESULT_ERROR(error_native_window_in_use_khr)
SPK_DEFINE_RESULT_ERROR(error_out_of_date_khr)
SPK_DEFINE_RESULT_ERROR(error_incompatible_display_khr)
SPK_DEFINE_RESULT_ERROR(error_validation_failed_ext)
SPK_DEFINE_RESULT_ERROR(error_invalid_shader_nv)
SPK_DEFINE_RESULT_ERROR(error_out_of_pool_memory_khr)
SPK_DEFINE_RESULT_ERROR(error_invalid_external_handle_khr)
SPK_DEFINE_RESULT_ERROR(error_fragmentation_ext)
SPK_DEFINE_RESULT_ERROR(error_not_permitted_ext)
SPK_END_RESULT_ERRORS
// enumeration VkSamplerAddressMode
enum class sampler_address_mode {
  repeat = VK_SAMPLER_ADDRESS_MODE_REPEAT,
  mirrored_repeat = VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT,
  clamp_to_edge = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE,
  clamp_to_border = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER,
  mirror_clamp_to_edge = VK_SAMPLER_ADDRESS_MODE_MIRROR_CLAMP_TO_EDGE,
};

inline std::ostream& operator<<(std::ostream& o, sampler_address_mode e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sampler_address_mode)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_address_mode, repeat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_address_mode, mirrored_repeat)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_address_mode, clamp_to_edge)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_address_mode, clamp_to_border)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_address_mode, mirror_clamp_to_edge)
  SPK_END_ENUMERATION_OUTPUT(sampler_address_mode)
}
// enumeration VkSamplerMipmapMode
enum class sampler_mipmap_mode {
  nearest = VK_SAMPLER_MIPMAP_MODE_NEAREST,
  linear = VK_SAMPLER_MIPMAP_MODE_LINEAR,
};

inline std::ostream& operator<<(std::ostream& o, sampler_mipmap_mode e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sampler_mipmap_mode)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_mipmap_mode, nearest)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_mipmap_mode, linear)
  SPK_END_ENUMERATION_OUTPUT(sampler_mipmap_mode)
}
// enumeration VkSamplerReductionModeEXT
enum class sampler_reduction_mode_ext {
  weighted_average_ext = VK_SAMPLER_REDUCTION_MODE_WEIGHTED_AVERAGE_EXT,
  min_ext = VK_SAMPLER_REDUCTION_MODE_MIN_EXT,
  max_ext = VK_SAMPLER_REDUCTION_MODE_MAX_EXT,
};

inline std::ostream& operator<<(std::ostream& o, sampler_reduction_mode_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sampler_reduction_mode_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_reduction_mode_ext, weighted_average_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_reduction_mode_ext, min_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_reduction_mode_ext, max_ext)
  SPK_END_ENUMERATION_OUTPUT(sampler_reduction_mode_ext)
}
// enumeration VkSamplerYcbcrModelConversion
enum class sampler_ycbcr_model_conversion {
  rgb_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY,
  ycbcr_identity = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY,
  ycbcr_709 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709,
  ycbcr_601 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601,
  ycbcr_2020 = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020,
  rgb_identity_khr = VK_SAMPLER_YCBCR_MODEL_CONVERSION_RGB_IDENTITY_KHR,
  ycbcr_identity_khr = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_IDENTITY_KHR,
  ycbcr_709_khr = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_709_KHR,
  ycbcr_601_khr = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_601_KHR,
  ycbcr_2020_khr = VK_SAMPLER_YCBCR_MODEL_CONVERSION_YCBCR_2020_KHR,
};

using sampler_ycbcr_model_conversion_khr = sampler_ycbcr_model_conversion;

inline std::ostream& operator<<(std::ostream& o, sampler_ycbcr_model_conversion e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sampler_ycbcr_model_conversion)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, rgb_identity)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_identity)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_709)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_601)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_2020)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, rgb_identity_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_identity_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_709_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_601_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_model_conversion, ycbcr_2020_khr)
  SPK_END_ENUMERATION_OUTPUT(sampler_ycbcr_model_conversion)
}
// enumeration VkSamplerYcbcrRange
enum class sampler_ycbcr_range {
  itu_full = VK_SAMPLER_YCBCR_RANGE_ITU_FULL,
  itu_narrow = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW,
  itu_full_khr = VK_SAMPLER_YCBCR_RANGE_ITU_FULL_KHR,
  itu_narrow_khr = VK_SAMPLER_YCBCR_RANGE_ITU_NARROW_KHR,
};

using sampler_ycbcr_range_khr = sampler_ycbcr_range;

inline std::ostream& operator<<(std::ostream& o, sampler_ycbcr_range e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sampler_ycbcr_range)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_range, itu_full)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_range, itu_narrow)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_range, itu_full_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sampler_ycbcr_range, itu_narrow_khr)
  SPK_END_ENUMERATION_OUTPUT(sampler_ycbcr_range)
}
// enumeration VkShaderInfoTypeAMD
enum class shader_info_type_amd {
  statistics_amd = VK_SHADER_INFO_TYPE_STATISTICS_AMD,
  binary_amd = VK_SHADER_INFO_TYPE_BINARY_AMD,
  disassembly_amd = VK_SHADER_INFO_TYPE_DISASSEMBLY_AMD,
};

inline std::ostream& operator<<(std::ostream& o, shader_info_type_amd e){
  SPK_BEGIN_ENUMERATION_OUTPUT(shader_info_type_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(shader_info_type_amd, statistics_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(shader_info_type_amd, binary_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(shader_info_type_amd, disassembly_amd)
  SPK_END_ENUMERATION_OUTPUT(shader_info_type_amd)
}
// enumeration VkSharingMode
enum class sharing_mode {
  exclusive = VK_SHARING_MODE_EXCLUSIVE,
  concurrent = VK_SHARING_MODE_CONCURRENT,
};

inline std::ostream& operator<<(std::ostream& o, sharing_mode e){
  SPK_BEGIN_ENUMERATION_OUTPUT(sharing_mode)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sharing_mode, exclusive)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(sharing_mode, concurrent)
  SPK_END_ENUMERATION_OUTPUT(sharing_mode)
}
// enumeration VkStencilOp
enum class stencil_op {
  keep = VK_STENCIL_OP_KEEP,
  zero = VK_STENCIL_OP_ZERO,
  replace = VK_STENCIL_OP_REPLACE,
  increment_and_clamp = VK_STENCIL_OP_INCREMENT_AND_CLAMP,
  decrement_and_clamp = VK_STENCIL_OP_DECREMENT_AND_CLAMP,
  invert = VK_STENCIL_OP_INVERT,
  increment_and_wrap = VK_STENCIL_OP_INCREMENT_AND_WRAP,
  decrement_and_wrap = VK_STENCIL_OP_DECREMENT_AND_WRAP,
};

inline std::ostream& operator<<(std::ostream& o, stencil_op e){
  SPK_BEGIN_ENUMERATION_OUTPUT(stencil_op)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, keep)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, zero)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, replace)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, increment_and_clamp)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, decrement_and_clamp)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, invert)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, increment_and_wrap)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(stencil_op, decrement_and_wrap)
  SPK_END_ENUMERATION_OUTPUT(stencil_op)
}
// enumeration VkStructureType
enum class structure_type {
  application_info = VK_STRUCTURE_TYPE_APPLICATION_INFO,
  instance_create_info = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
  device_queue_create_info = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO,
  device_create_info = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO,
  submit_info = VK_STRUCTURE_TYPE_SUBMIT_INFO,
  memory_allocate_info = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO,
  mapped_memory_range = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
  bind_sparse_info = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO,
  fence_create_info = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
  semaphore_create_info = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO,
  event_create_info = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO,
  query_pool_create_info = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO,
  buffer_create_info = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO,
  buffer_view_create_info = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO,
  image_create_info = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO,
  image_view_create_info = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO,
  shader_module_create_info = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO,
  pipeline_cache_create_info = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO,
  pipeline_shader_stage_create_info = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO,
  pipeline_vertex_input_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO,
  pipeline_input_assembly_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO,
  pipeline_tessellation_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO,
  pipeline_viewport_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO,
  pipeline_rasterization_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO,
  pipeline_multisample_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO,
  pipeline_depth_stencil_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO,
  pipeline_color_blend_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO,
  pipeline_dynamic_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO,
  graphics_pipeline_create_info = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO,
  compute_pipeline_create_info = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO,
  pipeline_layout_create_info = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO,
  sampler_create_info = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO,
  descriptor_set_layout_create_info = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO,
  descriptor_pool_create_info = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO,
  descriptor_set_allocate_info = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO,
  write_descriptor_set = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET,
  copy_descriptor_set = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET,
  framebuffer_create_info = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO,
  render_pass_create_info = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO,
  command_pool_create_info = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO,
  command_buffer_allocate_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO,
  command_buffer_inheritance_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO,
  command_buffer_begin_info = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO,
  render_pass_begin_info = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO,
  buffer_memory_barrier = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER,
  image_memory_barrier = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER,
  memory_barrier = VK_STRUCTURE_TYPE_MEMORY_BARRIER,
  loader_instance_create_info = VK_STRUCTURE_TYPE_LOADER_INSTANCE_CREATE_INFO,
  loader_device_create_info = VK_STRUCTURE_TYPE_LOADER_DEVICE_CREATE_INFO,
  physical_device_subgroup_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES,
  bind_buffer_memory_info = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO,
  bind_image_memory_info = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO,
  physical_device_16bit_storage_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,
  memory_dedicated_requirements = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS,
  memory_dedicated_allocate_info = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO,
  memory_allocate_flags_info = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO,
  device_group_render_pass_begin_info = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO,
  device_group_command_buffer_begin_info = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO,
  device_group_submit_info = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO,
  device_group_bind_sparse_info = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO,
  bind_buffer_memory_device_group_info = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO,
  bind_image_memory_device_group_info = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO,
  physical_device_group_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES,
  device_group_device_create_info = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO,
  buffer_memory_requirements_info_2 = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2,
  image_memory_requirements_info_2 = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2,
  image_sparse_memory_requirements_info_2 = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2,
  memory_requirements_2 = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2,
  sparse_image_memory_requirements_2 = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2,
  physical_device_features_2 = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,
  physical_device_properties_2 = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2,
  format_properties_2 = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2,
  image_format_properties_2 = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2,
  physical_device_image_format_info_2 = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2,
  queue_family_properties_2 = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2,
  physical_device_memory_properties_2 = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2,
  sparse_image_format_properties_2 = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2,
  physical_device_sparse_image_format_info_2 = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2,
  physical_device_point_clipping_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES,
  render_pass_input_attachment_aspect_create_info = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO,
  image_view_usage_create_info = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO,
  pipeline_tessellation_domain_origin_state_create_info = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO,
  render_pass_multiview_create_info = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO,
  physical_device_multiview_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,
  physical_device_multiview_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES,
  physical_device_variable_pointer_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES,
  protected_submit_info = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO,
  physical_device_protected_memory_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES,
  physical_device_protected_memory_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES,
  device_queue_info_2 = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2,
  sampler_ycbcr_conversion_create_info = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO,
  sampler_ycbcr_conversion_info = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO,
  bind_image_plane_memory_info = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO,
  image_plane_memory_requirements_info = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO,
  physical_device_sampler_ycbcr_conversion_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,
  sampler_ycbcr_conversion_image_format_properties = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES,
  descriptor_update_template_create_info = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO,
  physical_device_external_image_format_info = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO,
  external_image_format_properties = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES,
  physical_device_external_buffer_info = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO,
  external_buffer_properties = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES,
  physical_device_id_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES,
  external_memory_buffer_create_info = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO,
  external_memory_image_create_info = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO,
  export_memory_allocate_info = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO,
  physical_device_external_fence_info = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO,
  external_fence_properties = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES,
  export_fence_create_info = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO,
  export_semaphore_create_info = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO,
  physical_device_external_semaphore_info = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO,
  external_semaphore_properties = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES,
  physical_device_maintenance_3_properties = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES,
  descriptor_set_layout_support = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT,
  physical_device_shader_draw_parameter_features = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES,
  swapchain_create_info_khr = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR,
  present_info_khr = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR,
  device_group_present_capabilities_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR,
  image_swapchain_create_info_khr = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR,
  bind_image_memory_swapchain_info_khr = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR,
  acquire_next_image_info_khr = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR,
  device_group_present_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR,
  device_group_swapchain_create_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR,
  display_mode_create_info_khr = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR,
  display_surface_create_info_khr = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR,
  display_present_info_khr = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR,
  xlib_surface_create_info_khr = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR,
  xcb_surface_create_info_khr = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR,
  wayland_surface_create_info_khr = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR,
  mir_surface_create_info_khr = VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR,
  android_surface_create_info_khr = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR,
  win32_surface_create_info_khr = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR,
  debug_report_callback_create_info_ext = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,
  pipeline_rasterization_state_rasterization_order_amd = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD,
  debug_marker_object_name_info_ext = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT,
  debug_marker_object_tag_info_ext = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT,
  debug_marker_marker_info_ext = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT,
  dedicated_allocation_image_create_info_nv = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV,
  dedicated_allocation_buffer_create_info_nv = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV,
  dedicated_allocation_memory_allocate_info_nv = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV,
  texture_lod_gather_format_properties_amd = VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD,
  render_pass_multiview_create_info_khr = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO_KHR,
  physical_device_multiview_features_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES_KHR,
  physical_device_multiview_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES_KHR,
  external_memory_image_create_info_nv = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV,
  export_memory_allocate_info_nv = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV,
  import_memory_win32_handle_info_nv = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV,
  export_memory_win32_handle_info_nv = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV,
  win32_keyed_mutex_acquire_release_info_nv = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV,
  physical_device_features_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2_KHR,
  physical_device_properties_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2_KHR,
  format_properties_2_khr = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2_KHR,
  image_format_properties_2_khr = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2_KHR,
  physical_device_image_format_info_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2_KHR,
  queue_family_properties_2_khr = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2_KHR,
  physical_device_memory_properties_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2_KHR,
  sparse_image_format_properties_2_khr = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2_KHR,
  physical_device_sparse_image_format_info_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2_KHR,
  memory_allocate_flags_info_khr = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO_KHR,
  device_group_render_pass_begin_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO_KHR,
  device_group_command_buffer_begin_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO_KHR,
  device_group_submit_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO_KHR,
  device_group_bind_sparse_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO_KHR,
  bind_buffer_memory_device_group_info_khr = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO_KHR,
  bind_image_memory_device_group_info_khr = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO_KHR,
  validation_flags_ext = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT,
  vi_surface_create_info_nn = VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN,
  physical_device_group_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES_KHR,
  device_group_device_create_info_khr = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO_KHR,
  physical_device_external_image_format_info_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO_KHR,
  external_image_format_properties_khr = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES_KHR,
  physical_device_external_buffer_info_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO_KHR,
  external_buffer_properties_khr = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES_KHR,
  physical_device_id_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES_KHR,
  external_memory_buffer_create_info_khr = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO_KHR,
  external_memory_image_create_info_khr = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_KHR,
  export_memory_allocate_info_khr = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_KHR,
  import_memory_win32_handle_info_khr = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR,
  export_memory_win32_handle_info_khr = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR,
  memory_win32_handle_properties_khr = VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR,
  memory_get_win32_handle_info_khr = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR,
  import_memory_fd_info_khr = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR,
  memory_fd_properties_khr = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR,
  memory_get_fd_info_khr = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR,
  win32_keyed_mutex_acquire_release_info_khr = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR,
  physical_device_external_semaphore_info_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO_KHR,
  external_semaphore_properties_khr = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES_KHR,
  export_semaphore_create_info_khr = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO_KHR,
  import_semaphore_win32_handle_info_khr = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,
  export_semaphore_win32_handle_info_khr = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR,
  d3d12_fence_submit_info_khr = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR,
  semaphore_get_win32_handle_info_khr = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR,
  import_semaphore_fd_info_khr = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR,
  semaphore_get_fd_info_khr = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR,
  physical_device_push_descriptor_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR,
  command_buffer_inheritance_conditional_rendering_info_ext = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT,
  physical_device_conditional_rendering_features_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT,
  conditional_rendering_begin_info_ext = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT,
  physical_device_16bit_storage_features_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES_KHR,
  present_regions_khr = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR,
  descriptor_update_template_create_info_khr = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO_KHR,
  object_table_create_info_nvx = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX,
  indirect_commands_layout_create_info_nvx = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX,
  cmd_process_commands_info_nvx = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX,
  cmd_reserve_space_for_commands_info_nvx = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX,
  device_generated_commands_limits_nvx = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX,
  device_generated_commands_features_nvx = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX,
  pipeline_viewport_w_scaling_state_create_info_nv = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV,
  surface_capabilities_2_ext = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT,
  display_power_info_ext = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT,
  device_event_info_ext = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT,
  display_event_info_ext = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT,
  swapchain_counter_create_info_ext = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT,
  present_times_info_google = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE,
  physical_device_multiview_per_view_attributes_properties_nvx = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX,
  pipeline_viewport_swizzle_state_create_info_nv = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV,
  physical_device_discard_rectangle_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT,
  pipeline_discard_rectangle_state_create_info_ext = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT,
  physical_device_conservative_rasterization_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT,
  pipeline_rasterization_conservative_state_create_info_ext = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT,
  hdr_metadata_ext = VK_STRUCTURE_TYPE_HDR_METADATA_EXT,
  attachment_description_2_khr = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR,
  attachment_reference_2_khr = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR,
  subpass_description_2_khr = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR,
  subpass_dependency_2_khr = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR,
  render_pass_create_info_2_khr = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR,
  subpass_begin_info_khr = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR,
  subpass_end_info_khr = VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR,
  shared_present_surface_capabilities_khr = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR,
  physical_device_external_fence_info_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO_KHR,
  external_fence_properties_khr = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES_KHR,
  export_fence_create_info_khr = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO_KHR,
  import_fence_win32_handle_info_khr = VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR,
  export_fence_win32_handle_info_khr = VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR,
  fence_get_win32_handle_info_khr = VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR,
  import_fence_fd_info_khr = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR,
  fence_get_fd_info_khr = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR,
  physical_device_point_clipping_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES_KHR,
  render_pass_input_attachment_aspect_create_info_khr = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO_KHR,
  image_view_usage_create_info_khr = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO_KHR,
  pipeline_tessellation_domain_origin_state_create_info_khr = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO_KHR,
  physical_device_surface_info_2_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR,
  surface_capabilities_2_khr = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR,
  surface_format_2_khr = VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR,
  physical_device_variable_pointer_features_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES_KHR,
  display_properties_2_khr = VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR,
  display_plane_properties_2_khr = VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR,
  display_mode_properties_2_khr = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR,
  display_plane_info_2_khr = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR,
  display_plane_capabilities_2_khr = VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR,
  ios_surface_create_info_mvk = VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK,
  macos_surface_create_info_mvk = VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK,
  memory_dedicated_requirements_khr = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS_KHR,
  memory_dedicated_allocate_info_khr = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO_KHR,
  debug_utils_object_name_info_ext = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT,
  debug_utils_object_tag_info_ext = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT,
  debug_utils_label_ext = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT,
  debug_utils_messenger_callback_data_ext = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT,
  debug_utils_messenger_create_info_ext = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT,
  android_hardware_buffer_usage_android = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID,
  android_hardware_buffer_properties_android = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID,
  android_hardware_buffer_format_properties_android = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID,
  import_android_hardware_buffer_info_android = VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,
  memory_get_android_hardware_buffer_info_android = VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID,
  external_format_android = VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID,
  physical_device_sampler_filter_minmax_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT,
  sampler_reduction_mode_create_info_ext = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT,
  sample_locations_info_ext = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT,
  render_pass_sample_locations_begin_info_ext = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT,
  pipeline_sample_locations_state_create_info_ext = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT,
  physical_device_sample_locations_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT,
  multisample_properties_ext = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT,
  buffer_memory_requirements_info_2_khr = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2_KHR,
  image_memory_requirements_info_2_khr = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2_KHR,
  image_sparse_memory_requirements_info_2_khr = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2_KHR,
  memory_requirements_2_khr = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2_KHR,
  sparse_image_memory_requirements_2_khr = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2_KHR,
  image_format_list_create_info_khr = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR,
  physical_device_blend_operation_advanced_features_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT,
  physical_device_blend_operation_advanced_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT,
  pipeline_color_blend_advanced_state_create_info_ext = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT,
  pipeline_coverage_to_color_state_create_info_nv = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV,
  pipeline_coverage_modulation_state_create_info_nv = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV,
  sampler_ycbcr_conversion_create_info_khr = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO_KHR,
  sampler_ycbcr_conversion_info_khr = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO_KHR,
  bind_image_plane_memory_info_khr = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO_KHR,
  image_plane_memory_requirements_info_khr = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO_KHR,
  physical_device_sampler_ycbcr_conversion_features_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES_KHR,
  sampler_ycbcr_conversion_image_format_properties_khr = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES_KHR,
  bind_buffer_memory_info_khr = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO_KHR,
  bind_image_memory_info_khr = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO_KHR,
  validation_cache_create_info_ext = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT,
  shader_module_validation_cache_create_info_ext = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT,
  descriptor_set_layout_binding_flags_create_info_ext = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT,
  physical_device_descriptor_indexing_features_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT,
  physical_device_descriptor_indexing_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT,
  descriptor_set_variable_descriptor_count_allocate_info_ext = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT,
  descriptor_set_variable_descriptor_count_layout_support_ext = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT,
  physical_device_maintenance_3_properties_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES_KHR,
  descriptor_set_layout_support_khr = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT_KHR,
  device_queue_global_priority_create_info_ext = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT,
  physical_device_8bit_storage_features_khr = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR,
  import_memory_host_pointer_info_ext = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT,
  memory_host_pointer_properties_ext = VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT,
  physical_device_external_memory_host_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT,
  physical_device_shader_core_properties_amd = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD,
  physical_device_vertex_attribute_divisor_properties_ext = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT,
  pipeline_vertex_input_divisor_state_create_info_ext = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT,
  checkpoint_data_nv = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV,
  queue_family_checkpoint_properties_nv = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV,
};

inline std::ostream& operator<<(std::ostream& o, structure_type e){
  SPK_BEGIN_ENUMERATION_OUTPUT(structure_type)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, application_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, instance_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_queue_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, submit_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_allocate_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, mapped_memory_range)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_sparse_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, fence_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, semaphore_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, event_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, query_pool_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, buffer_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, buffer_view_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_view_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, shader_module_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_cache_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_shader_stage_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_vertex_input_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_input_assembly_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_tessellation_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_viewport_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_rasterization_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_multisample_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_depth_stencil_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_color_blend_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_dynamic_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, graphics_pipeline_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, compute_pipeline_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_layout_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_layout_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_pool_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_allocate_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, write_descriptor_set)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, copy_descriptor_set)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, framebuffer_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, command_pool_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, command_buffer_allocate_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, command_buffer_inheritance_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, command_buffer_begin_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_begin_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, buffer_memory_barrier)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_memory_barrier)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_barrier)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, loader_instance_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, loader_device_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_subgroup_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_buffer_memory_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_memory_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_16bit_storage_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_dedicated_requirements)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_dedicated_allocate_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_allocate_flags_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_render_pass_begin_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_command_buffer_begin_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_submit_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_bind_sparse_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_buffer_memory_device_group_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_memory_device_group_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_group_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_device_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, buffer_memory_requirements_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_memory_requirements_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_sparse_memory_requirements_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_requirements_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sparse_image_memory_requirements_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_features_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, format_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_format_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_image_format_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, queue_family_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_memory_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sparse_image_format_properties_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sparse_image_format_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_point_clipping_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_input_attachment_aspect_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_view_usage_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_tessellation_domain_origin_state_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_multiview_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_multiview_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_multiview_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_variable_pointer_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, protected_submit_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_protected_memory_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_protected_memory_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_queue_info_2)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_plane_memory_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_plane_memory_requirements_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sampler_ycbcr_conversion_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_image_format_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_update_template_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_image_format_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_image_format_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_buffer_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_buffer_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_id_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_memory_buffer_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_memory_image_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_memory_allocate_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_fence_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_fence_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_fence_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_semaphore_create_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_semaphore_info)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_semaphore_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_maintenance_3_properties)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_layout_support)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_shader_draw_parameter_features)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, swapchain_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, present_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_present_capabilities_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_swapchain_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_memory_swapchain_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, acquire_next_image_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_present_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_swapchain_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_mode_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_present_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, xlib_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, xcb_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, wayland_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, mir_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, android_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, win32_surface_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_report_callback_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_rasterization_state_rasterization_order_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_marker_object_name_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_marker_object_tag_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_marker_marker_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, dedicated_allocation_image_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, dedicated_allocation_buffer_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, dedicated_allocation_memory_allocate_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, texture_lod_gather_format_properties_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_multiview_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_multiview_features_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_multiview_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_memory_image_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_memory_allocate_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_memory_win32_handle_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_memory_win32_handle_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, win32_keyed_mutex_acquire_release_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_features_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, format_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_format_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_image_format_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, queue_family_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_memory_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sparse_image_format_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sparse_image_format_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_allocate_flags_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_render_pass_begin_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_command_buffer_begin_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_submit_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_bind_sparse_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_buffer_memory_device_group_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_memory_device_group_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, validation_flags_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, vi_surface_create_info_nn)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_group_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_group_device_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_image_format_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_image_format_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_buffer_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_buffer_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_id_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_memory_buffer_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_memory_image_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_memory_allocate_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_memory_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_memory_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_win32_handle_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_get_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_memory_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_fd_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_get_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, win32_keyed_mutex_acquire_release_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_semaphore_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_semaphore_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_semaphore_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_semaphore_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_semaphore_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, d3d12_fence_submit_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, semaphore_get_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_semaphore_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, semaphore_get_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_push_descriptor_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, command_buffer_inheritance_conditional_rendering_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_conditional_rendering_features_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, conditional_rendering_begin_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_16bit_storage_features_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, present_regions_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_update_template_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, object_table_create_info_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, indirect_commands_layout_create_info_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, cmd_process_commands_info_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, cmd_reserve_space_for_commands_info_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_generated_commands_limits_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_generated_commands_features_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_viewport_w_scaling_state_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, surface_capabilities_2_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_power_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_event_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_event_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, swapchain_counter_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, present_times_info_google)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_multiview_per_view_attributes_properties_nvx)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_viewport_swizzle_state_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_discard_rectangle_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_discard_rectangle_state_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_conservative_rasterization_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_rasterization_conservative_state_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, hdr_metadata_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, attachment_description_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, attachment_reference_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, subpass_description_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, subpass_dependency_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_create_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, subpass_begin_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, subpass_end_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, shared_present_surface_capabilities_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_fence_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_fence_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_fence_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_fence_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, export_fence_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, fence_get_win32_handle_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_fence_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, fence_get_fd_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_point_clipping_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_input_attachment_aspect_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_view_usage_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_tessellation_domain_origin_state_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_surface_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, surface_capabilities_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, surface_format_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_variable_pointer_features_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_plane_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_mode_properties_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_plane_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, display_plane_capabilities_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, ios_surface_create_info_mvk)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, macos_surface_create_info_mvk)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_dedicated_requirements_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_dedicated_allocate_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_utils_object_name_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_utils_object_tag_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_utils_label_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_utils_messenger_callback_data_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, debug_utils_messenger_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, android_hardware_buffer_usage_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, android_hardware_buffer_properties_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, android_hardware_buffer_format_properties_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_android_hardware_buffer_info_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_get_android_hardware_buffer_info_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, external_format_android)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sampler_filter_minmax_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_reduction_mode_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sample_locations_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, render_pass_sample_locations_begin_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_sample_locations_state_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sample_locations_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, multisample_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, buffer_memory_requirements_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_memory_requirements_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_sparse_memory_requirements_info_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_requirements_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sparse_image_memory_requirements_2_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_format_list_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_blend_operation_advanced_features_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_blend_operation_advanced_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_color_blend_advanced_state_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_coverage_to_color_state_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_coverage_modulation_state_create_info_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_create_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_plane_memory_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, image_plane_memory_requirements_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_sampler_ycbcr_conversion_features_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, sampler_ycbcr_conversion_image_format_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_buffer_memory_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, bind_image_memory_info_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, validation_cache_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, shader_module_validation_cache_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_layout_binding_flags_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_descriptor_indexing_features_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_descriptor_indexing_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_variable_descriptor_count_allocate_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_variable_descriptor_count_layout_support_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_maintenance_3_properties_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, descriptor_set_layout_support_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, device_queue_global_priority_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_8bit_storage_features_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, import_memory_host_pointer_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, memory_host_pointer_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_external_memory_host_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_shader_core_properties_amd)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, physical_device_vertex_attribute_divisor_properties_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, pipeline_vertex_input_divisor_state_create_info_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, checkpoint_data_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(structure_type, queue_family_checkpoint_properties_nv)
  SPK_END_ENUMERATION_OUTPUT(structure_type)
}
// enumeration VkSubpassContents
enum class subpass_contents {
  inline_ = VK_SUBPASS_CONTENTS_INLINE,
  secondary_command_buffers = VK_SUBPASS_CONTENTS_SECONDARY_COMMAND_BUFFERS,
};

inline std::ostream& operator<<(std::ostream& o, subpass_contents e){
  SPK_BEGIN_ENUMERATION_OUTPUT(subpass_contents)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(subpass_contents, inline_)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(subpass_contents, secondary_command_buffers)
  SPK_END_ENUMERATION_OUTPUT(subpass_contents)
}
// enumeration VkSystemAllocationScope
enum class system_allocation_scope {
  command = VK_SYSTEM_ALLOCATION_SCOPE_COMMAND,
  object = VK_SYSTEM_ALLOCATION_SCOPE_OBJECT,
  cache = VK_SYSTEM_ALLOCATION_SCOPE_CACHE,
  device = VK_SYSTEM_ALLOCATION_SCOPE_DEVICE,
  instance = VK_SYSTEM_ALLOCATION_SCOPE_INSTANCE,
};

inline std::ostream& operator<<(std::ostream& o, system_allocation_scope e){
  SPK_BEGIN_ENUMERATION_OUTPUT(system_allocation_scope)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(system_allocation_scope, command)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(system_allocation_scope, object)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(system_allocation_scope, cache)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(system_allocation_scope, device)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(system_allocation_scope, instance)
  SPK_END_ENUMERATION_OUTPUT(system_allocation_scope)
}
// enumeration VkTessellationDomainOrigin
enum class tessellation_domain_origin {
  upper_left = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT,
  lower_left = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT,
  upper_left_khr = VK_TESSELLATION_DOMAIN_ORIGIN_UPPER_LEFT_KHR,
  lower_left_khr = VK_TESSELLATION_DOMAIN_ORIGIN_LOWER_LEFT_KHR,
};

using tessellation_domain_origin_khr = tessellation_domain_origin;

inline std::ostream& operator<<(std::ostream& o, tessellation_domain_origin e){
  SPK_BEGIN_ENUMERATION_OUTPUT(tessellation_domain_origin)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(tessellation_domain_origin, upper_left)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(tessellation_domain_origin, lower_left)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(tessellation_domain_origin, upper_left_khr)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(tessellation_domain_origin, lower_left_khr)
  SPK_END_ENUMERATION_OUTPUT(tessellation_domain_origin)
}
// enumeration VkValidationCacheHeaderVersionEXT
enum class validation_cache_header_version_ext {
  one_ext = VK_VALIDATION_CACHE_HEADER_VERSION_ONE_EXT,
};

inline std::ostream& operator<<(std::ostream& o, validation_cache_header_version_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(validation_cache_header_version_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(validation_cache_header_version_ext, one_ext)
  SPK_END_ENUMERATION_OUTPUT(validation_cache_header_version_ext)
}
// enumeration VkValidationCheckEXT
enum class validation_check_ext {
  all_ext = VK_VALIDATION_CHECK_ALL_EXT,
  shaders_ext = VK_VALIDATION_CHECK_SHADERS_EXT,
};

inline std::ostream& operator<<(std::ostream& o, validation_check_ext e){
  SPK_BEGIN_ENUMERATION_OUTPUT(validation_check_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(validation_check_ext, all_ext)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(validation_check_ext, shaders_ext)
  SPK_END_ENUMERATION_OUTPUT(validation_check_ext)
}
// enumeration VkVendorId
enum class vendor_id {
  viv = VK_VENDOR_ID_VIV,
  vsi = VK_VENDOR_ID_VSI,
  kazan = VK_VENDOR_ID_KAZAN,
};

inline std::ostream& operator<<(std::ostream& o, vendor_id e){
  SPK_BEGIN_ENUMERATION_OUTPUT(vendor_id)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(vendor_id, viv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(vendor_id, vsi)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(vendor_id, kazan)
  SPK_END_ENUMERATION_OUTPUT(vendor_id)
}
// enumeration VkVertexInputRate
enum class vertex_input_rate {
  vertex = VK_VERTEX_INPUT_RATE_VERTEX,
  instance = VK_VERTEX_INPUT_RATE_INSTANCE,
};

inline std::ostream& operator<<(std::ostream& o, vertex_input_rate e){
  SPK_BEGIN_ENUMERATION_OUTPUT(vertex_input_rate)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(vertex_input_rate, vertex)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(vertex_input_rate, instance)
  SPK_END_ENUMERATION_OUTPUT(vertex_input_rate)
}
// enumeration VkViewportCoordinateSwizzleNV
enum class viewport_coordinate_swizzle_nv {
  positive_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV,
  negative_x_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV,
  positive_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV,
  negative_y_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV,
  positive_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV,
  negative_z_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV,
  positive_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV,
  negative_w_nv = VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_W_NV,
};

inline std::ostream& operator<<(std::ostream& o, viewport_coordinate_swizzle_nv e){
  SPK_BEGIN_ENUMERATION_OUTPUT(viewport_coordinate_swizzle_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, positive_x_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, negative_x_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, positive_y_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, negative_y_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, positive_z_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, negative_z_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, positive_w_nv)
  SPK_ENUMERATION_OUTPUT_ENUMERATOR(viewport_coordinate_swizzle_nv, negative_w_nv)
  SPK_END_ENUMERATION_OUTPUT(viewport_coordinate_swizzle_nv)
}
constexpr auto amd_buffer_marker_extension_name = VK_AMD_BUFFER_MARKER_EXTENSION_NAME;
constexpr auto amd_buffer_marker_spec_version = VK_AMD_BUFFER_MARKER_SPEC_VERSION;
constexpr auto amd_draw_indirect_count_extension_name = VK_AMD_DRAW_INDIRECT_COUNT_EXTENSION_NAME;
constexpr auto amd_draw_indirect_count_spec_version = VK_AMD_DRAW_INDIRECT_COUNT_SPEC_VERSION;
constexpr auto amd_gcn_shader_extension_name = VK_AMD_GCN_SHADER_EXTENSION_NAME;
constexpr auto amd_gcn_shader_spec_version = VK_AMD_GCN_SHADER_SPEC_VERSION;
constexpr auto amd_gpu_shader_half_float_extension_name = VK_AMD_GPU_SHADER_HALF_FLOAT_EXTENSION_NAME;
constexpr auto amd_gpu_shader_half_float_spec_version = VK_AMD_GPU_SHADER_HALF_FLOAT_SPEC_VERSION;
constexpr auto amd_gpu_shader_int16_extension_name = VK_AMD_GPU_SHADER_INT16_EXTENSION_NAME;
constexpr auto amd_gpu_shader_int16_spec_version = VK_AMD_GPU_SHADER_INT16_SPEC_VERSION;
constexpr auto amd_mixed_attachment_samples_extension_name = VK_AMD_MIXED_ATTACHMENT_SAMPLES_EXTENSION_NAME;
constexpr auto amd_mixed_attachment_samples_spec_version = VK_AMD_MIXED_ATTACHMENT_SAMPLES_SPEC_VERSION;
constexpr auto amd_negative_viewport_height_extension_name = VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_EXTENSION_NAME;
constexpr auto amd_negative_viewport_height_spec_version = VK_AMD_NEGATIVE_VIEWPORT_HEIGHT_SPEC_VERSION;
constexpr auto amd_rasterization_order_extension_name = VK_AMD_RASTERIZATION_ORDER_EXTENSION_NAME;
constexpr auto amd_rasterization_order_spec_version = VK_AMD_RASTERIZATION_ORDER_SPEC_VERSION;
constexpr auto amd_shader_ballot_extension_name = VK_AMD_SHADER_BALLOT_EXTENSION_NAME;
constexpr auto amd_shader_ballot_spec_version = VK_AMD_SHADER_BALLOT_SPEC_VERSION;
constexpr auto amd_shader_core_properties_extension_name = VK_AMD_SHADER_CORE_PROPERTIES_EXTENSION_NAME;
constexpr auto amd_shader_core_properties_spec_version = VK_AMD_SHADER_CORE_PROPERTIES_SPEC_VERSION;
constexpr auto amd_shader_explicit_vertex_parameter_extension_name = VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_EXTENSION_NAME;
constexpr auto amd_shader_explicit_vertex_parameter_spec_version = VK_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER_SPEC_VERSION;
constexpr auto amd_shader_fragment_mask_extension_name = VK_AMD_SHADER_FRAGMENT_MASK_EXTENSION_NAME;
constexpr auto amd_shader_fragment_mask_spec_version = VK_AMD_SHADER_FRAGMENT_MASK_SPEC_VERSION;
constexpr auto amd_shader_image_load_store_lod_extension_name = VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_EXTENSION_NAME;
constexpr auto amd_shader_image_load_store_lod_spec_version = VK_AMD_SHADER_IMAGE_LOAD_STORE_LOD_SPEC_VERSION;
constexpr auto amd_shader_info_extension_name = VK_AMD_SHADER_INFO_EXTENSION_NAME;
constexpr auto amd_shader_info_spec_version = VK_AMD_SHADER_INFO_SPEC_VERSION;
constexpr auto amd_shader_trinary_minmax_extension_name = VK_AMD_SHADER_TRINARY_MINMAX_EXTENSION_NAME;
constexpr auto amd_shader_trinary_minmax_spec_version = VK_AMD_SHADER_TRINARY_MINMAX_SPEC_VERSION;
constexpr auto amd_texture_gather_bias_lod_extension_name = VK_AMD_TEXTURE_GATHER_BIAS_LOD_EXTENSION_NAME;
constexpr auto amd_texture_gather_bias_lod_spec_version = VK_AMD_TEXTURE_GATHER_BIAS_LOD_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
constexpr auto android_external_memory_android_hardware_buffer_extension_name = VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
constexpr auto android_external_memory_android_hardware_buffer_spec_version = VK_ANDROID_EXTERNAL_MEMORY_ANDROID_HARDWARE_BUFFER_SPEC_VERSION;
#endif
constexpr auto attachment_unused = VK_ATTACHMENT_UNUSED;
constexpr auto colorspace_srgb_nonlinear_khr = VK_COLORSPACE_SRGB_NONLINEAR_KHR;
constexpr auto debug_report_object_type_debug_report_ext = VK_DEBUG_REPORT_OBJECT_TYPE_DEBUG_REPORT_EXT;
constexpr auto debug_report_object_type_validation_cache_ext = VK_DEBUG_REPORT_OBJECT_TYPE_VALIDATION_CACHE_EXT;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
constexpr auto ext_acquire_xlib_display_extension_name = VK_EXT_ACQUIRE_XLIB_DISPLAY_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
constexpr auto ext_acquire_xlib_display_spec_version = VK_EXT_ACQUIRE_XLIB_DISPLAY_SPEC_VERSION;
#endif
constexpr auto ext_blend_operation_advanced_extension_name = VK_EXT_BLEND_OPERATION_ADVANCED_EXTENSION_NAME;
constexpr auto ext_blend_operation_advanced_spec_version = VK_EXT_BLEND_OPERATION_ADVANCED_SPEC_VERSION;
constexpr auto ext_conditional_rendering_extension_name = VK_EXT_CONDITIONAL_RENDERING_EXTENSION_NAME;
constexpr auto ext_conditional_rendering_spec_version = VK_EXT_CONDITIONAL_RENDERING_SPEC_VERSION;
constexpr auto ext_conservative_rasterization_extension_name = VK_EXT_CONSERVATIVE_RASTERIZATION_EXTENSION_NAME;
constexpr auto ext_conservative_rasterization_spec_version = VK_EXT_CONSERVATIVE_RASTERIZATION_SPEC_VERSION;
constexpr auto ext_debug_marker_extension_name = VK_EXT_DEBUG_MARKER_EXTENSION_NAME;
constexpr auto ext_debug_marker_spec_version = VK_EXT_DEBUG_MARKER_SPEC_VERSION;
constexpr auto ext_debug_report_extension_name = VK_EXT_DEBUG_REPORT_EXTENSION_NAME;
constexpr auto ext_debug_report_spec_version = VK_EXT_DEBUG_REPORT_SPEC_VERSION;
constexpr auto ext_debug_utils_extension_name = VK_EXT_DEBUG_UTILS_EXTENSION_NAME;
constexpr auto ext_debug_utils_spec_version = VK_EXT_DEBUG_UTILS_SPEC_VERSION;
constexpr auto ext_depth_range_unrestricted_extension_name = VK_EXT_DEPTH_RANGE_UNRESTRICTED_EXTENSION_NAME;
constexpr auto ext_depth_range_unrestricted_spec_version = VK_EXT_DEPTH_RANGE_UNRESTRICTED_SPEC_VERSION;
constexpr auto ext_descriptor_indexing_extension_name = VK_EXT_DESCRIPTOR_INDEXING_EXTENSION_NAME;
constexpr auto ext_descriptor_indexing_spec_version = VK_EXT_DESCRIPTOR_INDEXING_SPEC_VERSION;
constexpr auto ext_direct_mode_display_extension_name = VK_EXT_DIRECT_MODE_DISPLAY_EXTENSION_NAME;
constexpr auto ext_direct_mode_display_spec_version = VK_EXT_DIRECT_MODE_DISPLAY_SPEC_VERSION;
constexpr auto ext_discard_rectangles_extension_name = VK_EXT_DISCARD_RECTANGLES_EXTENSION_NAME;
constexpr auto ext_discard_rectangles_spec_version = VK_EXT_DISCARD_RECTANGLES_SPEC_VERSION;
constexpr auto ext_display_control_extension_name = VK_EXT_DISPLAY_CONTROL_EXTENSION_NAME;
constexpr auto ext_display_control_spec_version = VK_EXT_DISPLAY_CONTROL_SPEC_VERSION;
constexpr auto ext_display_surface_counter_extension_name = VK_EXT_DISPLAY_SURFACE_COUNTER_EXTENSION_NAME;
constexpr auto ext_display_surface_counter_spec_version = VK_EXT_DISPLAY_SURFACE_COUNTER_SPEC_VERSION;
constexpr auto ext_external_memory_dma_buf_extension_name = VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME;
constexpr auto ext_external_memory_dma_buf_spec_version = VK_EXT_EXTERNAL_MEMORY_DMA_BUF_SPEC_VERSION;
constexpr auto ext_external_memory_host_extension_name = VK_EXT_EXTERNAL_MEMORY_HOST_EXTENSION_NAME;
constexpr auto ext_external_memory_host_spec_version = VK_EXT_EXTERNAL_MEMORY_HOST_SPEC_VERSION;
constexpr auto ext_global_priority_extension_name = VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME;
constexpr auto ext_global_priority_spec_version = VK_EXT_GLOBAL_PRIORITY_SPEC_VERSION;
constexpr auto ext_hdr_metadata_extension_name = VK_EXT_HDR_METADATA_EXTENSION_NAME;
constexpr auto ext_hdr_metadata_spec_version = VK_EXT_HDR_METADATA_SPEC_VERSION;
constexpr auto ext_post_depth_coverage_extension_name = VK_EXT_POST_DEPTH_COVERAGE_EXTENSION_NAME;
constexpr auto ext_post_depth_coverage_spec_version = VK_EXT_POST_DEPTH_COVERAGE_SPEC_VERSION;
constexpr auto ext_queue_family_foreign_extension_name = VK_EXT_QUEUE_FAMILY_FOREIGN_EXTENSION_NAME;
constexpr auto ext_queue_family_foreign_spec_version = VK_EXT_QUEUE_FAMILY_FOREIGN_SPEC_VERSION;
constexpr auto ext_sample_locations_extension_name = VK_EXT_SAMPLE_LOCATIONS_EXTENSION_NAME;
constexpr auto ext_sample_locations_spec_version = VK_EXT_SAMPLE_LOCATIONS_SPEC_VERSION;
constexpr auto ext_sampler_filter_minmax_extension_name = VK_EXT_SAMPLER_FILTER_MINMAX_EXTENSION_NAME;
constexpr auto ext_sampler_filter_minmax_spec_version = VK_EXT_SAMPLER_FILTER_MINMAX_SPEC_VERSION;
constexpr auto ext_shader_stencil_export_extension_name = VK_EXT_SHADER_STENCIL_EXPORT_EXTENSION_NAME;
constexpr auto ext_shader_stencil_export_spec_version = VK_EXT_SHADER_STENCIL_EXPORT_SPEC_VERSION;
constexpr auto ext_shader_subgroup_ballot_extension_name = VK_EXT_SHADER_SUBGROUP_BALLOT_EXTENSION_NAME;
constexpr auto ext_shader_subgroup_ballot_spec_version = VK_EXT_SHADER_SUBGROUP_BALLOT_SPEC_VERSION;
constexpr auto ext_shader_subgroup_vote_extension_name = VK_EXT_SHADER_SUBGROUP_VOTE_EXTENSION_NAME;
constexpr auto ext_shader_subgroup_vote_spec_version = VK_EXT_SHADER_SUBGROUP_VOTE_SPEC_VERSION;
constexpr auto ext_shader_viewport_index_layer_extension_name = VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_EXTENSION_NAME;
constexpr auto ext_shader_viewport_index_layer_spec_version = VK_EXT_SHADER_VIEWPORT_INDEX_LAYER_SPEC_VERSION;
constexpr auto ext_swapchain_color_space_extension_name = VK_EXT_SWAPCHAIN_COLOR_SPACE_EXTENSION_NAME;
constexpr auto ext_swapchain_color_space_spec_version = VK_EXT_SWAPCHAIN_COLOR_SPACE_SPEC_VERSION;
constexpr auto ext_validation_cache_extension_name = VK_EXT_VALIDATION_CACHE_EXTENSION_NAME;
constexpr auto ext_validation_cache_spec_version = VK_EXT_VALIDATION_CACHE_SPEC_VERSION;
constexpr auto ext_validation_flags_extension_name = VK_EXT_VALIDATION_FLAGS_EXTENSION_NAME;
constexpr auto ext_validation_flags_spec_version = VK_EXT_VALIDATION_FLAGS_SPEC_VERSION;
constexpr auto ext_vertex_attribute_divisor_extension_name = VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_EXTENSION_NAME;
constexpr auto ext_vertex_attribute_divisor_spec_version = VK_EXT_VERTEX_ATTRIBUTE_DIVISOR_SPEC_VERSION;
constexpr auto google_display_timing_extension_name = VK_GOOGLE_DISPLAY_TIMING_EXTENSION_NAME;
constexpr auto google_display_timing_spec_version = VK_GOOGLE_DISPLAY_TIMING_SPEC_VERSION;
constexpr auto img_filter_cubic_extension_name = VK_IMG_FILTER_CUBIC_EXTENSION_NAME;
constexpr auto img_filter_cubic_spec_version = VK_IMG_FILTER_CUBIC_SPEC_VERSION;
constexpr auto img_format_pvrtc_extension_name = VK_IMG_FORMAT_PVRTC_EXTENSION_NAME;
constexpr auto img_format_pvrtc_spec_version = VK_IMG_FORMAT_PVRTC_SPEC_VERSION;
constexpr auto khr_16bit_storage_extension_name = VK_KHR_16BIT_STORAGE_EXTENSION_NAME;
constexpr auto khr_16bit_storage_spec_version = VK_KHR_16BIT_STORAGE_SPEC_VERSION;
constexpr auto khr_8bit_storage_extension_name = VK_KHR_8BIT_STORAGE_EXTENSION_NAME;
constexpr auto khr_8bit_storage_spec_version = VK_KHR_8BIT_STORAGE_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
constexpr auto khr_android_surface_extension_name = VK_KHR_ANDROID_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
constexpr auto khr_android_surface_spec_version = VK_KHR_ANDROID_SURFACE_SPEC_VERSION;
#endif
constexpr auto khr_bind_memory_2_extension_name = VK_KHR_BIND_MEMORY_2_EXTENSION_NAME;
constexpr auto khr_bind_memory_2_spec_version = VK_KHR_BIND_MEMORY_2_SPEC_VERSION;
constexpr auto khr_create_renderpass_2_extension_name = VK_KHR_CREATE_RENDERPASS_2_EXTENSION_NAME;
constexpr auto khr_create_renderpass_2_spec_version = VK_KHR_CREATE_RENDERPASS_2_SPEC_VERSION;
constexpr auto khr_dedicated_allocation_extension_name = VK_KHR_DEDICATED_ALLOCATION_EXTENSION_NAME;
constexpr auto khr_dedicated_allocation_spec_version = VK_KHR_DEDICATED_ALLOCATION_SPEC_VERSION;
constexpr auto khr_descriptor_update_template_extension_name = VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_EXTENSION_NAME;
constexpr auto khr_descriptor_update_template_spec_version = VK_KHR_DESCRIPTOR_UPDATE_TEMPLATE_SPEC_VERSION;
constexpr auto khr_device_group_creation_extension_name = VK_KHR_DEVICE_GROUP_CREATION_EXTENSION_NAME;
constexpr auto khr_device_group_creation_spec_version = VK_KHR_DEVICE_GROUP_CREATION_SPEC_VERSION;
constexpr auto khr_device_group_extension_name = VK_KHR_DEVICE_GROUP_EXTENSION_NAME;
constexpr auto khr_device_group_spec_version = VK_KHR_DEVICE_GROUP_SPEC_VERSION;
constexpr auto khr_display_extension_name = VK_KHR_DISPLAY_EXTENSION_NAME;
constexpr auto khr_display_spec_version = VK_KHR_DISPLAY_SPEC_VERSION;
constexpr auto khr_display_swapchain_extension_name = VK_KHR_DISPLAY_SWAPCHAIN_EXTENSION_NAME;
constexpr auto khr_display_swapchain_spec_version = VK_KHR_DISPLAY_SWAPCHAIN_SPEC_VERSION;
constexpr auto khr_draw_indirect_count_extension_name = VK_KHR_DRAW_INDIRECT_COUNT_EXTENSION_NAME;
constexpr auto khr_draw_indirect_count_spec_version = VK_KHR_DRAW_INDIRECT_COUNT_SPEC_VERSION;
constexpr auto khr_external_fence_capabilities_extension_name = VK_KHR_EXTERNAL_FENCE_CAPABILITIES_EXTENSION_NAME;
constexpr auto khr_external_fence_capabilities_spec_version = VK_KHR_EXTERNAL_FENCE_CAPABILITIES_SPEC_VERSION;
constexpr auto khr_external_fence_extension_name = VK_KHR_EXTERNAL_FENCE_EXTENSION_NAME;
constexpr auto khr_external_fence_fd_extension_name = VK_KHR_EXTERNAL_FENCE_FD_EXTENSION_NAME;
constexpr auto khr_external_fence_fd_spec_version = VK_KHR_EXTERNAL_FENCE_FD_SPEC_VERSION;
constexpr auto khr_external_fence_spec_version = VK_KHR_EXTERNAL_FENCE_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_fence_win32_extension_name = VK_KHR_EXTERNAL_FENCE_WIN32_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_fence_win32_spec_version = VK_KHR_EXTERNAL_FENCE_WIN32_SPEC_VERSION;
#endif
constexpr auto khr_external_memory_capabilities_extension_name = VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME;
constexpr auto khr_external_memory_capabilities_spec_version = VK_KHR_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
constexpr auto khr_external_memory_extension_name = VK_KHR_EXTERNAL_MEMORY_EXTENSION_NAME;
constexpr auto khr_external_memory_fd_extension_name = VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME;
constexpr auto khr_external_memory_fd_spec_version = VK_KHR_EXTERNAL_MEMORY_FD_SPEC_VERSION;
constexpr auto khr_external_memory_spec_version = VK_KHR_EXTERNAL_MEMORY_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_memory_win32_extension_name = VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_memory_win32_spec_version = VK_KHR_EXTERNAL_MEMORY_WIN32_SPEC_VERSION;
#endif
constexpr auto khr_external_semaphore_capabilities_extension_name = VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_EXTENSION_NAME;
constexpr auto khr_external_semaphore_capabilities_spec_version = VK_KHR_EXTERNAL_SEMAPHORE_CAPABILITIES_SPEC_VERSION;
constexpr auto khr_external_semaphore_extension_name = VK_KHR_EXTERNAL_SEMAPHORE_EXTENSION_NAME;
constexpr auto khr_external_semaphore_fd_extension_name = VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME;
constexpr auto khr_external_semaphore_fd_spec_version = VK_KHR_EXTERNAL_SEMAPHORE_FD_SPEC_VERSION;
constexpr auto khr_external_semaphore_spec_version = VK_KHR_EXTERNAL_SEMAPHORE_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_semaphore_win32_extension_name = VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_external_semaphore_win32_spec_version = VK_KHR_EXTERNAL_SEMAPHORE_WIN32_SPEC_VERSION;
#endif
constexpr auto khr_get_display_properties_2_extension_name = VK_KHR_GET_DISPLAY_PROPERTIES_2_EXTENSION_NAME;
constexpr auto khr_get_display_properties_2_spec_version = VK_KHR_GET_DISPLAY_PROPERTIES_2_SPEC_VERSION;
constexpr auto khr_get_memory_requirements_2_extension_name = VK_KHR_GET_MEMORY_REQUIREMENTS_2_EXTENSION_NAME;
constexpr auto khr_get_memory_requirements_2_spec_version = VK_KHR_GET_MEMORY_REQUIREMENTS_2_SPEC_VERSION;
constexpr auto khr_get_physical_device_properties_2_extension_name = VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME;
constexpr auto khr_get_physical_device_properties_2_spec_version = VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_SPEC_VERSION;
constexpr auto khr_get_surface_capabilities_2_extension_name = VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME;
constexpr auto khr_get_surface_capabilities_2_spec_version = VK_KHR_GET_SURFACE_CAPABILITIES_2_SPEC_VERSION;
constexpr auto khr_image_format_list_extension_name = VK_KHR_IMAGE_FORMAT_LIST_EXTENSION_NAME;
constexpr auto khr_image_format_list_spec_version = VK_KHR_IMAGE_FORMAT_LIST_SPEC_VERSION;
constexpr auto khr_incremental_present_extension_name = VK_KHR_INCREMENTAL_PRESENT_EXTENSION_NAME;
constexpr auto khr_incremental_present_spec_version = VK_KHR_INCREMENTAL_PRESENT_SPEC_VERSION;
constexpr auto khr_maintenance1_extension_name = VK_KHR_MAINTENANCE1_EXTENSION_NAME;
constexpr auto khr_maintenance1_spec_version = VK_KHR_MAINTENANCE1_SPEC_VERSION;
constexpr auto khr_maintenance2_extension_name = VK_KHR_MAINTENANCE2_EXTENSION_NAME;
constexpr auto khr_maintenance2_spec_version = VK_KHR_MAINTENANCE2_SPEC_VERSION;
constexpr auto khr_maintenance3_extension_name = VK_KHR_MAINTENANCE3_EXTENSION_NAME;
constexpr auto khr_maintenance3_spec_version = VK_KHR_MAINTENANCE3_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_MIR_KHR
constexpr auto khr_mir_surface_extension_name = VK_KHR_MIR_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
constexpr auto khr_mir_surface_spec_version = VK_KHR_MIR_SURFACE_SPEC_VERSION;
#endif
constexpr auto khr_multiview_extension_name = VK_KHR_MULTIVIEW_EXTENSION_NAME;
constexpr auto khr_multiview_spec_version = VK_KHR_MULTIVIEW_SPEC_VERSION;
constexpr auto khr_push_descriptor_extension_name = VK_KHR_PUSH_DESCRIPTOR_EXTENSION_NAME;
constexpr auto khr_push_descriptor_spec_version = VK_KHR_PUSH_DESCRIPTOR_SPEC_VERSION;
constexpr auto khr_relaxed_block_layout_extension_name = VK_KHR_RELAXED_BLOCK_LAYOUT_EXTENSION_NAME;
constexpr auto khr_relaxed_block_layout_spec_version = VK_KHR_RELAXED_BLOCK_LAYOUT_SPEC_VERSION;
constexpr auto khr_sampler_mirror_clamp_to_edge_extension_name = VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_EXTENSION_NAME;
constexpr auto khr_sampler_mirror_clamp_to_edge_spec_version = VK_KHR_SAMPLER_MIRROR_CLAMP_TO_EDGE_SPEC_VERSION;
constexpr auto khr_sampler_ycbcr_conversion_extension_name = VK_KHR_SAMPLER_YCBCR_CONVERSION_EXTENSION_NAME;
constexpr auto khr_sampler_ycbcr_conversion_spec_version = VK_KHR_SAMPLER_YCBCR_CONVERSION_SPEC_VERSION;
constexpr auto khr_shader_draw_parameters_extension_name = VK_KHR_SHADER_DRAW_PARAMETERS_EXTENSION_NAME;
constexpr auto khr_shader_draw_parameters_spec_version = VK_KHR_SHADER_DRAW_PARAMETERS_SPEC_VERSION;
constexpr auto khr_shared_presentable_image_extension_name = VK_KHR_SHARED_PRESENTABLE_IMAGE_EXTENSION_NAME;
constexpr auto khr_shared_presentable_image_spec_version = VK_KHR_SHARED_PRESENTABLE_IMAGE_SPEC_VERSION;
constexpr auto khr_storage_buffer_storage_class_extension_name = VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_EXTENSION_NAME;
constexpr auto khr_storage_buffer_storage_class_spec_version = VK_KHR_STORAGE_BUFFER_STORAGE_CLASS_SPEC_VERSION;
constexpr auto khr_surface_extension_name = VK_KHR_SURFACE_EXTENSION_NAME;
constexpr auto khr_surface_spec_version = VK_KHR_SURFACE_SPEC_VERSION;
constexpr auto khr_swapchain_extension_name = VK_KHR_SWAPCHAIN_EXTENSION_NAME;
constexpr auto khr_swapchain_spec_version = VK_KHR_SWAPCHAIN_SPEC_VERSION;
constexpr auto khr_variable_pointers_extension_name = VK_KHR_VARIABLE_POINTERS_EXTENSION_NAME;
constexpr auto khr_variable_pointers_spec_version = VK_KHR_VARIABLE_POINTERS_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
constexpr auto khr_wayland_surface_extension_name = VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
constexpr auto khr_wayland_surface_spec_version = VK_KHR_WAYLAND_SURFACE_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_win32_keyed_mutex_extension_name = VK_KHR_WIN32_KEYED_MUTEX_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_win32_keyed_mutex_spec_version = VK_KHR_WIN32_KEYED_MUTEX_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_win32_surface_extension_name = VK_KHR_WIN32_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto khr_win32_surface_spec_version = VK_KHR_WIN32_SURFACE_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
constexpr auto khr_xcb_surface_extension_name = VK_KHR_XCB_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
constexpr auto khr_xcb_surface_spec_version = VK_KHR_XCB_SURFACE_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
constexpr auto khr_xlib_surface_extension_name = VK_KHR_XLIB_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
constexpr auto khr_xlib_surface_spec_version = VK_KHR_XLIB_SURFACE_SPEC_VERSION;
#endif
constexpr auto lod_clamp_none = VK_LOD_CLAMP_NONE;
constexpr auto luid_size = VK_LUID_SIZE;
constexpr auto luid_size_khr = VK_LUID_SIZE_KHR;
constexpr auto max_description_size = VK_MAX_DESCRIPTION_SIZE;
constexpr auto max_device_group_size = VK_MAX_DEVICE_GROUP_SIZE;
constexpr auto max_device_group_size_khr = VK_MAX_DEVICE_GROUP_SIZE_KHR;
constexpr auto max_extension_name_size = VK_MAX_EXTENSION_NAME_SIZE;
constexpr auto max_memory_heaps = VK_MAX_MEMORY_HEAPS;
constexpr auto max_memory_types = VK_MAX_MEMORY_TYPES;
constexpr auto max_physical_device_name_size = VK_MAX_PHYSICAL_DEVICE_NAME_SIZE;
#ifdef VK_USE_PLATFORM_IOS_MVK
constexpr auto mvk_ios_surface_extension_name = VK_MVK_IOS_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_IOS_MVK
constexpr auto mvk_ios_surface_spec_version = VK_MVK_IOS_SURFACE_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
constexpr auto mvk_macos_surface_extension_name = VK_MVK_MACOS_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
constexpr auto mvk_macos_surface_spec_version = VK_MVK_MACOS_SURFACE_SPEC_VERSION;
#endif
#ifdef VK_USE_PLATFORM_VI_NN
constexpr auto nn_vi_surface_extension_name = VK_NN_VI_SURFACE_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_VI_NN
constexpr auto nn_vi_surface_spec_version = VK_NN_VI_SURFACE_SPEC_VERSION;
#endif
constexpr auto nv_clip_space_w_scaling_extension_name = VK_NV_CLIP_SPACE_W_SCALING_EXTENSION_NAME;
constexpr auto nv_clip_space_w_scaling_spec_version = VK_NV_CLIP_SPACE_W_SCALING_SPEC_VERSION;
constexpr auto nv_dedicated_allocation_extension_name = VK_NV_DEDICATED_ALLOCATION_EXTENSION_NAME;
constexpr auto nv_dedicated_allocation_spec_version = VK_NV_DEDICATED_ALLOCATION_SPEC_VERSION;
constexpr auto nv_device_diagnostic_checkpoints_extension_name = VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_EXTENSION_NAME;
constexpr auto nv_device_diagnostic_checkpoints_spec_version = VK_NV_DEVICE_DIAGNOSTIC_CHECKPOINTS_SPEC_VERSION;
constexpr auto nv_external_memory_capabilities_extension_name = VK_NV_EXTERNAL_MEMORY_CAPABILITIES_EXTENSION_NAME;
constexpr auto nv_external_memory_capabilities_spec_version = VK_NV_EXTERNAL_MEMORY_CAPABILITIES_SPEC_VERSION;
constexpr auto nv_external_memory_extension_name = VK_NV_EXTERNAL_MEMORY_EXTENSION_NAME;
constexpr auto nv_external_memory_spec_version = VK_NV_EXTERNAL_MEMORY_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto nv_external_memory_win32_extension_name = VK_NV_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto nv_external_memory_win32_spec_version = VK_NV_EXTERNAL_MEMORY_WIN32_SPEC_VERSION;
#endif
constexpr auto nv_fill_rectangle_extension_name = VK_NV_FILL_RECTANGLE_EXTENSION_NAME;
constexpr auto nv_fill_rectangle_spec_version = VK_NV_FILL_RECTANGLE_SPEC_VERSION;
constexpr auto nv_fragment_coverage_to_color_extension_name = VK_NV_FRAGMENT_COVERAGE_TO_COLOR_EXTENSION_NAME;
constexpr auto nv_fragment_coverage_to_color_spec_version = VK_NV_FRAGMENT_COVERAGE_TO_COLOR_SPEC_VERSION;
constexpr auto nv_framebuffer_mixed_samples_extension_name = VK_NV_FRAMEBUFFER_MIXED_SAMPLES_EXTENSION_NAME;
constexpr auto nv_framebuffer_mixed_samples_spec_version = VK_NV_FRAMEBUFFER_MIXED_SAMPLES_SPEC_VERSION;
constexpr auto nv_geometry_shader_passthrough_extension_name = VK_NV_GEOMETRY_SHADER_PASSTHROUGH_EXTENSION_NAME;
constexpr auto nv_geometry_shader_passthrough_spec_version = VK_NV_GEOMETRY_SHADER_PASSTHROUGH_SPEC_VERSION;
constexpr auto nv_glsl_shader_extension_name = VK_NV_GLSL_SHADER_EXTENSION_NAME;
constexpr auto nv_glsl_shader_spec_version = VK_NV_GLSL_SHADER_SPEC_VERSION;
constexpr auto nv_sample_mask_override_coverage_extension_name = VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_EXTENSION_NAME;
constexpr auto nv_sample_mask_override_coverage_spec_version = VK_NV_SAMPLE_MASK_OVERRIDE_COVERAGE_SPEC_VERSION;
constexpr auto nv_shader_subgroup_partitioned_extension_name = VK_NV_SHADER_SUBGROUP_PARTITIONED_EXTENSION_NAME;
constexpr auto nv_shader_subgroup_partitioned_spec_version = VK_NV_SHADER_SUBGROUP_PARTITIONED_SPEC_VERSION;
constexpr auto nv_viewport_array2_extension_name = VK_NV_VIEWPORT_ARRAY2_EXTENSION_NAME;
constexpr auto nv_viewport_array2_spec_version = VK_NV_VIEWPORT_ARRAY2_SPEC_VERSION;
constexpr auto nv_viewport_swizzle_extension_name = VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME;
constexpr auto nv_viewport_swizzle_spec_version = VK_NV_VIEWPORT_SWIZZLE_SPEC_VERSION;
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto nv_win32_keyed_mutex_extension_name = VK_NV_WIN32_KEYED_MUTEX_EXTENSION_NAME;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
constexpr auto nv_win32_keyed_mutex_spec_version = VK_NV_WIN32_KEYED_MUTEX_SPEC_VERSION;
#endif
constexpr auto nvx_device_generated_commands_extension_name = VK_NVX_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME;
constexpr auto nvx_device_generated_commands_spec_version = VK_NVX_DEVICE_GENERATED_COMMANDS_SPEC_VERSION;
constexpr auto nvx_multiview_per_view_attributes_extension_name = VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_EXTENSION_NAME;
constexpr auto nvx_multiview_per_view_attributes_spec_version = VK_NVX_MULTIVIEW_PER_VIEW_ATTRIBUTES_SPEC_VERSION;
constexpr auto queue_family_external = VK_QUEUE_FAMILY_EXTERNAL;
constexpr auto queue_family_external_khr = VK_QUEUE_FAMILY_EXTERNAL_KHR;
constexpr auto queue_family_foreign_ext = VK_QUEUE_FAMILY_FOREIGN_EXT;
constexpr auto queue_family_ignored = VK_QUEUE_FAMILY_IGNORED;
constexpr auto remaining_array_layers = VK_REMAINING_ARRAY_LAYERS;
constexpr auto remaining_mip_levels = VK_REMAINING_MIP_LEVELS;
constexpr auto structure_type_debug_report_create_info_ext = VK_STRUCTURE_TYPE_DEBUG_REPORT_CREATE_INFO_EXT;
constexpr auto structure_type_surface_capabilities2_ext = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES2_EXT;
constexpr auto subpass_external = VK_SUBPASS_EXTERNAL;
constexpr auto uuid_size = VK_UUID_SIZE;
constexpr auto whole_size = VK_WHOLE_SIZE;

// handle refs
using buffer_ref = VkBuffer;
using buffer_view_ref = VkBufferView;
using command_buffer_ref = VkCommandBuffer;
using command_pool_ref = VkCommandPool;
using debug_report_callback_ext_ref = VkDebugReportCallbackEXT;
using debug_utils_messenger_ext_ref = VkDebugUtilsMessengerEXT;
using descriptor_pool_ref = VkDescriptorPool;
using descriptor_set_layout_ref = VkDescriptorSetLayout;
using descriptor_set_ref = VkDescriptorSet;
using descriptor_update_template_ref = VkDescriptorUpdateTemplate;
using device_memory_ref = VkDeviceMemory;
using device_ref = VkDevice;
using display_khr_ref = VkDisplayKHR;
using display_mode_khr_ref = VkDisplayModeKHR;
using event_ref = VkEvent;
using fence_ref = VkFence;
using framebuffer_ref = VkFramebuffer;
using image_ref = VkImage;
using image_view_ref = VkImageView;
using indirect_commands_layout_nvx_ref = VkIndirectCommandsLayoutNVX;
using instance_ref = VkInstance;
using object_table_nvx_ref = VkObjectTableNVX;
using physical_device_ref = VkPhysicalDevice;
using pipeline_cache_ref = VkPipelineCache;
using pipeline_layout_ref = VkPipelineLayout;
using pipeline_ref = VkPipeline;
using query_pool_ref = VkQueryPool;
using queue_ref = VkQueue;
using render_pass_ref = VkRenderPass;
using sampler_ref = VkSampler;
using sampler_ycbcr_conversion_ref = VkSamplerYcbcrConversion;
using semaphore_ref = VkSemaphore;
using shader_module_ref = VkShaderModule;
using surface_khr_ref = VkSurfaceKHR;
using swapchain_khr_ref = VkSwapchainKHR;
using validation_cache_ext_ref = VkValidationCacheEXT;
// struct fwd decls
class acquire_next_image_info_khr;
class allocation_callbacks;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_properties_android;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_usage_android;
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_surface_create_info_khr;
#endif
class application_info;
class attachment_description;
class attachment_description_2khr;
class attachment_reference;
class attachment_reference_2khr;
class base_in_structure;
class base_out_structure;
class bind_buffer_memory_device_group_info;
class bind_buffer_memory_info;
class bind_image_memory_device_group_info;
class bind_image_memory_info;
class bind_image_memory_swapchain_info_khr;
class bind_image_plane_memory_info;
class bind_sparse_info;
class buffer_copy;
class buffer_create_info;
class buffer_memory_barrier;
class buffer_memory_requirements_info_2;
class buffer_view_create_info;
class checkpoint_data_nv;
union clear_color_value;
class clear_depth_stencil_value;
class cmd_process_commands_info_nvx;
class cmd_reserve_space_for_commands_info_nvx;
class command_buffer_allocate_info;
class command_buffer_begin_info;
class command_buffer_inheritance_conditional_rendering_info_ext;
class command_buffer_inheritance_info;
class command_pool_create_info;
class component_mapping;
class conditional_rendering_begin_info_ext;
class copy_descriptor_set;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class d3d12fence_submit_info_khr;
#endif
class debug_marker_marker_info_ext;
class debug_marker_object_name_info_ext;
class debug_marker_object_tag_info_ext;
class debug_report_callback_create_info_ext;
class debug_utils_label_ext;
class debug_utils_messenger_callback_data_ext;
class debug_utils_messenger_create_info_ext;
class debug_utils_object_name_info_ext;
class debug_utils_object_tag_info_ext;
class dedicated_allocation_buffer_create_info_nv;
class dedicated_allocation_image_create_info_nv;
class dedicated_allocation_memory_allocate_info_nv;
class descriptor_buffer_info;
class descriptor_image_info;
class descriptor_pool_create_info;
class descriptor_pool_size;
class descriptor_set_allocate_info;
class descriptor_set_layout_binding;
class descriptor_set_layout_binding_flags_create_info_ext;
class descriptor_set_layout_create_info;
class descriptor_set_layout_support;
class descriptor_set_variable_descriptor_count_allocate_info_ext;
class descriptor_set_variable_descriptor_count_layout_support_ext;
class descriptor_update_template_create_info;
class descriptor_update_template_entry;
class device_create_info;
class device_event_info_ext;
class device_generated_commands_features_nvx;
class device_generated_commands_limits_nvx;
class device_group_bind_sparse_info;
class device_group_command_buffer_begin_info;
class device_group_device_create_info;
class device_group_present_capabilities_khr;
class device_group_present_info_khr;
class device_group_render_pass_begin_info;
class device_group_submit_info;
class device_group_swapchain_create_info_khr;
class device_queue_create_info;
class device_queue_global_priority_create_info_ext;
class device_queue_info_2;
class dispatch_indirect_command;
class display_event_info_ext;
class display_plane_info_2khr;
class display_plane_properties_khr;
class display_power_info_ext;
class draw_indexed_indirect_command;
class draw_indirect_command;
class event_create_info;
class export_fence_create_info;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_fence_win_32handle_info_khr;
#endif
class export_memory_allocate_info;
class export_memory_allocate_info_nv;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_memory_win_32handle_info_khr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_memory_win_32handle_info_nv;
#endif
class export_semaphore_create_info;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_semaphore_win_32handle_info_khr;
#endif
class extension_properties;
class extent_2d;
class extent_3d;
class external_fence_properties;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class external_format_android;
#endif
class external_memory_buffer_create_info;
class external_memory_image_create_info;
class external_memory_image_create_info_nv;
class external_memory_properties;
class external_semaphore_properties;
class fence_create_info;
class fence_get_fd_info_khr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class fence_get_win_32handle_info_khr;
#endif
class format_properties;
class framebuffer_create_info;
class graphics_pipeline_create_info;
class image_format_list_create_info_khr;
class image_memory_requirements_info_2;
class image_plane_memory_requirements_info;
class image_sparse_memory_requirements_info_2;
class image_subresource;
class image_subresource_layers;
class image_subresource_range;
class image_swapchain_create_info_khr;
class image_view_usage_create_info;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class import_android_hardware_buffer_info_android;
#endif
class import_fence_fd_info_khr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_fence_win_32handle_info_khr;
#endif
class import_memory_fd_info_khr;
class import_memory_host_pointer_info_ext;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_memory_win_32handle_info_khr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_memory_win_32handle_info_nv;
#endif
class import_semaphore_fd_info_khr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_semaphore_win_32handle_info_khr;
#endif
class indirect_commands_layout_create_info_nvx;
class indirect_commands_layout_token_nvx;
class indirect_commands_token_nvx;
class input_attachment_aspect_reference;
class instance_create_info;
#ifdef VK_USE_PLATFORM_IOS_MVK
class ios_surface_create_info_mvk;
#endif
class layer_properties;
#ifdef VK_USE_PLATFORM_MACOS_MVK
class mac_os_surface_create_info_mvk;
#endif
class mapped_memory_range;
class memory_allocate_flags_info;
class memory_allocate_info;
class memory_barrier;
class memory_dedicated_allocate_info;
class memory_dedicated_requirements;
class memory_fd_properties_khr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class memory_get_android_hardware_buffer_info_android;
#endif
class memory_get_fd_info_khr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class memory_get_win_32handle_info_khr;
#endif
class memory_heap;
class memory_host_pointer_properties_ext;
class memory_requirements;
class memory_type;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class memory_win_32handle_properties_khr;
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
class mir_surface_create_info_khr;
#endif
class object_table_create_info_nvx;
class object_table_descriptor_set_entry_nvx;
class object_table_entry_nvx;
class object_table_index_buffer_entry_nvx;
class object_table_pipeline_entry_nvx;
class object_table_push_constant_entry_nvx;
class object_table_vertex_buffer_entry_nvx;
class offset_2d;
class offset_3d;
class past_presentation_timing_google;
class physical_device_16bit_storage_features;
class physical_device_8bit_storage_features_khr;
class physical_device_blend_operation_advanced_features_ext;
class physical_device_blend_operation_advanced_properties_ext;
class physical_device_conditional_rendering_features_ext;
class physical_device_conservative_rasterization_properties_ext;
class physical_device_descriptor_indexing_features_ext;
class physical_device_descriptor_indexing_properties_ext;
class physical_device_discard_rectangle_properties_ext;
class physical_device_external_buffer_info;
class physical_device_external_fence_info;
class physical_device_external_image_format_info;
class physical_device_external_memory_host_properties_ext;
class physical_device_external_semaphore_info;
class physical_device_features;
class physical_device_group_properties;
class physical_device_id_properties;
class physical_device_image_format_info_2;
class physical_device_limits;
class physical_device_maintenance_3properties;
class physical_device_multiview_features;
class physical_device_multiview_per_view_attributes_properties_nvx;
class physical_device_multiview_properties;
class physical_device_point_clipping_properties;
class physical_device_protected_memory_features;
class physical_device_protected_memory_properties;
class physical_device_push_descriptor_properties_khr;
class physical_device_sampler_filter_minmax_properties_ext;
class physical_device_sampler_ycbcr_conversion_features;
class physical_device_shader_core_properties_amd;
class physical_device_shader_draw_parameter_features;
class physical_device_sparse_image_format_info_2;
class physical_device_sparse_properties;
class physical_device_subgroup_properties;
class physical_device_surface_info_2khr;
class physical_device_variable_pointer_features;
class physical_device_vertex_attribute_divisor_properties_ext;
class pipeline_cache_create_info;
class pipeline_color_blend_advanced_state_create_info_ext;
class pipeline_color_blend_attachment_state;
class pipeline_color_blend_state_create_info;
class pipeline_coverage_modulation_state_create_info_nv;
class pipeline_coverage_to_color_state_create_info_nv;
class pipeline_discard_rectangle_state_create_info_ext;
class pipeline_dynamic_state_create_info;
class pipeline_input_assembly_state_create_info;
class pipeline_layout_create_info;
class pipeline_multisample_state_create_info;
class pipeline_rasterization_conservative_state_create_info_ext;
class pipeline_rasterization_state_create_info;
class pipeline_rasterization_state_rasterization_order_amd;
class pipeline_shader_stage_create_info;
class pipeline_tessellation_domain_origin_state_create_info;
class pipeline_tessellation_state_create_info;
class pipeline_vertex_input_divisor_state_create_info_ext;
class pipeline_vertex_input_state_create_info;
class pipeline_viewport_state_create_info;
class pipeline_viewport_swizzle_state_create_info_nv;
class pipeline_viewport_w_scaling_state_create_info_nv;
class present_info_khr;
class present_region_khr;
class present_regions_khr;
class present_time_google;
class present_times_info_google;
class protected_submit_info;
class push_constant_range;
class query_pool_create_info;
class queue_family_checkpoint_properties_nv;
class refresh_cycle_duration_google;
class render_pass_create_info;
class render_pass_create_info_2khr;
class render_pass_input_attachment_aspect_create_info;
class render_pass_multiview_create_info;
class render_pass_sample_locations_begin_info_ext;
class sample_location_ext;
class sampler_create_info;
class sampler_reduction_mode_create_info_ext;
class sampler_ycbcr_conversion_image_format_properties;
class sampler_ycbcr_conversion_info;
class semaphore_create_info;
class semaphore_get_fd_info_khr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
class semaphore_get_win_32handle_info_khr;
#endif
class shader_module_create_info;
class shader_module_validation_cache_create_info_ext;
class shader_resource_usage_amd;
class shared_present_surface_capabilities_khr;
class sparse_buffer_memory_bind_info;
class sparse_image_memory_bind_info;
class sparse_image_opaque_memory_bind_info;
class sparse_memory_bind;
class specialization_info;
class specialization_map_entry;
class stencil_op_state;
class submit_info;
class subpass_begin_info_khr;
class subpass_dependency;
class subpass_dependency_2khr;
class subpass_description;
class subpass_description_2khr;
class subpass_end_info_khr;
class subresource_layout;
class surface_format_khr;
class swapchain_counter_create_info_ext;
class texture_lod_gather_format_properties_amd;
class validation_cache_create_info_ext;
class validation_flags_ext;
class vertex_input_attribute_description;
class vertex_input_binding_description;
class vertex_input_binding_divisor_description_ext;
#ifdef VK_USE_PLATFORM_VI_NN
class vi_surface_create_info_nn;
#endif
class viewport;
class viewport_swizzle_nv;
class viewport_w_scaling_nv;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
class wayland_surface_create_info_khr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32keyed_mutex_acquire_release_info_khr;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32keyed_mutex_acquire_release_info_nv;
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32surface_create_info_khr;
#endif
class write_descriptor_set;
#ifdef VK_USE_PLATFORM_XCB_KHR
class xcb_surface_create_info_khr;
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
class xlib_surface_create_info_khr;
#endif
class xy_color_ext;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_format_properties_android;
#endif
class buffer_image_copy;
union clear_value;
class compute_pipeline_create_info;
class display_mode_parameters_khr;
class display_plane_capabilities_khr;
class display_plane_properties_2khr;
class display_properties_khr;
class display_surface_create_info_khr;
class external_buffer_properties;
class external_image_format_properties;
class format_properties_2;
class hdr_metadata_ext;
class image_blit;
class image_copy;
class image_create_info;
class image_format_properties;
class image_memory_barrier;
class image_resolve;
class image_view_create_info;
class memory_requirements_2;
class multisample_properties_ext;
class physical_device_features_2;
class physical_device_memory_properties;
class physical_device_properties;
class physical_device_sample_locations_properties_ext;
class pipeline_depth_stencil_state_create_info;
class queue_family_properties;
class rect_2d;
class rect_layer_khr;
class sample_locations_info_ext;
class sampler_ycbcr_conversion_create_info;
class shader_statistics_info_amd;
class sparse_image_format_properties;
class sparse_image_memory_bind;
class surface_capabilities_2ext;
class surface_capabilities_khr;
class surface_format_2khr;
class swapchain_create_info_khr;
class attachment_sample_locations_ext;
class clear_attachment;
class clear_rect;
class display_mode_create_info_khr;
class display_mode_properties_khr;
class display_plane_capabilities_2khr;
class display_present_info_khr;
class display_properties_2khr;
class external_image_format_properties_nv;
class image_format_properties_2;
class physical_device_memory_properties_2;
class physical_device_properties_2;
class pipeline_sample_locations_state_create_info_ext;
class queue_family_properties_2;
class render_pass_begin_info;
class sparse_image_format_properties_2;
class sparse_image_memory_requirements;
class subpass_sample_locations_ext;
class surface_capabilities_2khr;
class display_mode_properties_2khr;
class sparse_image_memory_requirements_2;

class acquire_next_image_info_khr {
 public:
  using underlying_type = VkAcquireNextImageInfoKHR;

  // mutators
  void set_swapchain(spk::swapchain_khr_ref value) { swapchain_ = value; }
  void set_timeout(uint64_t value) { timeout_ = value; }
  void set_semaphore(spk::semaphore_ref value) { semaphore_ = value; }
  void set_fence(spk::fence_ref value) { fence_ = value; }
  void set_device_mask(uint32_t value) { device_mask_ = value; }

  // accessors
  spk::swapchain_khr_ref swapchain() const { return swapchain_; }
  uint64_t timeout() const { return timeout_; }
  spk::semaphore_ref semaphore() const { return semaphore_; }
  spk::fence_ref fence() const { return fence_; }
  uint32_t device_mask() const { return device_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::swapchain_khr_ref swapchain_= 0;
  uint64_t timeout_= 0;
  spk::semaphore_ref semaphore_= 0;// optional
  spk::fence_ref fence_= 0;// optional
  uint32_t device_mask_= 0;
};
static_assert(sizeof(acquire_next_image_info_khr) == sizeof(acquire_next_image_info_khr::underlying_type));

class allocation_callbacks {
 public:
  using underlying_type = VkAllocationCallbacks;

  // mutators
  void set_p_user_data(void * value) { p_user_data_ = value; }
  void set_pfn_allocation(PFN_vkAllocationFunction value) { pfn_allocation_ = value; }
  void set_pfn_reallocation(PFN_vkReallocationFunction value) { pfn_reallocation_ = value; }
  void set_pfn_free(PFN_vkFreeFunction value) { pfn_free_ = value; }
  void set_pfn_internal_allocation(PFN_vkInternalAllocationNotification value) { pfn_internal_allocation_ = value; }
  void set_pfn_internal_free(PFN_vkInternalFreeNotification value) { pfn_internal_free_ = value; }

  // accessors
  void * p_user_data() const { return p_user_data_; }
  PFN_vkAllocationFunction pfn_allocation() const { return pfn_allocation_; }
  PFN_vkReallocationFunction pfn_reallocation() const { return pfn_reallocation_; }
  PFN_vkFreeFunction pfn_free() const { return pfn_free_; }
  PFN_vkInternalAllocationNotification pfn_internal_allocation() const { return pfn_internal_allocation_; }
  PFN_vkInternalFreeNotification pfn_internal_free() const { return pfn_internal_free_; }

 private:
  void * p_user_data_= 0;// optional
  PFN_vkAllocationFunction pfn_allocation_= 0;
  PFN_vkReallocationFunction pfn_reallocation_= 0;
  PFN_vkFreeFunction pfn_free_= 0;
  PFN_vkInternalAllocationNotification pfn_internal_allocation_= 0;// optional
  PFN_vkInternalFreeNotification pfn_internal_free_= 0;// optional
};
static_assert(sizeof(allocation_callbacks) == sizeof(allocation_callbacks::underlying_type));

#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_properties_android {
 public:
  using underlying_type = VkAndroidHardwareBufferPropertiesANDROID;

  // mutators
  void set_allocation_size(uint64_t value) { allocation_size_ = value; }
  void set_memory_type_bits(uint32_t value) { memory_type_bits_ = value; }

  // accessors
  uint64_t allocation_size() const { return allocation_size_; }
  uint32_t memory_type_bits() const { return memory_type_bits_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_PROPERTIES_ANDROID;
  void* p_next_ = nullptr;

  uint64_t allocation_size_= 0;
  uint32_t memory_type_bits_= 0;
};
static_assert(sizeof(android_hardware_buffer_properties_android) == sizeof(android_hardware_buffer_properties_android::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_usage_android {
 public:
  using underlying_type = VkAndroidHardwareBufferUsageANDROID;

  // mutators
  void set_android_hardware_buffer_usage(uint64_t value) { android_hardware_buffer_usage_ = value; }

  // accessors
  uint64_t android_hardware_buffer_usage() const { return android_hardware_buffer_usage_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_USAGE_ANDROID;
  void* p_next_ = nullptr;

  uint64_t android_hardware_buffer_usage_= 0;
};
static_assert(sizeof(android_hardware_buffer_usage_android) == sizeof(android_hardware_buffer_usage_android::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_surface_create_info_khr {
 public:
  using underlying_type = VkAndroidSurfaceCreateInfoKHR;

  // mutators
  void set_window(ANativeWindow * value) { window_ = value; }

  // accessors
  ANativeWindow * window() const { return window_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ANDROID_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  ANativeWindow * window_= 0;
};
static_assert(sizeof(android_surface_create_info_khr) == sizeof(android_surface_create_info_khr::underlying_type));
#endif

class application_info {
 public:
  using underlying_type = VkApplicationInfo;

  // mutators
  void set_application_name(spk::string_ptr str) { p_application_name_ = str.get(); }
  void set_engine_name(spk::string_ptr str) { p_engine_name_ = str.get(); }
  void set_application_version(uint32_t value) { application_version_ = value; }
  void set_engine_version(uint32_t value) { engine_version_ = value; }
  void set_api_version(uint32_t value) { api_version_ = value; }

  // accessors
  std::string_view application_name() const { return p_application_name_; }
  std::string_view engine_name() const { return p_engine_name_; }
  uint32_t application_version() const { return application_version_; }
  uint32_t engine_version() const { return engine_version_; }
  uint32_t api_version() const { return api_version_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  void* p_next_ = nullptr;

  char const * p_application_name_= 0;// optional
  uint32_t application_version_= 0;
  char const * p_engine_name_= 0;// optional
  uint32_t engine_version_= 0;
  uint32_t api_version_= 0;
};
static_assert(sizeof(application_info) == sizeof(application_info::underlying_type));

class attachment_description {
 public:
  using underlying_type = VkAttachmentDescription;

  // mutators
  void set_flags(spk::attachment_description_flags value) { flags_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_samples(spk::sample_count_flags value) { samples_ = value; }
  void set_load_op(spk::attachment_load_op value) { load_op_ = value; }
  void set_store_op(spk::attachment_store_op value) { store_op_ = value; }
  void set_stencil_load_op(spk::attachment_load_op value) { stencil_load_op_ = value; }
  void set_stencil_store_op(spk::attachment_store_op value) { stencil_store_op_ = value; }
  void set_initial_layout(spk::image_layout value) { initial_layout_ = value; }
  void set_final_layout(spk::image_layout value) { final_layout_ = value; }

  // accessors
  spk::attachment_description_flags flags() const { return flags_; }
  spk::format format() const { return format_; }
  spk::sample_count_flags samples() const { return samples_; }
  spk::attachment_load_op load_op() const { return load_op_; }
  spk::attachment_store_op store_op() const { return store_op_; }
  spk::attachment_load_op stencil_load_op() const { return stencil_load_op_; }
  spk::attachment_store_op stencil_store_op() const { return stencil_store_op_; }
  spk::image_layout initial_layout() const { return initial_layout_; }
  spk::image_layout final_layout() const { return final_layout_; }

 private:
  spk::attachment_description_flags flags_= spk::attachment_description_flags(0);// optional
  spk::format format_= spk::format(0);
  spk::sample_count_flags samples_= spk::sample_count_flags(0);
  spk::attachment_load_op load_op_= spk::attachment_load_op(0);
  spk::attachment_store_op store_op_= spk::attachment_store_op(0);
  spk::attachment_load_op stencil_load_op_= spk::attachment_load_op(0);
  spk::attachment_store_op stencil_store_op_= spk::attachment_store_op(0);
  spk::image_layout initial_layout_= spk::image_layout(0);
  spk::image_layout final_layout_= spk::image_layout(0);
};
static_assert(sizeof(attachment_description) == sizeof(attachment_description::underlying_type));

class attachment_description_2khr {
 public:
  using underlying_type = VkAttachmentDescription2KHR;

  // mutators
  void set_flags(spk::attachment_description_flags value) { flags_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_samples(spk::sample_count_flags value) { samples_ = value; }
  void set_load_op(spk::attachment_load_op value) { load_op_ = value; }
  void set_store_op(spk::attachment_store_op value) { store_op_ = value; }
  void set_stencil_load_op(spk::attachment_load_op value) { stencil_load_op_ = value; }
  void set_stencil_store_op(spk::attachment_store_op value) { stencil_store_op_ = value; }
  void set_initial_layout(spk::image_layout value) { initial_layout_ = value; }
  void set_final_layout(spk::image_layout value) { final_layout_ = value; }

  // accessors
  spk::attachment_description_flags flags() const { return flags_; }
  spk::format format() const { return format_; }
  spk::sample_count_flags samples() const { return samples_; }
  spk::attachment_load_op load_op() const { return load_op_; }
  spk::attachment_store_op store_op() const { return store_op_; }
  spk::attachment_load_op stencil_load_op() const { return stencil_load_op_; }
  spk::attachment_store_op stencil_store_op() const { return stencil_store_op_; }
  spk::image_layout initial_layout() const { return initial_layout_; }
  spk::image_layout final_layout() const { return final_layout_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2_KHR;
  void* p_next_ = nullptr;

  spk::attachment_description_flags flags_= spk::attachment_description_flags(0);// optional
  spk::format format_= spk::format(0);
  spk::sample_count_flags samples_= spk::sample_count_flags(0);
  spk::attachment_load_op load_op_= spk::attachment_load_op(0);
  spk::attachment_store_op store_op_= spk::attachment_store_op(0);
  spk::attachment_load_op stencil_load_op_= spk::attachment_load_op(0);
  spk::attachment_store_op stencil_store_op_= spk::attachment_store_op(0);
  spk::image_layout initial_layout_= spk::image_layout(0);
  spk::image_layout final_layout_= spk::image_layout(0);
};
static_assert(sizeof(attachment_description_2khr) == sizeof(attachment_description_2khr::underlying_type));

class attachment_reference {
 public:
  using underlying_type = VkAttachmentReference;

  // mutators
  void set_attachment(uint32_t value) { attachment_ = value; }
  void set_layout(spk::image_layout value) { layout_ = value; }

  // accessors
  uint32_t attachment() const { return attachment_; }
  spk::image_layout layout() const { return layout_; }

 private:
  uint32_t attachment_= 0;
  spk::image_layout layout_= spk::image_layout(0);
};
static_assert(sizeof(attachment_reference) == sizeof(attachment_reference::underlying_type));

class attachment_reference_2khr {
 public:
  using underlying_type = VkAttachmentReference2KHR;

  // mutators
  void set_attachment(uint32_t value) { attachment_ = value; }
  void set_layout(spk::image_layout value) { layout_ = value; }
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }

  // accessors
  uint32_t attachment() const { return attachment_; }
  spk::image_layout layout() const { return layout_; }
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2_KHR;
  void* p_next_ = nullptr;

  uint32_t attachment_= 0;
  spk::image_layout layout_= spk::image_layout(0);
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
};
static_assert(sizeof(attachment_reference_2khr) == sizeof(attachment_reference_2khr::underlying_type));

class base_in_structure {
 public:
  using underlying_type = VkBaseInStructure;

  // mutators
  void set_s_type(spk::structure_type value) { s_type_ = value; }
  void set_p_next(spk::base_in_structure const * value) { p_next_ = value; }

  // accessors
  spk::structure_type s_type() const { return s_type_; }
  spk::base_in_structure const * p_next() const { return p_next_; }

 private:
  spk::structure_type s_type_= spk::structure_type(0);
  spk::base_in_structure const * p_next_= 0;
};
static_assert(sizeof(base_in_structure) == sizeof(base_in_structure::underlying_type));

class base_out_structure {
 public:
  using underlying_type = VkBaseOutStructure;

  // mutators
  void set_s_type(spk::structure_type value) { s_type_ = value; }
  void set_p_next(spk::base_out_structure * value) { p_next_ = value; }

  // accessors
  spk::structure_type s_type() const { return s_type_; }
  spk::base_out_structure * p_next() const { return p_next_; }

 private:
  spk::structure_type s_type_= spk::structure_type(0);
  spk::base_out_structure * p_next_= 0;
};
static_assert(sizeof(base_out_structure) == sizeof(base_out_structure::underlying_type));

class bind_buffer_memory_device_group_info {
 public:
  using underlying_type = VkBindBufferMemoryDeviceGroupInfo;

  // mutators
  void set_device_indices(spk::array_view<uint32_t const> value) { p_device_indices_ = value.get(); device_index_count_ = value.size(); }

  // accessors
  spk::array_view<uint32_t const> device_indices() const { return {p_device_indices_, device_index_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO;
  void* p_next_ = nullptr;

  uint32_t device_index_count_= 0;// optional
  uint32_t const * p_device_indices_= 0;
};
static_assert(sizeof(bind_buffer_memory_device_group_info) == sizeof(bind_buffer_memory_device_group_info::underlying_type));
using bind_buffer_memory_device_group_info_khr = bind_buffer_memory_device_group_info;


class bind_buffer_memory_info {
 public:
  using underlying_type = VkBindBufferMemoryInfo;

  // mutators
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_memory_offset(uint64_t value) { memory_offset_ = value; }

  // accessors
  spk::buffer_ref buffer() const { return buffer_; }
  spk::device_memory_ref memory() const { return memory_; }
  uint64_t memory_offset() const { return memory_offset_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO;
  void* p_next_ = nullptr;

  spk::buffer_ref buffer_= 0;
  spk::device_memory_ref memory_= 0;
  uint64_t memory_offset_= 0;
};
static_assert(sizeof(bind_buffer_memory_info) == sizeof(bind_buffer_memory_info::underlying_type));
using bind_buffer_memory_info_khr = bind_buffer_memory_info;


class bind_image_memory_device_group_info {
 public:
  using underlying_type = VkBindImageMemoryDeviceGroupInfo;

  // mutators
  void set_device_indices(spk::array_view<uint32_t const> value) { p_device_indices_ = value.get(); device_index_count_ = value.size(); }
  void set_split_instance_bind_regions(spk::array_view<spk::rect_2d const> value) { p_split_instance_bind_regions_ = value.get(); split_instance_bind_region_count_ = value.size(); }

  // accessors
  spk::array_view<uint32_t const> device_indices() const { return {p_device_indices_, device_index_count_};}
  spk::array_view<spk::rect_2d const> split_instance_bind_regions() const { return {p_split_instance_bind_regions_, split_instance_bind_region_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO;
  void* p_next_ = nullptr;

  uint32_t device_index_count_= 0;// optional
  uint32_t const * p_device_indices_= 0;
  uint32_t split_instance_bind_region_count_= 0;// optional
  spk::rect_2d const * p_split_instance_bind_regions_= 0;
};
static_assert(sizeof(bind_image_memory_device_group_info) == sizeof(bind_image_memory_device_group_info::underlying_type));
using bind_image_memory_device_group_info_khr = bind_image_memory_device_group_info;


class bind_image_memory_info {
 public:
  using underlying_type = VkBindImageMemoryInfo;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_memory_offset(uint64_t value) { memory_offset_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }
  spk::device_memory_ref memory() const { return memory_; }
  uint64_t memory_offset() const { return memory_offset_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO;
  void* p_next_ = nullptr;

  spk::image_ref image_= 0;
  spk::device_memory_ref memory_= 0;
  uint64_t memory_offset_= 0;
};
static_assert(sizeof(bind_image_memory_info) == sizeof(bind_image_memory_info::underlying_type));
using bind_image_memory_info_khr = bind_image_memory_info;


class bind_image_memory_swapchain_info_khr {
 public:
  using underlying_type = VkBindImageMemorySwapchainInfoKHR;

  // mutators
  void set_swapchain(spk::swapchain_khr_ref value) { swapchain_ = value; }
  void set_image_index(uint32_t value) { image_index_ = value; }

  // accessors
  spk::swapchain_khr_ref swapchain() const { return swapchain_; }
  uint32_t image_index() const { return image_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR;
  void* p_next_ = nullptr;

  spk::swapchain_khr_ref swapchain_= 0;
  uint32_t image_index_= 0;
};
static_assert(sizeof(bind_image_memory_swapchain_info_khr) == sizeof(bind_image_memory_swapchain_info_khr::underlying_type));

class bind_image_plane_memory_info {
 public:
  using underlying_type = VkBindImagePlaneMemoryInfo;

  // mutators
  void set_plane_aspect(spk::image_aspect_flags value) { plane_aspect_ = value; }

  // accessors
  spk::image_aspect_flags plane_aspect() const { return plane_aspect_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO;
  void* p_next_ = nullptr;

  spk::image_aspect_flags plane_aspect_= spk::image_aspect_flags(0);
};
static_assert(sizeof(bind_image_plane_memory_info) == sizeof(bind_image_plane_memory_info::underlying_type));
using bind_image_plane_memory_info_khr = bind_image_plane_memory_info;


class bind_sparse_info {
 public:
  using underlying_type = VkBindSparseInfo;

  // mutators
  void set_wait_semaphores(spk::array_view<spk::semaphore_ref const> value) { p_wait_semaphores_ = value.get(); wait_semaphore_count_ = value.size(); }
  void set_buffer_binds(spk::array_view<spk::sparse_buffer_memory_bind_info const> value) { p_buffer_binds_ = value.get(); buffer_bind_count_ = value.size(); }
  void set_image_opaque_binds(spk::array_view<spk::sparse_image_opaque_memory_bind_info const> value) { p_image_opaque_binds_ = value.get(); image_opaque_bind_count_ = value.size(); }
  void set_image_binds(spk::array_view<spk::sparse_image_memory_bind_info const> value) { p_image_binds_ = value.get(); image_bind_count_ = value.size(); }
  void set_signal_semaphores(spk::array_view<spk::semaphore_ref const> value) { p_signal_semaphores_ = value.get(); signal_semaphore_count_ = value.size(); }

  // accessors
  spk::array_view<spk::semaphore_ref const> wait_semaphores() const { return {p_wait_semaphores_, wait_semaphore_count_};}
  spk::array_view<spk::sparse_buffer_memory_bind_info const> buffer_binds() const { return {p_buffer_binds_, buffer_bind_count_};}
  spk::array_view<spk::sparse_image_opaque_memory_bind_info const> image_opaque_binds() const { return {p_image_opaque_binds_, image_opaque_bind_count_};}
  spk::array_view<spk::sparse_image_memory_bind_info const> image_binds() const { return {p_image_binds_, image_bind_count_};}
  spk::array_view<spk::semaphore_ref const> signal_semaphores() const { return {p_signal_semaphores_, signal_semaphore_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BIND_SPARSE_INFO;
  void* p_next_ = nullptr;

  uint32_t wait_semaphore_count_= 0;// optional
  spk::semaphore_ref const * p_wait_semaphores_= 0;
  uint32_t buffer_bind_count_= 0;// optional
  spk::sparse_buffer_memory_bind_info const * p_buffer_binds_= 0;
  uint32_t image_opaque_bind_count_= 0;// optional
  spk::sparse_image_opaque_memory_bind_info const * p_image_opaque_binds_= 0;
  uint32_t image_bind_count_= 0;// optional
  spk::sparse_image_memory_bind_info const * p_image_binds_= 0;
  uint32_t signal_semaphore_count_= 0;// optional
  spk::semaphore_ref const * p_signal_semaphores_= 0;
};
static_assert(sizeof(bind_sparse_info) == sizeof(bind_sparse_info::underlying_type));

class buffer_copy {
 public:
  using underlying_type = VkBufferCopy;

  // mutators
  void set_src_offset(uint64_t value) { src_offset_ = value; }
  void set_dst_offset(uint64_t value) { dst_offset_ = value; }
  void set_size(uint64_t value) { size_ = value; }

  // accessors
  uint64_t src_offset() const { return src_offset_; }
  uint64_t dst_offset() const { return dst_offset_; }
  uint64_t size() const { return size_; }

 private:
  uint64_t src_offset_= 0;
  uint64_t dst_offset_= 0;
  uint64_t size_= 0;
};
static_assert(sizeof(buffer_copy) == sizeof(buffer_copy::underlying_type));

class buffer_create_info {
 public:
  using underlying_type = VkBufferCreateInfo;

  // mutators
  void set_queue_family_indices(spk::array_view<uint32_t const> value) { p_queue_family_indices_ = value.get(); queue_family_index_count_ = value.size(); }
  void set_flags(spk::buffer_create_flags value) { flags_ = value; }
  void set_size(uint64_t value) { size_ = value; }
  void set_usage(spk::buffer_usage_flags value) { usage_ = value; }
  void set_sharing_mode(spk::sharing_mode value) { sharing_mode_ = value; }

  // accessors
  spk::array_view<uint32_t const> queue_family_indices() const { return {p_queue_family_indices_, queue_family_index_count_};}
  spk::buffer_create_flags flags() const { return flags_; }
  uint64_t size() const { return size_; }
  spk::buffer_usage_flags usage() const { return usage_; }
  spk::sharing_mode sharing_mode() const { return sharing_mode_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::buffer_create_flags flags_= spk::buffer_create_flags(0);// optional
  uint64_t size_= 0;
  spk::buffer_usage_flags usage_= spk::buffer_usage_flags(0);
  spk::sharing_mode sharing_mode_= spk::sharing_mode(0);
  uint32_t queue_family_index_count_= 0;// optional
  uint32_t const * p_queue_family_indices_= 0;
};
static_assert(sizeof(buffer_create_info) == sizeof(buffer_create_info::underlying_type));

class buffer_memory_barrier {
 public:
  using underlying_type = VkBufferMemoryBarrier;

  // mutators
  void set_src_access_mask(spk::access_flags value) { src_access_mask_ = value; }
  void set_dst_access_mask(spk::access_flags value) { dst_access_mask_ = value; }
  void set_src_queue_family_index(uint32_t value) { src_queue_family_index_ = value; }
  void set_dst_queue_family_index(uint32_t value) { dst_queue_family_index_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }
  void set_size(uint64_t value) { size_ = value; }

  // accessors
  spk::access_flags src_access_mask() const { return src_access_mask_; }
  spk::access_flags dst_access_mask() const { return dst_access_mask_; }
  uint32_t src_queue_family_index() const { return src_queue_family_index_; }
  uint32_t dst_queue_family_index() const { return dst_queue_family_index_; }
  spk::buffer_ref buffer() const { return buffer_; }
  uint64_t offset() const { return offset_; }
  uint64_t size() const { return size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER;
  void* p_next_ = nullptr;

  spk::access_flags src_access_mask_= spk::access_flags(0);// optional
  spk::access_flags dst_access_mask_= spk::access_flags(0);// optional
  uint32_t src_queue_family_index_= 0;
  uint32_t dst_queue_family_index_= 0;
  spk::buffer_ref buffer_= 0;
  uint64_t offset_= 0;
  uint64_t size_= 0;
};
static_assert(sizeof(buffer_memory_barrier) == sizeof(buffer_memory_barrier::underlying_type));

class buffer_memory_requirements_info_2 {
 public:
  using underlying_type = VkBufferMemoryRequirementsInfo2;

  // mutators
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }

  // accessors
  spk::buffer_ref buffer() const { return buffer_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2;
  void* p_next_ = nullptr;

  spk::buffer_ref buffer_= 0;
};
static_assert(sizeof(buffer_memory_requirements_info_2) == sizeof(buffer_memory_requirements_info_2::underlying_type));
using buffer_memory_requirements_info_2khr = buffer_memory_requirements_info_2;


class buffer_view_create_info {
 public:
  using underlying_type = VkBufferViewCreateInfo;

  // mutators
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }
  void set_range(uint64_t value) { range_ = value; }

  // accessors
  spk::buffer_ref buffer() const { return buffer_; }
  spk::format format() const { return format_; }
  uint64_t offset() const { return offset_; }
  uint64_t range() const { return range_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::buffer_ref buffer_= 0;
  spk::format format_= spk::format(0);
  uint64_t offset_= 0;
  uint64_t range_= 0;
};
static_assert(sizeof(buffer_view_create_info) == sizeof(buffer_view_create_info::underlying_type));

class checkpoint_data_nv {
 public:
  using underlying_type = VkCheckpointDataNV;

  // mutators
  void set_stage(spk::pipeline_stage_flags value) { stage_ = value; }
  void set_p_checkpoint_marker(void * value) { p_checkpoint_marker_ = value; }

  // accessors
  spk::pipeline_stage_flags stage() const { return stage_; }
  void * p_checkpoint_marker() const { return p_checkpoint_marker_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV;
  void* p_next_ = nullptr;

  spk::pipeline_stage_flags stage_= spk::pipeline_stage_flags(0);
  void * p_checkpoint_marker_= 0;
};
static_assert(sizeof(checkpoint_data_nv) == sizeof(checkpoint_data_nv::underlying_type));

union clear_color_value {
 public:
  using underlying_type = VkClearColorValue;

  clear_color_value() { std::memset(this, 0, sizeof(clear_color_value)); }

  // mutators
  void set_float_32(const std::array<float, 4> & value) { float_32_ = value; }
  void set_int_32(const std::array<int32_t, 4> & value) { int_32_ = value; }
  void set_uint_32(const std::array<uint32_t, 4> & value) { uint_32_ = value; }

  // accessors
  const std::array<float, 4> & float_32() const { return float_32_; }
  const std::array<int32_t, 4> & int_32() const { return int_32_; }
  const std::array<uint32_t, 4> & uint_32() const { return uint_32_; }

 private:
  std::array<float, 4> float_32_;
  std::array<int32_t, 4> int_32_;
  std::array<uint32_t, 4> uint_32_;
};
static_assert(sizeof(clear_color_value) == sizeof(clear_color_value::underlying_type));

class clear_depth_stencil_value {
 public:
  using underlying_type = VkClearDepthStencilValue;

  // mutators
  void set_depth(float value) { depth_ = value; }
  void set_stencil(uint32_t value) { stencil_ = value; }

  // accessors
  float depth() const { return depth_; }
  uint32_t stencil() const { return stencil_; }

 private:
  float depth_= 0;
  uint32_t stencil_= 0;
};
static_assert(sizeof(clear_depth_stencil_value) == sizeof(clear_depth_stencil_value::underlying_type));

class cmd_process_commands_info_nvx {
 public:
  using underlying_type = VkCmdProcessCommandsInfoNVX;

  // mutators
  void set_indirect_commands_tokens(spk::array_view<spk::indirect_commands_token_nvx const> value) { p_indirect_commands_tokens_ = value.get(); indirect_commands_token_count_ = value.size(); }
  void set_object_table(spk::object_table_nvx_ref value) { object_table_ = value; }
  void set_indirect_commands_layout(spk::indirect_commands_layout_nvx_ref value) { indirect_commands_layout_ = value; }
  void set_max_sequences_count(uint32_t value) { max_sequences_count_ = value; }
  void set_target_command_buffer(spk::command_buffer_ref value) { target_command_buffer_ = value; }
  void set_sequences_count_buffer(spk::buffer_ref value) { sequences_count_buffer_ = value; }
  void set_sequences_count_offset(uint64_t value) { sequences_count_offset_ = value; }
  void set_sequences_index_buffer(spk::buffer_ref value) { sequences_index_buffer_ = value; }
  void set_sequences_index_offset(uint64_t value) { sequences_index_offset_ = value; }

  // accessors
  spk::array_view<spk::indirect_commands_token_nvx const> indirect_commands_tokens() const { return {p_indirect_commands_tokens_, indirect_commands_token_count_};}
  spk::object_table_nvx_ref object_table() const { return object_table_; }
  spk::indirect_commands_layout_nvx_ref indirect_commands_layout() const { return indirect_commands_layout_; }
  uint32_t max_sequences_count() const { return max_sequences_count_; }
  spk::command_buffer_ref target_command_buffer() const { return target_command_buffer_; }
  spk::buffer_ref sequences_count_buffer() const { return sequences_count_buffer_; }
  uint64_t sequences_count_offset() const { return sequences_count_offset_; }
  spk::buffer_ref sequences_index_buffer() const { return sequences_index_buffer_; }
  uint64_t sequences_index_offset() const { return sequences_index_offset_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_CMD_PROCESS_COMMANDS_INFO_NVX;
  void* p_next_ = nullptr;

  spk::object_table_nvx_ref object_table_= 0;
  spk::indirect_commands_layout_nvx_ref indirect_commands_layout_= 0;
  uint32_t indirect_commands_token_count_= 0;
  spk::indirect_commands_token_nvx const * p_indirect_commands_tokens_= 0;
  uint32_t max_sequences_count_= 0;
  spk::command_buffer_ref target_command_buffer_= 0;// optional
  spk::buffer_ref sequences_count_buffer_= 0;// optional
  uint64_t sequences_count_offset_= 0;// optional
  spk::buffer_ref sequences_index_buffer_= 0;// optional
  uint64_t sequences_index_offset_= 0;// optional
};
static_assert(sizeof(cmd_process_commands_info_nvx) == sizeof(cmd_process_commands_info_nvx::underlying_type));

class cmd_reserve_space_for_commands_info_nvx {
 public:
  using underlying_type = VkCmdReserveSpaceForCommandsInfoNVX;

  // mutators
  void set_object_table(spk::object_table_nvx_ref value) { object_table_ = value; }
  void set_indirect_commands_layout(spk::indirect_commands_layout_nvx_ref value) { indirect_commands_layout_ = value; }
  void set_max_sequences_count(uint32_t value) { max_sequences_count_ = value; }

  // accessors
  spk::object_table_nvx_ref object_table() const { return object_table_; }
  spk::indirect_commands_layout_nvx_ref indirect_commands_layout() const { return indirect_commands_layout_; }
  uint32_t max_sequences_count() const { return max_sequences_count_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_CMD_RESERVE_SPACE_FOR_COMMANDS_INFO_NVX;
  void* p_next_ = nullptr;

  spk::object_table_nvx_ref object_table_= 0;
  spk::indirect_commands_layout_nvx_ref indirect_commands_layout_= 0;
  uint32_t max_sequences_count_= 0;
};
static_assert(sizeof(cmd_reserve_space_for_commands_info_nvx) == sizeof(cmd_reserve_space_for_commands_info_nvx::underlying_type));

class command_buffer_allocate_info {
 public:
  using underlying_type = VkCommandBufferAllocateInfo;

  // mutators
  void set_command_pool(spk::command_pool_ref value) { command_pool_ = value; }
  void set_level(spk::command_buffer_level value) { level_ = value; }
  void set_command_buffer_count(uint32_t value) { command_buffer_count_ = value; }

  // accessors
  spk::command_pool_ref command_pool() const { return command_pool_; }
  spk::command_buffer_level level() const { return level_; }
  uint32_t command_buffer_count() const { return command_buffer_count_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
  void* p_next_ = nullptr;

  spk::command_pool_ref command_pool_= 0;
  spk::command_buffer_level level_= spk::command_buffer_level(0);
  uint32_t command_buffer_count_= 0;
};
static_assert(sizeof(command_buffer_allocate_info) == sizeof(command_buffer_allocate_info::underlying_type));

class command_buffer_begin_info {
 public:
  using underlying_type = VkCommandBufferBeginInfo;

  // mutators
  void set_flags(spk::command_buffer_usage_flags value) { flags_ = value; }
  void set_p_inheritance_info(spk::command_buffer_inheritance_info const * value) { p_inheritance_info_ = value; }

  // accessors
  spk::command_buffer_usage_flags flags() const { return flags_; }
  spk::command_buffer_inheritance_info const * p_inheritance_info() const { return p_inheritance_info_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO;
  void* p_next_ = nullptr;

  spk::command_buffer_usage_flags flags_= spk::command_buffer_usage_flags(0);// optional
  spk::command_buffer_inheritance_info const * p_inheritance_info_= 0;// optional
};
static_assert(sizeof(command_buffer_begin_info) == sizeof(command_buffer_begin_info::underlying_type));

class command_buffer_inheritance_conditional_rendering_info_ext {
 public:
  using underlying_type = VkCommandBufferInheritanceConditionalRenderingInfoEXT;

  // mutators
  void set_conditional_rendering_enable(bool val) { conditional_rendering_enable_ = val; }

  // accessors
  bool conditional_rendering_enable() const { return conditional_rendering_enable_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t conditional_rendering_enable_= 0;
};
static_assert(sizeof(command_buffer_inheritance_conditional_rendering_info_ext) == sizeof(command_buffer_inheritance_conditional_rendering_info_ext::underlying_type));

class command_buffer_inheritance_info {
 public:
  using underlying_type = VkCommandBufferInheritanceInfo;

  // mutators
  void set_occlusion_query_enable(bool val) { occlusion_query_enable_ = val; }
  void set_render_pass(spk::render_pass_ref value) { render_pass_ = value; }
  void set_subpass(uint32_t value) { subpass_ = value; }
  void set_framebuffer(spk::framebuffer_ref value) { framebuffer_ = value; }
  void set_query_flags(spk::query_control_flags value) { query_flags_ = value; }
  void set_pipeline_statistics(spk::query_pipeline_statistic_flags value) { pipeline_statistics_ = value; }

  // accessors
  bool occlusion_query_enable() const { return occlusion_query_enable_; }
  spk::render_pass_ref render_pass() const { return render_pass_; }
  uint32_t subpass() const { return subpass_; }
  spk::framebuffer_ref framebuffer() const { return framebuffer_; }
  spk::query_control_flags query_flags() const { return query_flags_; }
  spk::query_pipeline_statistic_flags pipeline_statistics() const { return pipeline_statistics_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO;
  void* p_next_ = nullptr;

  spk::render_pass_ref render_pass_= 0;// optional
  uint32_t subpass_= 0;
  spk::framebuffer_ref framebuffer_= 0;// optional
  spk::bool32_t occlusion_query_enable_= 0;
  spk::query_control_flags query_flags_= spk::query_control_flags(0);// optional
  spk::query_pipeline_statistic_flags pipeline_statistics_= spk::query_pipeline_statistic_flags(0);// optional
};
static_assert(sizeof(command_buffer_inheritance_info) == sizeof(command_buffer_inheritance_info::underlying_type));

class command_pool_create_info {
 public:
  using underlying_type = VkCommandPoolCreateInfo;

  // mutators
  void set_flags(spk::command_pool_create_flags value) { flags_ = value; }
  void set_queue_family_index(uint32_t value) { queue_family_index_ = value; }

  // accessors
  spk::command_pool_create_flags flags() const { return flags_; }
  uint32_t queue_family_index() const { return queue_family_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::command_pool_create_flags flags_= spk::command_pool_create_flags(0);// optional
  uint32_t queue_family_index_= 0;
};
static_assert(sizeof(command_pool_create_info) == sizeof(command_pool_create_info::underlying_type));

class component_mapping {
 public:
  using underlying_type = VkComponentMapping;

  // mutators
  void set_r(spk::component_swizzle value) { r_ = value; }
  void set_g(spk::component_swizzle value) { g_ = value; }
  void set_b(spk::component_swizzle value) { b_ = value; }
  void set_a(spk::component_swizzle value) { a_ = value; }

  // accessors
  spk::component_swizzle r() const { return r_; }
  spk::component_swizzle g() const { return g_; }
  spk::component_swizzle b() const { return b_; }
  spk::component_swizzle a() const { return a_; }

 private:
  spk::component_swizzle r_= spk::component_swizzle(0);
  spk::component_swizzle g_= spk::component_swizzle(0);
  spk::component_swizzle b_= spk::component_swizzle(0);
  spk::component_swizzle a_= spk::component_swizzle(0);
};
static_assert(sizeof(component_mapping) == sizeof(component_mapping::underlying_type));

class conditional_rendering_begin_info_ext {
 public:
  using underlying_type = VkConditionalRenderingBeginInfoEXT;

  // mutators
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }
  void set_flags(spk::conditional_rendering_flags_ext value) { flags_ = value; }

  // accessors
  spk::buffer_ref buffer() const { return buffer_; }
  uint64_t offset() const { return offset_; }
  spk::conditional_rendering_flags_ext flags() const { return flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT;
  void* p_next_ = nullptr;

  spk::buffer_ref buffer_= 0;
  uint64_t offset_= 0;
  spk::conditional_rendering_flags_ext flags_= spk::conditional_rendering_flags_ext(0);// optional
};
static_assert(sizeof(conditional_rendering_begin_info_ext) == sizeof(conditional_rendering_begin_info_ext::underlying_type));

class copy_descriptor_set {
 public:
  using underlying_type = VkCopyDescriptorSet;

  // mutators
  void set_src_set(spk::descriptor_set_ref value) { src_set_ = value; }
  void set_src_binding(uint32_t value) { src_binding_ = value; }
  void set_src_array_element(uint32_t value) { src_array_element_ = value; }
  void set_dst_set(spk::descriptor_set_ref value) { dst_set_ = value; }
  void set_dst_binding(uint32_t value) { dst_binding_ = value; }
  void set_dst_array_element(uint32_t value) { dst_array_element_ = value; }
  void set_descriptor_count(uint32_t value) { descriptor_count_ = value; }

  // accessors
  spk::descriptor_set_ref src_set() const { return src_set_; }
  uint32_t src_binding() const { return src_binding_; }
  uint32_t src_array_element() const { return src_array_element_; }
  spk::descriptor_set_ref dst_set() const { return dst_set_; }
  uint32_t dst_binding() const { return dst_binding_; }
  uint32_t dst_array_element() const { return dst_array_element_; }
  uint32_t descriptor_count() const { return descriptor_count_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET;
  void* p_next_ = nullptr;

  spk::descriptor_set_ref src_set_= 0;
  uint32_t src_binding_= 0;
  uint32_t src_array_element_= 0;
  spk::descriptor_set_ref dst_set_= 0;
  uint32_t dst_binding_= 0;
  uint32_t dst_array_element_= 0;
  uint32_t descriptor_count_= 0;
};
static_assert(sizeof(copy_descriptor_set) == sizeof(copy_descriptor_set::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class d3d12fence_submit_info_khr {
 public:
  using underlying_type = VkD3D12FenceSubmitInfoKHR;

  // mutators
  void set_wait_semaphore_values(spk::array_view<uint64_t const> value) { p_wait_semaphore_values_ = value.get(); wait_semaphore_values_count_ = value.size(); }
  void set_signal_semaphore_values(spk::array_view<uint64_t const> value) { p_signal_semaphore_values_ = value.get(); signal_semaphore_values_count_ = value.size(); }

  // accessors
  spk::array_view<uint64_t const> wait_semaphore_values() const { return {p_wait_semaphore_values_, wait_semaphore_values_count_};}
  spk::array_view<uint64_t const> signal_semaphore_values() const { return {p_signal_semaphore_values_, signal_semaphore_values_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_D3D12_FENCE_SUBMIT_INFO_KHR;
  void* p_next_ = nullptr;

  uint32_t wait_semaphore_values_count_= 0;// optional
  uint64_t const * p_wait_semaphore_values_= 0;// optional
  uint32_t signal_semaphore_values_count_= 0;// optional
  uint64_t const * p_signal_semaphore_values_= 0;// optional
};
static_assert(sizeof(d3d12fence_submit_info_khr) == sizeof(d3d12fence_submit_info_khr::underlying_type));
#endif

class debug_marker_marker_info_ext {
 public:
  using underlying_type = VkDebugMarkerMarkerInfoEXT;

  // mutators
  void set_marker_name(spk::string_ptr str) { p_marker_name_ = str.get(); }
  void set_color(const std::array<float, 4> & value) { color_ = value; }

  // accessors
  std::string_view marker_name() const { return p_marker_name_; }
  const std::array<float, 4> & color() const { return color_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT;
  void* p_next_ = nullptr;

  char const * p_marker_name_= 0;
  std::array<float, 4> color_= {};// optional
};
static_assert(sizeof(debug_marker_marker_info_ext) == sizeof(debug_marker_marker_info_ext::underlying_type));

class debug_marker_object_name_info_ext {
 public:
  using underlying_type = VkDebugMarkerObjectNameInfoEXT;

  // mutators
  void set_object_name(spk::string_ptr str) { p_object_name_ = str.get(); }
  void set_object_type(spk::debug_report_object_type_ext value) { object_type_ = value; }
  void set_object(uint64_t value) { object_ = value; }

  // accessors
  std::string_view object_name() const { return p_object_name_; }
  spk::debug_report_object_type_ext object_type() const { return object_type_; }
  uint64_t object() const { return object_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT;
  void* p_next_ = nullptr;

  spk::debug_report_object_type_ext object_type_= spk::debug_report_object_type_ext(0);
  uint64_t object_= 0;
  char const * p_object_name_= 0;
};
static_assert(sizeof(debug_marker_object_name_info_ext) == sizeof(debug_marker_object_name_info_ext::underlying_type));

class debug_marker_object_tag_info_ext {
 public:
  using underlying_type = VkDebugMarkerObjectTagInfoEXT;

  // mutators
  void set_tag(spk::array_view<void const> value) { p_tag_ = value.get(); tag_size_ = value.size(); }
  void set_object_type(spk::debug_report_object_type_ext value) { object_type_ = value; }
  void set_object(uint64_t value) { object_ = value; }
  void set_tag_name(uint64_t value) { tag_name_ = value; }

  // accessors
  spk::array_view<void const> tag() const { return {p_tag_, tag_size_};}
  spk::debug_report_object_type_ext object_type() const { return object_type_; }
  uint64_t object() const { return object_; }
  uint64_t tag_name() const { return tag_name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT;
  void* p_next_ = nullptr;

  spk::debug_report_object_type_ext object_type_= spk::debug_report_object_type_ext(0);
  uint64_t object_= 0;
  uint64_t tag_name_= 0;
  size_t tag_size_= 0;
  void const * p_tag_= 0;
};
static_assert(sizeof(debug_marker_object_tag_info_ext) == sizeof(debug_marker_object_tag_info_ext::underlying_type));

class debug_report_callback_create_info_ext {
 public:
  using underlying_type = VkDebugReportCallbackCreateInfoEXT;

  // mutators
  void set_flags(spk::debug_report_flags_ext value) { flags_ = value; }
  void set_pfn_callback(PFN_vkDebugReportCallbackEXT value) { pfn_callback_ = value; }
  void set_p_user_data(void * value) { p_user_data_ = value; }

  // accessors
  spk::debug_report_flags_ext flags() const { return flags_; }
  PFN_vkDebugReportCallbackEXT pfn_callback() const { return pfn_callback_; }
  void * p_user_data() const { return p_user_data_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::debug_report_flags_ext flags_= spk::debug_report_flags_ext(0);// optional
  PFN_vkDebugReportCallbackEXT pfn_callback_= 0;
  void * p_user_data_= 0;// optional
};
static_assert(sizeof(debug_report_callback_create_info_ext) == sizeof(debug_report_callback_create_info_ext::underlying_type));

class debug_utils_label_ext {
 public:
  using underlying_type = VkDebugUtilsLabelEXT;

  // mutators
  void set_label_name(spk::string_ptr str) { p_label_name_ = str.get(); }
  void set_color(const std::array<float, 4> & value) { color_ = value; }

  // accessors
  std::string_view label_name() const { return p_label_name_; }
  const std::array<float, 4> & color() const { return color_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT;
  void* p_next_ = nullptr;

  char const * p_label_name_= 0;
  std::array<float, 4> color_= {};// optional
};
static_assert(sizeof(debug_utils_label_ext) == sizeof(debug_utils_label_ext::underlying_type));

class debug_utils_messenger_callback_data_ext {
 public:
  using underlying_type = VkDebugUtilsMessengerCallbackDataEXT;

  // mutators
  void set_message_id_name(spk::string_ptr str) { p_message_id_name_ = str.get(); }
  void set_message(spk::string_ptr str) { p_message_ = str.get(); }
  void set_queue_labels(spk::array_view<spk::debug_utils_label_ext> value) { p_queue_labels_ = value.get(); queue_label_count_ = value.size(); }
  void set_cmd_buf_labels(spk::array_view<spk::debug_utils_label_ext> value) { p_cmd_buf_labels_ = value.get(); cmd_buf_label_count_ = value.size(); }
  void set_objects(spk::array_view<spk::debug_utils_object_name_info_ext> value) { p_objects_ = value.get(); object_count_ = value.size(); }
  void set_message_id_number(int32_t value) { message_id_number_ = value; }

  // accessors
  std::string_view message_id_name() const { return p_message_id_name_; }
  std::string_view message() const { return p_message_; }
  spk::array_view<spk::debug_utils_label_ext> queue_labels() const { return {p_queue_labels_, queue_label_count_};}
  spk::array_view<spk::debug_utils_label_ext> cmd_buf_labels() const { return {p_cmd_buf_labels_, cmd_buf_label_count_};}
  spk::array_view<spk::debug_utils_object_name_info_ext> objects() const { return {p_objects_, object_count_};}
  int32_t message_id_number() const { return message_id_number_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  char const * p_message_id_name_= 0;// optional
  int32_t message_id_number_= 0;// optional
  char const * p_message_= 0;
  uint32_t queue_label_count_= 0;// optional
  spk::debug_utils_label_ext * p_queue_labels_= 0;// optional
  uint32_t cmd_buf_label_count_= 0;// optional
  spk::debug_utils_label_ext * p_cmd_buf_labels_= 0;// optional
  uint32_t object_count_= 0;
  spk::debug_utils_object_name_info_ext * p_objects_= 0;
};
static_assert(sizeof(debug_utils_messenger_callback_data_ext) == sizeof(debug_utils_messenger_callback_data_ext::underlying_type));

class debug_utils_messenger_create_info_ext {
 public:
  using underlying_type = VkDebugUtilsMessengerCreateInfoEXT;

  // mutators
  void set_message_severity(spk::debug_utils_message_severity_flags_ext value) { message_severity_ = value; }
  void set_message_type(spk::debug_utils_message_type_flags_ext value) { message_type_ = value; }
  void set_pfn_user_callback(PFN_vkDebugUtilsMessengerCallbackEXT value) { pfn_user_callback_ = value; }
  void set_p_user_data(void * value) { p_user_data_ = value; }

  // accessors
  spk::debug_utils_message_severity_flags_ext message_severity() const { return message_severity_; }
  spk::debug_utils_message_type_flags_ext message_type() const { return message_type_; }
  PFN_vkDebugUtilsMessengerCallbackEXT pfn_user_callback() const { return pfn_user_callback_; }
  void * p_user_data() const { return p_user_data_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::debug_utils_message_severity_flags_ext message_severity_= spk::debug_utils_message_severity_flags_ext(0);
  spk::debug_utils_message_type_flags_ext message_type_= spk::debug_utils_message_type_flags_ext(0);
  PFN_vkDebugUtilsMessengerCallbackEXT pfn_user_callback_= 0;
  void * p_user_data_= 0;// optional
};
static_assert(sizeof(debug_utils_messenger_create_info_ext) == sizeof(debug_utils_messenger_create_info_ext::underlying_type));

class debug_utils_object_name_info_ext {
 public:
  using underlying_type = VkDebugUtilsObjectNameInfoEXT;

  // mutators
  void set_object_name(spk::string_ptr str) { p_object_name_ = str.get(); }
  void set_object_type(spk::object_type value) { object_type_ = value; }
  void set_object_handle(uint64_t value) { object_handle_ = value; }

  // accessors
  std::string_view object_name() const { return p_object_name_; }
  spk::object_type object_type() const { return object_type_; }
  uint64_t object_handle() const { return object_handle_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT;
  void* p_next_ = nullptr;

  spk::object_type object_type_= spk::object_type(0);
  uint64_t object_handle_= 0;
  char const * p_object_name_= 0;// optional
};
static_assert(sizeof(debug_utils_object_name_info_ext) == sizeof(debug_utils_object_name_info_ext::underlying_type));

class debug_utils_object_tag_info_ext {
 public:
  using underlying_type = VkDebugUtilsObjectTagInfoEXT;

  // mutators
  void set_tag(spk::array_view<void const> value) { p_tag_ = value.get(); tag_size_ = value.size(); }
  void set_object_type(spk::object_type value) { object_type_ = value; }
  void set_object_handle(uint64_t value) { object_handle_ = value; }
  void set_tag_name(uint64_t value) { tag_name_ = value; }

  // accessors
  spk::array_view<void const> tag() const { return {p_tag_, tag_size_};}
  spk::object_type object_type() const { return object_type_; }
  uint64_t object_handle() const { return object_handle_; }
  uint64_t tag_name() const { return tag_name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT;
  void* p_next_ = nullptr;

  spk::object_type object_type_= spk::object_type(0);
  uint64_t object_handle_= 0;
  uint64_t tag_name_= 0;
  size_t tag_size_= 0;
  void const * p_tag_= 0;
};
static_assert(sizeof(debug_utils_object_tag_info_ext) == sizeof(debug_utils_object_tag_info_ext::underlying_type));

class dedicated_allocation_buffer_create_info_nv {
 public:
  using underlying_type = VkDedicatedAllocationBufferCreateInfoNV;

  // mutators
  void set_dedicated_allocation(bool val) { dedicated_allocation_ = val; }

  // accessors
  bool dedicated_allocation() const { return dedicated_allocation_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::bool32_t dedicated_allocation_= 0;
};
static_assert(sizeof(dedicated_allocation_buffer_create_info_nv) == sizeof(dedicated_allocation_buffer_create_info_nv::underlying_type));

class dedicated_allocation_image_create_info_nv {
 public:
  using underlying_type = VkDedicatedAllocationImageCreateInfoNV;

  // mutators
  void set_dedicated_allocation(bool val) { dedicated_allocation_ = val; }

  // accessors
  bool dedicated_allocation() const { return dedicated_allocation_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::bool32_t dedicated_allocation_= 0;
};
static_assert(sizeof(dedicated_allocation_image_create_info_nv) == sizeof(dedicated_allocation_image_create_info_nv::underlying_type));

class dedicated_allocation_memory_allocate_info_nv {
 public:
  using underlying_type = VkDedicatedAllocationMemoryAllocateInfoNV;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }
  spk::buffer_ref buffer() const { return buffer_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::image_ref image_= 0;// optional
  spk::buffer_ref buffer_= 0;// optional
};
static_assert(sizeof(dedicated_allocation_memory_allocate_info_nv) == sizeof(dedicated_allocation_memory_allocate_info_nv::underlying_type));

class descriptor_buffer_info {
 public:
  using underlying_type = VkDescriptorBufferInfo;

  // mutators
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }
  void set_range(uint64_t value) { range_ = value; }

  // accessors
  spk::buffer_ref buffer() const { return buffer_; }
  uint64_t offset() const { return offset_; }
  uint64_t range() const { return range_; }

 private:
  spk::buffer_ref buffer_= 0;
  uint64_t offset_= 0;
  uint64_t range_= 0;
};
static_assert(sizeof(descriptor_buffer_info) == sizeof(descriptor_buffer_info::underlying_type));

class descriptor_image_info {
 public:
  using underlying_type = VkDescriptorImageInfo;

  // mutators
  void set_sampler(spk::sampler_ref value) { sampler_ = value; }
  void set_image_view(spk::image_view_ref value) { image_view_ = value; }
  void set_image_layout(spk::image_layout value) { image_layout_ = value; }

  // accessors
  spk::sampler_ref sampler() const { return sampler_; }
  spk::image_view_ref image_view() const { return image_view_; }
  spk::image_layout image_layout() const { return image_layout_; }

 private:
  spk::sampler_ref sampler_= 0;
  spk::image_view_ref image_view_= 0;
  spk::image_layout image_layout_= spk::image_layout(0);
};
static_assert(sizeof(descriptor_image_info) == sizeof(descriptor_image_info::underlying_type));

class descriptor_pool_create_info {
 public:
  using underlying_type = VkDescriptorPoolCreateInfo;

  // mutators
  void set_pool_sizes(spk::array_view<spk::descriptor_pool_size const> value) { p_pool_sizes_ = value.get(); pool_size_count_ = value.size(); }
  void set_flags(spk::descriptor_pool_create_flags value) { flags_ = value; }
  void set_max_sets(uint32_t value) { max_sets_ = value; }

  // accessors
  spk::array_view<spk::descriptor_pool_size const> pool_sizes() const { return {p_pool_sizes_, pool_size_count_};}
  spk::descriptor_pool_create_flags flags() const { return flags_; }
  uint32_t max_sets() const { return max_sets_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::descriptor_pool_create_flags flags_= spk::descriptor_pool_create_flags(0);// optional
  uint32_t max_sets_= 0;
  uint32_t pool_size_count_= 0;
  spk::descriptor_pool_size const * p_pool_sizes_= 0;
};
static_assert(sizeof(descriptor_pool_create_info) == sizeof(descriptor_pool_create_info::underlying_type));

class descriptor_pool_size {
 public:
  using underlying_type = VkDescriptorPoolSize;

  // mutators
  void set_type(spk::descriptor_type value) { type_ = value; }
  void set_descriptor_count(uint32_t value) { descriptor_count_ = value; }

  // accessors
  spk::descriptor_type type() const { return type_; }
  uint32_t descriptor_count() const { return descriptor_count_; }

 private:
  spk::descriptor_type type_= spk::descriptor_type(0);
  uint32_t descriptor_count_= 0;
};
static_assert(sizeof(descriptor_pool_size) == sizeof(descriptor_pool_size::underlying_type));

class descriptor_set_allocate_info {
 public:
  using underlying_type = VkDescriptorSetAllocateInfo;

  // mutators
  void set_set_layouts(spk::array_view<spk::descriptor_set_layout_ref const> value) { p_set_layouts_ = value.get(); descriptor_set_count_ = value.size(); }
  void set_descriptor_pool(spk::descriptor_pool_ref value) { descriptor_pool_ = value; }

  // accessors
  spk::array_view<spk::descriptor_set_layout_ref const> set_layouts() const { return {p_set_layouts_, descriptor_set_count_};}
  spk::descriptor_pool_ref descriptor_pool() const { return descriptor_pool_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO;
  void* p_next_ = nullptr;

  spk::descriptor_pool_ref descriptor_pool_= 0;
  uint32_t descriptor_set_count_= 0;
  spk::descriptor_set_layout_ref const * p_set_layouts_= 0;
};
static_assert(sizeof(descriptor_set_allocate_info) == sizeof(descriptor_set_allocate_info::underlying_type));

class descriptor_set_layout_binding {
 public:
  using underlying_type = VkDescriptorSetLayoutBinding;

  // mutators
  void set_immutable_samplers(spk::array_view<spk::sampler_ref const> value) { p_immutable_samplers_ = value.get(); descriptor_count_ = value.size(); }
  void set_binding(uint32_t value) { binding_ = value; }
  void set_descriptor_type(spk::descriptor_type value) { descriptor_type_ = value; }
  void set_stage_flags(spk::shader_stage_flags value) { stage_flags_ = value; }

  // accessors
  spk::array_view<spk::sampler_ref const> immutable_samplers() const { return {p_immutable_samplers_, descriptor_count_};}
  uint32_t binding() const { return binding_; }
  spk::descriptor_type descriptor_type() const { return descriptor_type_; }
  spk::shader_stage_flags stage_flags() const { return stage_flags_; }

 private:
  uint32_t binding_= 0;
  spk::descriptor_type descriptor_type_= spk::descriptor_type(0);
  uint32_t descriptor_count_= 0;// optional
  spk::shader_stage_flags stage_flags_= spk::shader_stage_flags(0);
  spk::sampler_ref const * p_immutable_samplers_= 0;// optional
};
static_assert(sizeof(descriptor_set_layout_binding) == sizeof(descriptor_set_layout_binding::underlying_type));

class descriptor_set_layout_binding_flags_create_info_ext {
 public:
  using underlying_type = VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;

  // mutators
  void set_binding_flags(spk::array_view<spk::descriptor_binding_flags_ext const> value) { p_binding_flags_ = value.get(); binding_count_ = value.size(); }

  // accessors
  spk::array_view<spk::descriptor_binding_flags_ext const> binding_flags() const { return {p_binding_flags_, binding_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  uint32_t binding_count_= 0;// optional
  spk::descriptor_binding_flags_ext const * p_binding_flags_= 0;
};
static_assert(sizeof(descriptor_set_layout_binding_flags_create_info_ext) == sizeof(descriptor_set_layout_binding_flags_create_info_ext::underlying_type));

class descriptor_set_layout_create_info {
 public:
  using underlying_type = VkDescriptorSetLayoutCreateInfo;

  // mutators
  void set_bindings(spk::array_view<spk::descriptor_set_layout_binding const> value) { p_bindings_ = value.get(); binding_count_ = value.size(); }
  void set_flags(spk::descriptor_set_layout_create_flags value) { flags_ = value; }

  // accessors
  spk::array_view<spk::descriptor_set_layout_binding const> bindings() const { return {p_bindings_, binding_count_};}
  spk::descriptor_set_layout_create_flags flags() const { return flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::descriptor_set_layout_create_flags flags_= spk::descriptor_set_layout_create_flags(0);// optional
  uint32_t binding_count_= 0;// optional
  spk::descriptor_set_layout_binding const * p_bindings_= 0;
};
static_assert(sizeof(descriptor_set_layout_create_info) == sizeof(descriptor_set_layout_create_info::underlying_type));

class descriptor_set_layout_support {
 public:
  using underlying_type = VkDescriptorSetLayoutSupport;

  // mutators
  void set_supported(bool val) { supported_ = val; }

  // accessors
  bool supported() const { return supported_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT;
  void* p_next_ = nullptr;

  spk::bool32_t supported_= 0;
};
static_assert(sizeof(descriptor_set_layout_support) == sizeof(descriptor_set_layout_support::underlying_type));
using descriptor_set_layout_support_khr = descriptor_set_layout_support;


class descriptor_set_variable_descriptor_count_allocate_info_ext {
 public:
  using underlying_type = VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;

  // mutators
  void set_descriptor_counts(spk::array_view<uint32_t const> value) { p_descriptor_counts_ = value.get(); descriptor_set_count_ = value.size(); }

  // accessors
  spk::array_view<uint32_t const> descriptor_counts() const { return {p_descriptor_counts_, descriptor_set_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO_EXT;
  void* p_next_ = nullptr;

  uint32_t descriptor_set_count_= 0;// optional
  uint32_t const * p_descriptor_counts_= 0;
};
static_assert(sizeof(descriptor_set_variable_descriptor_count_allocate_info_ext) == sizeof(descriptor_set_variable_descriptor_count_allocate_info_ext::underlying_type));

class descriptor_set_variable_descriptor_count_layout_support_ext {
 public:
  using underlying_type = VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;

  // mutators
  void set_max_variable_descriptor_count(uint32_t value) { max_variable_descriptor_count_ = value; }

  // accessors
  uint32_t max_variable_descriptor_count() const { return max_variable_descriptor_count_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT_EXT;
  void* p_next_ = nullptr;

  uint32_t max_variable_descriptor_count_= 0;
};
static_assert(sizeof(descriptor_set_variable_descriptor_count_layout_support_ext) == sizeof(descriptor_set_variable_descriptor_count_layout_support_ext::underlying_type));

class descriptor_update_template_create_info {
 public:
  using underlying_type = VkDescriptorUpdateTemplateCreateInfo;

  // mutators
  void set_descriptor_update_entries(spk::array_view<spk::descriptor_update_template_entry const> value) { p_descriptor_update_entries_ = value.get(); descriptor_update_entry_count_ = value.size(); }
  void set_template_type(spk::descriptor_update_template_type value) { template_type_ = value; }
  void set_descriptor_set_layout(spk::descriptor_set_layout_ref value) { descriptor_set_layout_ = value; }
  void set_pipeline_bind_point(spk::pipeline_bind_point value) { pipeline_bind_point_ = value; }
  void set_pipeline_layout(spk::pipeline_layout_ref value) { pipeline_layout_ = value; }
  void set_set(uint32_t value) { set_ = value; }

  // accessors
  spk::array_view<spk::descriptor_update_template_entry const> descriptor_update_entries() const { return {p_descriptor_update_entries_, descriptor_update_entry_count_};}
  spk::descriptor_update_template_type template_type() const { return template_type_; }
  spk::descriptor_set_layout_ref descriptor_set_layout() const { return descriptor_set_layout_; }
  spk::pipeline_bind_point pipeline_bind_point() const { return pipeline_bind_point_; }
  spk::pipeline_layout_ref pipeline_layout() const { return pipeline_layout_; }
  uint32_t set() const { return set_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t descriptor_update_entry_count_= 0;
  spk::descriptor_update_template_entry const * p_descriptor_update_entries_= 0;
  spk::descriptor_update_template_type template_type_= spk::descriptor_update_template_type(0);
  spk::descriptor_set_layout_ref descriptor_set_layout_= 0;// optional
  spk::pipeline_bind_point pipeline_bind_point_= spk::pipeline_bind_point(0);
  spk::pipeline_layout_ref pipeline_layout_= 0;
  uint32_t set_= 0;
};
static_assert(sizeof(descriptor_update_template_create_info) == sizeof(descriptor_update_template_create_info::underlying_type));
using descriptor_update_template_create_info_khr = descriptor_update_template_create_info;


class descriptor_update_template_entry {
 public:
  using underlying_type = VkDescriptorUpdateTemplateEntry;

  // mutators
  void set_dst_binding(uint32_t value) { dst_binding_ = value; }
  void set_dst_array_element(uint32_t value) { dst_array_element_ = value; }
  void set_descriptor_count(uint32_t value) { descriptor_count_ = value; }
  void set_descriptor_type(spk::descriptor_type value) { descriptor_type_ = value; }
  void set_offset(size_t value) { offset_ = value; }
  void set_stride(size_t value) { stride_ = value; }

  // accessors
  uint32_t dst_binding() const { return dst_binding_; }
  uint32_t dst_array_element() const { return dst_array_element_; }
  uint32_t descriptor_count() const { return descriptor_count_; }
  spk::descriptor_type descriptor_type() const { return descriptor_type_; }
  size_t offset() const { return offset_; }
  size_t stride() const { return stride_; }

 private:
  uint32_t dst_binding_= 0;
  uint32_t dst_array_element_= 0;
  uint32_t descriptor_count_= 0;
  spk::descriptor_type descriptor_type_= spk::descriptor_type(0);
  size_t offset_= 0;
  size_t stride_= 0;
};
static_assert(sizeof(descriptor_update_template_entry) == sizeof(descriptor_update_template_entry::underlying_type));
using descriptor_update_template_entry_khr = descriptor_update_template_entry;


class device_create_info {
 public:
  using underlying_type = VkDeviceCreateInfo;

  // mutators
  void set_queue_create_infos(spk::array_view<spk::device_queue_create_info const> value) { p_queue_create_infos_ = value.get(); queue_create_info_count_ = value.size(); }
  void set_pp_enabled_layer_names(spk::array_view<char const * const> value) { pp_enabled_layer_names_ = value.get(); enabled_layer_count_ = value.size(); }
  void set_pp_enabled_extension_names(spk::array_view<char const * const> value) { pp_enabled_extension_names_ = value.get(); enabled_extension_count_ = value.size(); }
  void set_p_enabled_features(spk::physical_device_features const * value) { p_enabled_features_ = value; }

  // accessors
  spk::array_view<spk::device_queue_create_info const> queue_create_infos() const { return {p_queue_create_infos_, queue_create_info_count_};}
  spk::array_view<char const * const> pp_enabled_layer_names() const { return {pp_enabled_layer_names_, enabled_layer_count_};}
  spk::array_view<char const * const> pp_enabled_extension_names() const { return {pp_enabled_extension_names_, enabled_extension_count_};}
  spk::physical_device_features const * p_enabled_features() const { return p_enabled_features_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t queue_create_info_count_= 0;
  spk::device_queue_create_info const * p_queue_create_infos_= 0;
  uint32_t enabled_layer_count_= 0;// optional
  char const * const * pp_enabled_layer_names_= 0;
  uint32_t enabled_extension_count_= 0;// optional
  char const * const * pp_enabled_extension_names_= 0;
  spk::physical_device_features const * p_enabled_features_= 0;// optional
};
static_assert(sizeof(device_create_info) == sizeof(device_create_info::underlying_type));

class device_event_info_ext {
 public:
  using underlying_type = VkDeviceEventInfoEXT;

  // mutators
  void set_device_event(spk::device_event_type_ext value) { device_event_ = value; }

  // accessors
  spk::device_event_type_ext device_event() const { return device_event_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
  void* p_next_ = nullptr;

  spk::device_event_type_ext device_event_= spk::device_event_type_ext(0);
};
static_assert(sizeof(device_event_info_ext) == sizeof(device_event_info_ext::underlying_type));

class device_generated_commands_features_nvx {
 public:
  using underlying_type = VkDeviceGeneratedCommandsFeaturesNVX;

  // mutators
  void set_compute_binding_point_support(bool val) { compute_binding_point_support_ = val; }

  // accessors
  bool compute_binding_point_support() const { return compute_binding_point_support_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_FEATURES_NVX;
  void* p_next_ = nullptr;

  spk::bool32_t compute_binding_point_support_= 0;
};
static_assert(sizeof(device_generated_commands_features_nvx) == sizeof(device_generated_commands_features_nvx::underlying_type));

class device_generated_commands_limits_nvx {
 public:
  using underlying_type = VkDeviceGeneratedCommandsLimitsNVX;

  // mutators
  void set_max_indirect_commands_layout_token_count(uint32_t value) { max_indirect_commands_layout_token_count_ = value; }
  void set_max_object_entry_counts(uint32_t value) { max_object_entry_counts_ = value; }
  void set_min_sequence_count_buffer_offset_alignment(uint32_t value) { min_sequence_count_buffer_offset_alignment_ = value; }
  void set_min_sequence_index_buffer_offset_alignment(uint32_t value) { min_sequence_index_buffer_offset_alignment_ = value; }
  void set_min_commands_token_buffer_offset_alignment(uint32_t value) { min_commands_token_buffer_offset_alignment_ = value; }

  // accessors
  uint32_t max_indirect_commands_layout_token_count() const { return max_indirect_commands_layout_token_count_; }
  uint32_t max_object_entry_counts() const { return max_object_entry_counts_; }
  uint32_t min_sequence_count_buffer_offset_alignment() const { return min_sequence_count_buffer_offset_alignment_; }
  uint32_t min_sequence_index_buffer_offset_alignment() const { return min_sequence_index_buffer_offset_alignment_; }
  uint32_t min_commands_token_buffer_offset_alignment() const { return min_commands_token_buffer_offset_alignment_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GENERATED_COMMANDS_LIMITS_NVX;
  void* p_next_ = nullptr;

  uint32_t max_indirect_commands_layout_token_count_= 0;
  uint32_t max_object_entry_counts_= 0;
  uint32_t min_sequence_count_buffer_offset_alignment_= 0;
  uint32_t min_sequence_index_buffer_offset_alignment_= 0;
  uint32_t min_commands_token_buffer_offset_alignment_= 0;
};
static_assert(sizeof(device_generated_commands_limits_nvx) == sizeof(device_generated_commands_limits_nvx::underlying_type));

class device_group_bind_sparse_info {
 public:
  using underlying_type = VkDeviceGroupBindSparseInfo;

  // mutators
  void set_resource_device_index(uint32_t value) { resource_device_index_ = value; }
  void set_memory_device_index(uint32_t value) { memory_device_index_ = value; }

  // accessors
  uint32_t resource_device_index() const { return resource_device_index_; }
  uint32_t memory_device_index() const { return memory_device_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO;
  void* p_next_ = nullptr;

  uint32_t resource_device_index_= 0;
  uint32_t memory_device_index_= 0;
};
static_assert(sizeof(device_group_bind_sparse_info) == sizeof(device_group_bind_sparse_info::underlying_type));
using device_group_bind_sparse_info_khr = device_group_bind_sparse_info;


class device_group_command_buffer_begin_info {
 public:
  using underlying_type = VkDeviceGroupCommandBufferBeginInfo;

  // mutators
  void set_device_mask(uint32_t value) { device_mask_ = value; }

  // accessors
  uint32_t device_mask() const { return device_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO;
  void* p_next_ = nullptr;

  uint32_t device_mask_= 0;
};
static_assert(sizeof(device_group_command_buffer_begin_info) == sizeof(device_group_command_buffer_begin_info::underlying_type));
using device_group_command_buffer_begin_info_khr = device_group_command_buffer_begin_info;


class device_group_device_create_info {
 public:
  using underlying_type = VkDeviceGroupDeviceCreateInfo;

  // mutators
  void set_physical_devices(spk::array_view<spk::physical_device_ref const> value) { p_physical_devices_ = value.get(); physical_device_count_ = value.size(); }

  // accessors
  spk::array_view<spk::physical_device_ref const> physical_devices() const { return {p_physical_devices_, physical_device_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO;
  void* p_next_ = nullptr;

  uint32_t physical_device_count_= 0;// optional
  spk::physical_device_ref const * p_physical_devices_= 0;
};
static_assert(sizeof(device_group_device_create_info) == sizeof(device_group_device_create_info::underlying_type));
using device_group_device_create_info_khr = device_group_device_create_info;


class device_group_present_capabilities_khr {
 public:
  using underlying_type = VkDeviceGroupPresentCapabilitiesKHR;

  // mutators
  void set_present_mask(const std::array<uint32_t, VK_MAX_DEVICE_GROUP_SIZE> & value) { present_mask_ = value; }
  void set_modes(spk::device_group_present_mode_flags_khr value) { modes_ = value; }

  // accessors
  const std::array<uint32_t, VK_MAX_DEVICE_GROUP_SIZE> & present_mask() const { return present_mask_; }
  spk::device_group_present_mode_flags_khr modes() const { return modes_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR;
  void* p_next_ = nullptr;

  std::array<uint32_t, VK_MAX_DEVICE_GROUP_SIZE> present_mask_= {};
  spk::device_group_present_mode_flags_khr modes_= spk::device_group_present_mode_flags_khr(0);
};
static_assert(sizeof(device_group_present_capabilities_khr) == sizeof(device_group_present_capabilities_khr::underlying_type));

class device_group_present_info_khr {
 public:
  using underlying_type = VkDeviceGroupPresentInfoKHR;

  // mutators
  void set_device_masks(spk::array_view<uint32_t const> value) { p_device_masks_ = value.get(); swapchain_count_ = value.size(); }
  void set_mode(spk::device_group_present_mode_flags_khr value) { mode_ = value; }

  // accessors
  spk::array_view<uint32_t const> device_masks() const { return {p_device_masks_, swapchain_count_};}
  spk::device_group_present_mode_flags_khr mode() const { return mode_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR;
  void* p_next_ = nullptr;

  uint32_t swapchain_count_= 0;// optional
  uint32_t const * p_device_masks_= 0;
  spk::device_group_present_mode_flags_khr mode_= spk::device_group_present_mode_flags_khr(0);
};
static_assert(sizeof(device_group_present_info_khr) == sizeof(device_group_present_info_khr::underlying_type));

class device_group_render_pass_begin_info {
 public:
  using underlying_type = VkDeviceGroupRenderPassBeginInfo;

  // mutators
  void set_device_render_areas(spk::array_view<spk::rect_2d const> value) { p_device_render_areas_ = value.get(); device_render_area_count_ = value.size(); }
  void set_device_mask(uint32_t value) { device_mask_ = value; }

  // accessors
  spk::array_view<spk::rect_2d const> device_render_areas() const { return {p_device_render_areas_, device_render_area_count_};}
  uint32_t device_mask() const { return device_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO;
  void* p_next_ = nullptr;

  uint32_t device_mask_= 0;
  uint32_t device_render_area_count_= 0;// optional
  spk::rect_2d const * p_device_render_areas_= 0;
};
static_assert(sizeof(device_group_render_pass_begin_info) == sizeof(device_group_render_pass_begin_info::underlying_type));
using device_group_render_pass_begin_info_khr = device_group_render_pass_begin_info;


class device_group_submit_info {
 public:
  using underlying_type = VkDeviceGroupSubmitInfo;

  // mutators
  void set_wait_semaphore_device_indices(spk::array_view<uint32_t const> value) { p_wait_semaphore_device_indices_ = value.get(); wait_semaphore_count_ = value.size(); }
  void set_command_buffer_device_masks(spk::array_view<uint32_t const> value) { p_command_buffer_device_masks_ = value.get(); command_buffer_count_ = value.size(); }
  void set_signal_semaphore_device_indices(spk::array_view<uint32_t const> value) { p_signal_semaphore_device_indices_ = value.get(); signal_semaphore_count_ = value.size(); }

  // accessors
  spk::array_view<uint32_t const> wait_semaphore_device_indices() const { return {p_wait_semaphore_device_indices_, wait_semaphore_count_};}
  spk::array_view<uint32_t const> command_buffer_device_masks() const { return {p_command_buffer_device_masks_, command_buffer_count_};}
  spk::array_view<uint32_t const> signal_semaphore_device_indices() const { return {p_signal_semaphore_device_indices_, signal_semaphore_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO;
  void* p_next_ = nullptr;

  uint32_t wait_semaphore_count_= 0;// optional
  uint32_t const * p_wait_semaphore_device_indices_= 0;
  uint32_t command_buffer_count_= 0;// optional
  uint32_t const * p_command_buffer_device_masks_= 0;
  uint32_t signal_semaphore_count_= 0;// optional
  uint32_t const * p_signal_semaphore_device_indices_= 0;
};
static_assert(sizeof(device_group_submit_info) == sizeof(device_group_submit_info::underlying_type));
using device_group_submit_info_khr = device_group_submit_info;


class device_group_swapchain_create_info_khr {
 public:
  using underlying_type = VkDeviceGroupSwapchainCreateInfoKHR;

  // mutators
  void set_modes(spk::device_group_present_mode_flags_khr value) { modes_ = value; }

  // accessors
  spk::device_group_present_mode_flags_khr modes() const { return modes_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::device_group_present_mode_flags_khr modes_= spk::device_group_present_mode_flags_khr(0);
};
static_assert(sizeof(device_group_swapchain_create_info_khr) == sizeof(device_group_swapchain_create_info_khr::underlying_type));

class device_queue_create_info {
 public:
  using underlying_type = VkDeviceQueueCreateInfo;

  // mutators
  void set_queue_priorities(spk::array_view<float const> value) { p_queue_priorities_ = value.get(); queue_count_ = value.size(); }
  void set_flags(spk::device_queue_create_flags value) { flags_ = value; }
  void set_queue_family_index(uint32_t value) { queue_family_index_ = value; }

  // accessors
  spk::array_view<float const> queue_priorities() const { return {p_queue_priorities_, queue_count_};}
  spk::device_queue_create_flags flags() const { return flags_; }
  uint32_t queue_family_index() const { return queue_family_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::device_queue_create_flags flags_= spk::device_queue_create_flags(0);// optional
  uint32_t queue_family_index_= 0;
  uint32_t queue_count_= 0;
  float const * p_queue_priorities_= 0;
};
static_assert(sizeof(device_queue_create_info) == sizeof(device_queue_create_info::underlying_type));

class device_queue_global_priority_create_info_ext {
 public:
  using underlying_type = VkDeviceQueueGlobalPriorityCreateInfoEXT;

  // mutators
  void set_global_priority(spk::queue_global_priority_ext value) { global_priority_ = value; }

  // accessors
  spk::queue_global_priority_ext global_priority() const { return global_priority_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::queue_global_priority_ext global_priority_= spk::queue_global_priority_ext(0);
};
static_assert(sizeof(device_queue_global_priority_create_info_ext) == sizeof(device_queue_global_priority_create_info_ext::underlying_type));

class device_queue_info_2 {
 public:
  using underlying_type = VkDeviceQueueInfo2;

  // mutators
  void set_flags(spk::device_queue_create_flags value) { flags_ = value; }
  void set_queue_family_index(uint32_t value) { queue_family_index_ = value; }
  void set_queue_index(uint32_t value) { queue_index_ = value; }

  // accessors
  spk::device_queue_create_flags flags() const { return flags_; }
  uint32_t queue_family_index() const { return queue_family_index_; }
  uint32_t queue_index() const { return queue_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2;
  void* p_next_ = nullptr;

  spk::device_queue_create_flags flags_= spk::device_queue_create_flags(0);
  uint32_t queue_family_index_= 0;
  uint32_t queue_index_= 0;
};
static_assert(sizeof(device_queue_info_2) == sizeof(device_queue_info_2::underlying_type));

class dispatch_indirect_command {
 public:
  using underlying_type = VkDispatchIndirectCommand;

  // mutators
  void set_x(uint32_t value) { x_ = value; }
  void set_y(uint32_t value) { y_ = value; }
  void set_z(uint32_t value) { z_ = value; }

  // accessors
  uint32_t x() const { return x_; }
  uint32_t y() const { return y_; }
  uint32_t z() const { return z_; }

 private:
  uint32_t x_= 0;
  uint32_t y_= 0;
  uint32_t z_= 0;
};
static_assert(sizeof(dispatch_indirect_command) == sizeof(dispatch_indirect_command::underlying_type));

class display_event_info_ext {
 public:
  using underlying_type = VkDisplayEventInfoEXT;

  // mutators
  void set_display_event(spk::display_event_type_ext value) { display_event_ = value; }

  // accessors
  spk::display_event_type_ext display_event() const { return display_event_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT;
  void* p_next_ = nullptr;

  spk::display_event_type_ext display_event_= spk::display_event_type_ext(0);
};
static_assert(sizeof(display_event_info_ext) == sizeof(display_event_info_ext::underlying_type));

class display_plane_info_2khr {
 public:
  using underlying_type = VkDisplayPlaneInfo2KHR;

  // mutators
  void set_mode(spk::display_mode_khr_ref value) { mode_ = value; }
  void set_plane_index(uint32_t value) { plane_index_ = value; }

  // accessors
  spk::display_mode_khr_ref mode() const { return mode_; }
  uint32_t plane_index() const { return plane_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR;
  void* p_next_ = nullptr;

  spk::display_mode_khr_ref mode_= 0;
  uint32_t plane_index_= 0;
};
static_assert(sizeof(display_plane_info_2khr) == sizeof(display_plane_info_2khr::underlying_type));

class display_plane_properties_khr {
 public:
  using underlying_type = VkDisplayPlanePropertiesKHR;

  // mutators
  void set_current_display(spk::display_khr_ref value) { current_display_ = value; }
  void set_current_stack_index(uint32_t value) { current_stack_index_ = value; }

  // accessors
  spk::display_khr_ref current_display() const { return current_display_; }
  uint32_t current_stack_index() const { return current_stack_index_; }

 private:
  spk::display_khr_ref current_display_= 0;
  uint32_t current_stack_index_= 0;
};
static_assert(sizeof(display_plane_properties_khr) == sizeof(display_plane_properties_khr::underlying_type));

class display_power_info_ext {
 public:
  using underlying_type = VkDisplayPowerInfoEXT;

  // mutators
  void set_power_state(spk::display_power_state_ext value) { power_state_ = value; }

  // accessors
  spk::display_power_state_ext power_state() const { return power_state_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT;
  void* p_next_ = nullptr;

  spk::display_power_state_ext power_state_= spk::display_power_state_ext(0);
};
static_assert(sizeof(display_power_info_ext) == sizeof(display_power_info_ext::underlying_type));

class draw_indexed_indirect_command {
 public:
  using underlying_type = VkDrawIndexedIndirectCommand;

  // mutators
  void set_index_count(uint32_t value) { index_count_ = value; }
  void set_instance_count(uint32_t value) { instance_count_ = value; }
  void set_first_index(uint32_t value) { first_index_ = value; }
  void set_vertex_offset(int32_t value) { vertex_offset_ = value; }
  void set_first_instance(uint32_t value) { first_instance_ = value; }

  // accessors
  uint32_t index_count() const { return index_count_; }
  uint32_t instance_count() const { return instance_count_; }
  uint32_t first_index() const { return first_index_; }
  int32_t vertex_offset() const { return vertex_offset_; }
  uint32_t first_instance() const { return first_instance_; }

 private:
  uint32_t index_count_= 0;
  uint32_t instance_count_= 0;
  uint32_t first_index_= 0;
  int32_t vertex_offset_= 0;
  uint32_t first_instance_= 0;
};
static_assert(sizeof(draw_indexed_indirect_command) == sizeof(draw_indexed_indirect_command::underlying_type));

class draw_indirect_command {
 public:
  using underlying_type = VkDrawIndirectCommand;

  // mutators
  void set_vertex_count(uint32_t value) { vertex_count_ = value; }
  void set_instance_count(uint32_t value) { instance_count_ = value; }
  void set_first_vertex(uint32_t value) { first_vertex_ = value; }
  void set_first_instance(uint32_t value) { first_instance_ = value; }

  // accessors
  uint32_t vertex_count() const { return vertex_count_; }
  uint32_t instance_count() const { return instance_count_; }
  uint32_t first_vertex() const { return first_vertex_; }
  uint32_t first_instance() const { return first_instance_; }

 private:
  uint32_t vertex_count_= 0;
  uint32_t instance_count_= 0;
  uint32_t first_vertex_= 0;
  uint32_t first_instance_= 0;
};
static_assert(sizeof(draw_indirect_command) == sizeof(draw_indirect_command::underlying_type));

class event_create_info {
 public:
  using underlying_type = VkEventCreateInfo;

  // mutators

  // accessors

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
};
static_assert(sizeof(event_create_info) == sizeof(event_create_info::underlying_type));

class export_fence_create_info {
 public:
  using underlying_type = VkExportFenceCreateInfo;

  // mutators
  void set_handle_types(spk::external_fence_handle_type_flags value) { handle_types_ = value; }

  // accessors
  spk::external_fence_handle_type_flags handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::external_fence_handle_type_flags handle_types_= spk::external_fence_handle_type_flags(0);// optional
};
static_assert(sizeof(export_fence_create_info) == sizeof(export_fence_create_info::underlying_type));
using export_fence_create_info_khr = export_fence_create_info;


#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_fence_win_32handle_info_khr {
 public:
  using underlying_type = VkExportFenceWin32HandleInfoKHR;

  // mutators
  void set_p_attributes(SECURITY_ATTRIBUTES const * value) { p_attributes_ = value; }
  void set_dw_access(DWORD value) { dw_access_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  SECURITY_ATTRIBUTES const * p_attributes() const { return p_attributes_; }
  DWORD dw_access() const { return dw_access_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_FENCE_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  SECURITY_ATTRIBUTES const * p_attributes_= 0;// optional
  DWORD dw_access_= 0;
  LPCWSTR name_= 0;
};
static_assert(sizeof(export_fence_win_32handle_info_khr) == sizeof(export_fence_win_32handle_info_khr::underlying_type));
#endif

class export_memory_allocate_info {
 public:
  using underlying_type = VkExportMemoryAllocateInfo;

  // mutators
  void set_handle_types(spk::external_memory_handle_type_flags value) { handle_types_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_types_= spk::external_memory_handle_type_flags(0);// optional
};
static_assert(sizeof(export_memory_allocate_info) == sizeof(export_memory_allocate_info::underlying_type));
using export_memory_allocate_info_khr = export_memory_allocate_info;


class export_memory_allocate_info_nv {
 public:
  using underlying_type = VkExportMemoryAllocateInfoNV;

  // mutators
  void set_handle_types(spk::external_memory_handle_type_flags_nv value) { handle_types_ = value; }

  // accessors
  spk::external_memory_handle_type_flags_nv handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags_nv handle_types_= spk::external_memory_handle_type_flags_nv(0);// optional
};
static_assert(sizeof(export_memory_allocate_info_nv) == sizeof(export_memory_allocate_info_nv::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_memory_win_32handle_info_khr {
 public:
  using underlying_type = VkExportMemoryWin32HandleInfoKHR;

  // mutators
  void set_p_attributes(SECURITY_ATTRIBUTES const * value) { p_attributes_ = value; }
  void set_dw_access(DWORD value) { dw_access_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  SECURITY_ATTRIBUTES const * p_attributes() const { return p_attributes_; }
  DWORD dw_access() const { return dw_access_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  SECURITY_ATTRIBUTES const * p_attributes_= 0;// optional
  DWORD dw_access_= 0;
  LPCWSTR name_= 0;
};
static_assert(sizeof(export_memory_win_32handle_info_khr) == sizeof(export_memory_win_32handle_info_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_memory_win_32handle_info_nv {
 public:
  using underlying_type = VkExportMemoryWin32HandleInfoNV;

  // mutators
  void set_p_attributes(SECURITY_ATTRIBUTES const * value) { p_attributes_ = value; }
  void set_dw_access(DWORD value) { dw_access_ = value; }

  // accessors
  SECURITY_ATTRIBUTES const * p_attributes() const { return p_attributes_; }
  DWORD dw_access() const { return dw_access_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_MEMORY_WIN32_HANDLE_INFO_NV;
  void* p_next_ = nullptr;

  SECURITY_ATTRIBUTES const * p_attributes_= 0;// optional
  DWORD dw_access_= 0;// optional
};
static_assert(sizeof(export_memory_win_32handle_info_nv) == sizeof(export_memory_win_32handle_info_nv::underlying_type));
#endif

class export_semaphore_create_info {
 public:
  using underlying_type = VkExportSemaphoreCreateInfo;

  // mutators
  void set_handle_types(spk::external_semaphore_handle_type_flags value) { handle_types_ = value; }

  // accessors
  spk::external_semaphore_handle_type_flags handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::external_semaphore_handle_type_flags handle_types_= spk::external_semaphore_handle_type_flags(0);// optional
};
static_assert(sizeof(export_semaphore_create_info) == sizeof(export_semaphore_create_info::underlying_type));
using export_semaphore_create_info_khr = export_semaphore_create_info;


#ifdef VK_USE_PLATFORM_WIN32_KHR
class export_semaphore_win_32handle_info_khr {
 public:
  using underlying_type = VkExportSemaphoreWin32HandleInfoKHR;

  // mutators
  void set_p_attributes(SECURITY_ATTRIBUTES const * value) { p_attributes_ = value; }
  void set_dw_access(DWORD value) { dw_access_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  SECURITY_ATTRIBUTES const * p_attributes() const { return p_attributes_; }
  DWORD dw_access() const { return dw_access_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  SECURITY_ATTRIBUTES const * p_attributes_= 0;// optional
  DWORD dw_access_= 0;
  LPCWSTR name_= 0;
};
static_assert(sizeof(export_semaphore_win_32handle_info_khr) == sizeof(export_semaphore_win_32handle_info_khr::underlying_type));
#endif

class extension_properties {
 public:
  using underlying_type = VkExtensionProperties;

  // mutators
  void set_extension_name(const std::array<char, VK_MAX_EXTENSION_NAME_SIZE> & value) { extension_name_ = value; }
  void set_spec_version(uint32_t value) { spec_version_ = value; }

  // accessors
  const std::array<char, VK_MAX_EXTENSION_NAME_SIZE> & extension_name() const { return extension_name_; }
  uint32_t spec_version() const { return spec_version_; }

 private:
  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> extension_name_= {};
  uint32_t spec_version_= 0;
};
static_assert(sizeof(extension_properties) == sizeof(extension_properties::underlying_type));

class extent_2d {
 public:
  using underlying_type = VkExtent2D;

  // mutators
  void set_width(uint32_t value) { width_ = value; }
  void set_height(uint32_t value) { height_ = value; }

  // accessors
  uint32_t width() const { return width_; }
  uint32_t height() const { return height_; }

 private:
  uint32_t width_= 0;
  uint32_t height_= 0;
};
static_assert(sizeof(extent_2d) == sizeof(extent_2d::underlying_type));

class extent_3d {
 public:
  using underlying_type = VkExtent3D;

  // mutators
  void set_width(uint32_t value) { width_ = value; }
  void set_height(uint32_t value) { height_ = value; }
  void set_depth(uint32_t value) { depth_ = value; }

  // accessors
  uint32_t width() const { return width_; }
  uint32_t height() const { return height_; }
  uint32_t depth() const { return depth_; }

 private:
  uint32_t width_= 0;
  uint32_t height_= 0;
  uint32_t depth_= 0;
};
static_assert(sizeof(extent_3d) == sizeof(extent_3d::underlying_type));

class external_fence_properties {
 public:
  using underlying_type = VkExternalFenceProperties;

  // mutators
  void set_export_from_imported_handle_types(spk::external_fence_handle_type_flags value) { export_from_imported_handle_types_ = value; }
  void set_compatible_handle_types(spk::external_fence_handle_type_flags value) { compatible_handle_types_ = value; }
  void set_external_fence_features(spk::external_fence_feature_flags value) { external_fence_features_ = value; }

  // accessors
  spk::external_fence_handle_type_flags export_from_imported_handle_types() const { return export_from_imported_handle_types_; }
  spk::external_fence_handle_type_flags compatible_handle_types() const { return compatible_handle_types_; }
  spk::external_fence_feature_flags external_fence_features() const { return external_fence_features_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES;
  void* p_next_ = nullptr;

  spk::external_fence_handle_type_flags export_from_imported_handle_types_= spk::external_fence_handle_type_flags(0);
  spk::external_fence_handle_type_flags compatible_handle_types_= spk::external_fence_handle_type_flags(0);
  spk::external_fence_feature_flags external_fence_features_= spk::external_fence_feature_flags(0);// optional
};
static_assert(sizeof(external_fence_properties) == sizeof(external_fence_properties::underlying_type));
using external_fence_properties_khr = external_fence_properties;


#ifdef VK_USE_PLATFORM_ANDROID_KHR
class external_format_android {
 public:
  using underlying_type = VkExternalFormatANDROID;

  // mutators
  void set_external_format(uint64_t value) { external_format_ = value; }

  // accessors
  uint64_t external_format() const { return external_format_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_FORMAT_ANDROID;
  void* p_next_ = nullptr;

  uint64_t external_format_= 0;
};
static_assert(sizeof(external_format_android) == sizeof(external_format_android::underlying_type));
#endif

class external_memory_buffer_create_info {
 public:
  using underlying_type = VkExternalMemoryBufferCreateInfo;

  // mutators
  void set_handle_types(spk::external_memory_handle_type_flags value) { handle_types_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_types_= spk::external_memory_handle_type_flags(0);// optional
};
static_assert(sizeof(external_memory_buffer_create_info) == sizeof(external_memory_buffer_create_info::underlying_type));
using external_memory_buffer_create_info_khr = external_memory_buffer_create_info;


class external_memory_image_create_info {
 public:
  using underlying_type = VkExternalMemoryImageCreateInfo;

  // mutators
  void set_handle_types(spk::external_memory_handle_type_flags value) { handle_types_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_types_= spk::external_memory_handle_type_flags(0);
};
static_assert(sizeof(external_memory_image_create_info) == sizeof(external_memory_image_create_info::underlying_type));
using external_memory_image_create_info_khr = external_memory_image_create_info;


class external_memory_image_create_info_nv {
 public:
  using underlying_type = VkExternalMemoryImageCreateInfoNV;

  // mutators
  void set_handle_types(spk::external_memory_handle_type_flags_nv value) { handle_types_ = value; }

  // accessors
  spk::external_memory_handle_type_flags_nv handle_types() const { return handle_types_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags_nv handle_types_= spk::external_memory_handle_type_flags_nv(0);// optional
};
static_assert(sizeof(external_memory_image_create_info_nv) == sizeof(external_memory_image_create_info_nv::underlying_type));

class external_memory_properties {
 public:
  using underlying_type = VkExternalMemoryProperties;

  // mutators
  void set_external_memory_features(spk::external_memory_feature_flags value) { external_memory_features_ = value; }
  void set_export_from_imported_handle_types(spk::external_memory_handle_type_flags value) { export_from_imported_handle_types_ = value; }
  void set_compatible_handle_types(spk::external_memory_handle_type_flags value) { compatible_handle_types_ = value; }

  // accessors
  spk::external_memory_feature_flags external_memory_features() const { return external_memory_features_; }
  spk::external_memory_handle_type_flags export_from_imported_handle_types() const { return export_from_imported_handle_types_; }
  spk::external_memory_handle_type_flags compatible_handle_types() const { return compatible_handle_types_; }

 private:
  spk::external_memory_feature_flags external_memory_features_= spk::external_memory_feature_flags(0);
  spk::external_memory_handle_type_flags export_from_imported_handle_types_= spk::external_memory_handle_type_flags(0);// optional
  spk::external_memory_handle_type_flags compatible_handle_types_= spk::external_memory_handle_type_flags(0);
};
static_assert(sizeof(external_memory_properties) == sizeof(external_memory_properties::underlying_type));
using external_memory_properties_khr = external_memory_properties;


class external_semaphore_properties {
 public:
  using underlying_type = VkExternalSemaphoreProperties;

  // mutators
  void set_export_from_imported_handle_types(spk::external_semaphore_handle_type_flags value) { export_from_imported_handle_types_ = value; }
  void set_compatible_handle_types(spk::external_semaphore_handle_type_flags value) { compatible_handle_types_ = value; }
  void set_external_semaphore_features(spk::external_semaphore_feature_flags value) { external_semaphore_features_ = value; }

  // accessors
  spk::external_semaphore_handle_type_flags export_from_imported_handle_types() const { return export_from_imported_handle_types_; }
  spk::external_semaphore_handle_type_flags compatible_handle_types() const { return compatible_handle_types_; }
  spk::external_semaphore_feature_flags external_semaphore_features() const { return external_semaphore_features_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES;
  void* p_next_ = nullptr;

  spk::external_semaphore_handle_type_flags export_from_imported_handle_types_= spk::external_semaphore_handle_type_flags(0);
  spk::external_semaphore_handle_type_flags compatible_handle_types_= spk::external_semaphore_handle_type_flags(0);
  spk::external_semaphore_feature_flags external_semaphore_features_= spk::external_semaphore_feature_flags(0);// optional
};
static_assert(sizeof(external_semaphore_properties) == sizeof(external_semaphore_properties::underlying_type));
using external_semaphore_properties_khr = external_semaphore_properties;


class fence_create_info {
 public:
  using underlying_type = VkFenceCreateInfo;

  // mutators
  void set_flags(spk::fence_create_flags value) { flags_ = value; }

  // accessors
  spk::fence_create_flags flags() const { return flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::fence_create_flags flags_= spk::fence_create_flags(0);// optional
};
static_assert(sizeof(fence_create_info) == sizeof(fence_create_info::underlying_type));

class fence_get_fd_info_khr {
 public:
  using underlying_type = VkFenceGetFdInfoKHR;

  // mutators
  void set_fence(spk::fence_ref value) { fence_ = value; }
  void set_handle_type(spk::external_fence_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::fence_ref fence() const { return fence_; }
  spk::external_fence_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::fence_ref fence_= 0;
  spk::external_fence_handle_type_flags handle_type_= spk::external_fence_handle_type_flags(0);
};
static_assert(sizeof(fence_get_fd_info_khr) == sizeof(fence_get_fd_info_khr::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class fence_get_win_32handle_info_khr {
 public:
  using underlying_type = VkFenceGetWin32HandleInfoKHR;

  // mutators
  void set_fence(spk::fence_ref value) { fence_ = value; }
  void set_handle_type(spk::external_fence_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::fence_ref fence() const { return fence_; }
  spk::external_fence_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_FENCE_GET_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::fence_ref fence_= 0;
  spk::external_fence_handle_type_flags handle_type_= spk::external_fence_handle_type_flags(0);
};
static_assert(sizeof(fence_get_win_32handle_info_khr) == sizeof(fence_get_win_32handle_info_khr::underlying_type));
#endif

class format_properties {
 public:
  using underlying_type = VkFormatProperties;

  // mutators
  void set_linear_tiling_features(spk::format_feature_flags value) { linear_tiling_features_ = value; }
  void set_optimal_tiling_features(spk::format_feature_flags value) { optimal_tiling_features_ = value; }
  void set_buffer_features(spk::format_feature_flags value) { buffer_features_ = value; }

  // accessors
  spk::format_feature_flags linear_tiling_features() const { return linear_tiling_features_; }
  spk::format_feature_flags optimal_tiling_features() const { return optimal_tiling_features_; }
  spk::format_feature_flags buffer_features() const { return buffer_features_; }

 private:
  spk::format_feature_flags linear_tiling_features_= spk::format_feature_flags(0);// optional
  spk::format_feature_flags optimal_tiling_features_= spk::format_feature_flags(0);// optional
  spk::format_feature_flags buffer_features_= spk::format_feature_flags(0);// optional
};
static_assert(sizeof(format_properties) == sizeof(format_properties::underlying_type));

class framebuffer_create_info {
 public:
  using underlying_type = VkFramebufferCreateInfo;

  // mutators
  void set_attachments(spk::array_view<spk::image_view_ref const> value) { p_attachments_ = value.get(); attachment_count_ = value.size(); }
  void set_render_pass(spk::render_pass_ref value) { render_pass_ = value; }
  void set_width(uint32_t value) { width_ = value; }
  void set_height(uint32_t value) { height_ = value; }
  void set_layers(uint32_t value) { layers_ = value; }

  // accessors
  spk::array_view<spk::image_view_ref const> attachments() const { return {p_attachments_, attachment_count_};}
  spk::render_pass_ref render_pass() const { return render_pass_; }
  uint32_t width() const { return width_; }
  uint32_t height() const { return height_; }
  uint32_t layers() const { return layers_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::render_pass_ref render_pass_= 0;
  uint32_t attachment_count_= 0;// optional
  spk::image_view_ref const * p_attachments_= 0;
  uint32_t width_= 0;
  uint32_t height_= 0;
  uint32_t layers_= 0;
};
static_assert(sizeof(framebuffer_create_info) == sizeof(framebuffer_create_info::underlying_type));

class graphics_pipeline_create_info {
 public:
  using underlying_type = VkGraphicsPipelineCreateInfo;

  // mutators
  void set_stages(spk::array_view<spk::pipeline_shader_stage_create_info const> value) { p_stages_ = value.get(); stage_count_ = value.size(); }
  void set_flags(spk::pipeline_create_flags value) { flags_ = value; }
  void set_p_vertex_input_state(spk::pipeline_vertex_input_state_create_info const * value) { p_vertex_input_state_ = value; }
  void set_p_input_assembly_state(spk::pipeline_input_assembly_state_create_info const * value) { p_input_assembly_state_ = value; }
  void set_p_tessellation_state(spk::pipeline_tessellation_state_create_info const * value) { p_tessellation_state_ = value; }
  void set_p_viewport_state(spk::pipeline_viewport_state_create_info const * value) { p_viewport_state_ = value; }
  void set_p_rasterization_state(spk::pipeline_rasterization_state_create_info const * value) { p_rasterization_state_ = value; }
  void set_p_multisample_state(spk::pipeline_multisample_state_create_info const * value) { p_multisample_state_ = value; }
  void set_p_depth_stencil_state(spk::pipeline_depth_stencil_state_create_info const * value) { p_depth_stencil_state_ = value; }
  void set_p_color_blend_state(spk::pipeline_color_blend_state_create_info const * value) { p_color_blend_state_ = value; }
  void set_p_dynamic_state(spk::pipeline_dynamic_state_create_info const * value) { p_dynamic_state_ = value; }
  void set_layout(spk::pipeline_layout_ref value) { layout_ = value; }
  void set_render_pass(spk::render_pass_ref value) { render_pass_ = value; }
  void set_subpass(uint32_t value) { subpass_ = value; }
  void set_base_pipeline_handle(spk::pipeline_ref value) { base_pipeline_handle_ = value; }
  void set_base_pipeline_index(int32_t value) { base_pipeline_index_ = value; }

  // accessors
  spk::array_view<spk::pipeline_shader_stage_create_info const> stages() const { return {p_stages_, stage_count_};}
  spk::pipeline_create_flags flags() const { return flags_; }
  spk::pipeline_vertex_input_state_create_info const * p_vertex_input_state() const { return p_vertex_input_state_; }
  spk::pipeline_input_assembly_state_create_info const * p_input_assembly_state() const { return p_input_assembly_state_; }
  spk::pipeline_tessellation_state_create_info const * p_tessellation_state() const { return p_tessellation_state_; }
  spk::pipeline_viewport_state_create_info const * p_viewport_state() const { return p_viewport_state_; }
  spk::pipeline_rasterization_state_create_info const * p_rasterization_state() const { return p_rasterization_state_; }
  spk::pipeline_multisample_state_create_info const * p_multisample_state() const { return p_multisample_state_; }
  spk::pipeline_depth_stencil_state_create_info const * p_depth_stencil_state() const { return p_depth_stencil_state_; }
  spk::pipeline_color_blend_state_create_info const * p_color_blend_state() const { return p_color_blend_state_; }
  spk::pipeline_dynamic_state_create_info const * p_dynamic_state() const { return p_dynamic_state_; }
  spk::pipeline_layout_ref layout() const { return layout_; }
  spk::render_pass_ref render_pass() const { return render_pass_; }
  uint32_t subpass() const { return subpass_; }
  spk::pipeline_ref base_pipeline_handle() const { return base_pipeline_handle_; }
  int32_t base_pipeline_index() const { return base_pipeline_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::pipeline_create_flags flags_= spk::pipeline_create_flags(0);// optional
  uint32_t stage_count_= 0;
  spk::pipeline_shader_stage_create_info const * p_stages_= 0;
  spk::pipeline_vertex_input_state_create_info const * p_vertex_input_state_= 0;
  spk::pipeline_input_assembly_state_create_info const * p_input_assembly_state_= 0;
  spk::pipeline_tessellation_state_create_info const * p_tessellation_state_= 0;// optional
  spk::pipeline_viewport_state_create_info const * p_viewport_state_= 0;// optional
  spk::pipeline_rasterization_state_create_info const * p_rasterization_state_= 0;
  spk::pipeline_multisample_state_create_info const * p_multisample_state_= 0;// optional
  spk::pipeline_depth_stencil_state_create_info const * p_depth_stencil_state_= 0;// optional
  spk::pipeline_color_blend_state_create_info const * p_color_blend_state_= 0;// optional
  spk::pipeline_dynamic_state_create_info const * p_dynamic_state_= 0;// optional
  spk::pipeline_layout_ref layout_= 0;
  spk::render_pass_ref render_pass_= 0;
  uint32_t subpass_= 0;
  spk::pipeline_ref base_pipeline_handle_= 0;// optional
  int32_t base_pipeline_index_= 0;
};
static_assert(sizeof(graphics_pipeline_create_info) == sizeof(graphics_pipeline_create_info::underlying_type));

class image_format_list_create_info_khr {
 public:
  using underlying_type = VkImageFormatListCreateInfoKHR;

  // mutators
  void set_view_formats(spk::array_view<spk::format const> value) { p_view_formats_ = value.get(); view_format_count_ = value.size(); }

  // accessors
  spk::array_view<spk::format const> view_formats() const { return {p_view_formats_, view_format_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  uint32_t view_format_count_= 0;// optional
  spk::format const * p_view_formats_= 0;
};
static_assert(sizeof(image_format_list_create_info_khr) == sizeof(image_format_list_create_info_khr::underlying_type));

class image_memory_requirements_info_2 {
 public:
  using underlying_type = VkImageMemoryRequirementsInfo2;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2;
  void* p_next_ = nullptr;

  spk::image_ref image_= 0;
};
static_assert(sizeof(image_memory_requirements_info_2) == sizeof(image_memory_requirements_info_2::underlying_type));
using image_memory_requirements_info_2khr = image_memory_requirements_info_2;


class image_plane_memory_requirements_info {
 public:
  using underlying_type = VkImagePlaneMemoryRequirementsInfo;

  // mutators
  void set_plane_aspect(spk::image_aspect_flags value) { plane_aspect_ = value; }

  // accessors
  spk::image_aspect_flags plane_aspect() const { return plane_aspect_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO;
  void* p_next_ = nullptr;

  spk::image_aspect_flags plane_aspect_= spk::image_aspect_flags(0);
};
static_assert(sizeof(image_plane_memory_requirements_info) == sizeof(image_plane_memory_requirements_info::underlying_type));
using image_plane_memory_requirements_info_khr = image_plane_memory_requirements_info;


class image_sparse_memory_requirements_info_2 {
 public:
  using underlying_type = VkImageSparseMemoryRequirementsInfo2;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2;
  void* p_next_ = nullptr;

  spk::image_ref image_= 0;
};
static_assert(sizeof(image_sparse_memory_requirements_info_2) == sizeof(image_sparse_memory_requirements_info_2::underlying_type));
using image_sparse_memory_requirements_info_2khr = image_sparse_memory_requirements_info_2;


class image_subresource {
 public:
  using underlying_type = VkImageSubresource;

  // mutators
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }
  void set_mip_level(uint32_t value) { mip_level_ = value; }
  void set_array_layer(uint32_t value) { array_layer_ = value; }

  // accessors
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }
  uint32_t mip_level() const { return mip_level_; }
  uint32_t array_layer() const { return array_layer_; }

 private:
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
  uint32_t mip_level_= 0;
  uint32_t array_layer_= 0;
};
static_assert(sizeof(image_subresource) == sizeof(image_subresource::underlying_type));

class image_subresource_layers {
 public:
  using underlying_type = VkImageSubresourceLayers;

  // mutators
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }
  void set_mip_level(uint32_t value) { mip_level_ = value; }
  void set_base_array_layer(uint32_t value) { base_array_layer_ = value; }
  void set_layer_count(uint32_t value) { layer_count_ = value; }

  // accessors
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }
  uint32_t mip_level() const { return mip_level_; }
  uint32_t base_array_layer() const { return base_array_layer_; }
  uint32_t layer_count() const { return layer_count_; }

 private:
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
  uint32_t mip_level_= 0;
  uint32_t base_array_layer_= 0;
  uint32_t layer_count_= 0;
};
static_assert(sizeof(image_subresource_layers) == sizeof(image_subresource_layers::underlying_type));

class image_subresource_range {
 public:
  using underlying_type = VkImageSubresourceRange;

  // mutators
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }
  void set_base_mip_level(uint32_t value) { base_mip_level_ = value; }
  void set_level_count(uint32_t value) { level_count_ = value; }
  void set_base_array_layer(uint32_t value) { base_array_layer_ = value; }
  void set_layer_count(uint32_t value) { layer_count_ = value; }

  // accessors
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }
  uint32_t base_mip_level() const { return base_mip_level_; }
  uint32_t level_count() const { return level_count_; }
  uint32_t base_array_layer() const { return base_array_layer_; }
  uint32_t layer_count() const { return layer_count_; }

 private:
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
  uint32_t base_mip_level_= 0;
  uint32_t level_count_= 0;
  uint32_t base_array_layer_= 0;
  uint32_t layer_count_= 0;
};
static_assert(sizeof(image_subresource_range) == sizeof(image_subresource_range::underlying_type));

class image_swapchain_create_info_khr {
 public:
  using underlying_type = VkImageSwapchainCreateInfoKHR;

  // mutators
  void set_swapchain(spk::swapchain_khr_ref value) { swapchain_ = value; }

  // accessors
  spk::swapchain_khr_ref swapchain() const { return swapchain_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::swapchain_khr_ref swapchain_= 0;// optional
};
static_assert(sizeof(image_swapchain_create_info_khr) == sizeof(image_swapchain_create_info_khr::underlying_type));

class image_view_usage_create_info {
 public:
  using underlying_type = VkImageViewUsageCreateInfo;

  // mutators
  void set_usage(spk::image_usage_flags value) { usage_ = value; }

  // accessors
  spk::image_usage_flags usage() const { return usage_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::image_usage_flags usage_= spk::image_usage_flags(0);
};
static_assert(sizeof(image_view_usage_create_info) == sizeof(image_view_usage_create_info::underlying_type));
using image_view_usage_create_info_khr = image_view_usage_create_info;


#ifdef VK_USE_PLATFORM_ANDROID_KHR
class import_android_hardware_buffer_info_android {
 public:
  using underlying_type = VkImportAndroidHardwareBufferInfoANDROID;

  // mutators
  void set_buffer(AHardwareBuffer * value) { buffer_ = value; }

  // accessors
  AHardwareBuffer * buffer() const { return buffer_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
  void* p_next_ = nullptr;

  AHardwareBuffer * buffer_= 0;
};
static_assert(sizeof(import_android_hardware_buffer_info_android) == sizeof(import_android_hardware_buffer_info_android::underlying_type));
#endif

class import_fence_fd_info_khr {
 public:
  using underlying_type = VkImportFenceFdInfoKHR;

  // mutators
  void set_fence(spk::fence_ref value) { fence_ = value; }
  void set_flags(spk::fence_import_flags value) { flags_ = value; }
  void set_handle_type(spk::external_fence_handle_type_flags value) { handle_type_ = value; }
  void set_fd(int value) { fd_ = value; }

  // accessors
  spk::fence_ref fence() const { return fence_; }
  spk::fence_import_flags flags() const { return flags_; }
  spk::external_fence_handle_type_flags handle_type() const { return handle_type_; }
  int fd() const { return fd_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::fence_ref fence_= 0;
  spk::fence_import_flags flags_= spk::fence_import_flags(0);// optional
  spk::external_fence_handle_type_flags handle_type_= spk::external_fence_handle_type_flags(0);
  int fd_= 0;
};
static_assert(sizeof(import_fence_fd_info_khr) == sizeof(import_fence_fd_info_khr::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_fence_win_32handle_info_khr {
 public:
  using underlying_type = VkImportFenceWin32HandleInfoKHR;

  // mutators
  void set_fence(spk::fence_ref value) { fence_ = value; }
  void set_flags(spk::fence_import_flags value) { flags_ = value; }
  void set_handle_type(spk::external_fence_handle_type_flags value) { handle_type_ = value; }
  void set_handle(HANDLE value) { handle_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  spk::fence_ref fence() const { return fence_; }
  spk::fence_import_flags flags() const { return flags_; }
  spk::external_fence_handle_type_flags handle_type() const { return handle_type_; }
  HANDLE handle() const { return handle_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_FENCE_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::fence_ref fence_= 0;
  spk::fence_import_flags flags_= spk::fence_import_flags(0);// optional
  spk::external_fence_handle_type_flags handle_type_= spk::external_fence_handle_type_flags(0);// optional
  HANDLE handle_= 0;// optional
  LPCWSTR name_= 0;// optional
};
static_assert(sizeof(import_fence_win_32handle_info_khr) == sizeof(import_fence_win_32handle_info_khr::underlying_type));
#endif

class import_memory_fd_info_khr {
 public:
  using underlying_type = VkImportMemoryFdInfoKHR;

  // mutators
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }
  void set_fd(int value) { fd_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }
  int fd() const { return fd_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);// optional
  int fd_= 0;
};
static_assert(sizeof(import_memory_fd_info_khr) == sizeof(import_memory_fd_info_khr::underlying_type));

class import_memory_host_pointer_info_ext {
 public:
  using underlying_type = VkImportMemoryHostPointerInfoEXT;

  // mutators
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }
  void set_p_host_pointer(void * value) { p_host_pointer_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }
  void * p_host_pointer() const { return p_host_pointer_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);
  void * p_host_pointer_= 0;
};
static_assert(sizeof(import_memory_host_pointer_info_ext) == sizeof(import_memory_host_pointer_info_ext::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_memory_win_32handle_info_khr {
 public:
  using underlying_type = VkImportMemoryWin32HandleInfoKHR;

  // mutators
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }
  void set_handle(HANDLE value) { handle_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }
  HANDLE handle() const { return handle_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);// optional
  HANDLE handle_= 0;// optional
  LPCWSTR name_= 0;// optional
};
static_assert(sizeof(import_memory_win_32handle_info_khr) == sizeof(import_memory_win_32handle_info_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_memory_win_32handle_info_nv {
 public:
  using underlying_type = VkImportMemoryWin32HandleInfoNV;

  // mutators
  void set_handle_type(spk::external_memory_handle_type_flags_nv value) { handle_type_ = value; }
  void set_handle(HANDLE value) { handle_ = value; }

  // accessors
  spk::external_memory_handle_type_flags_nv handle_type() const { return handle_type_; }
  HANDLE handle() const { return handle_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_MEMORY_WIN32_HANDLE_INFO_NV;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags_nv handle_type_= spk::external_memory_handle_type_flags_nv(0);// optional
  HANDLE handle_= 0;// optional
};
static_assert(sizeof(import_memory_win_32handle_info_nv) == sizeof(import_memory_win_32handle_info_nv::underlying_type));
#endif

class import_semaphore_fd_info_khr {
 public:
  using underlying_type = VkImportSemaphoreFdInfoKHR;

  // mutators
  void set_semaphore(spk::semaphore_ref value) { semaphore_ = value; }
  void set_flags(spk::semaphore_import_flags value) { flags_ = value; }
  void set_handle_type(spk::external_semaphore_handle_type_flags value) { handle_type_ = value; }
  void set_fd(int value) { fd_ = value; }

  // accessors
  spk::semaphore_ref semaphore() const { return semaphore_; }
  spk::semaphore_import_flags flags() const { return flags_; }
  spk::external_semaphore_handle_type_flags handle_type() const { return handle_type_; }
  int fd() const { return fd_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::semaphore_ref semaphore_= 0;
  spk::semaphore_import_flags flags_= spk::semaphore_import_flags(0);// optional
  spk::external_semaphore_handle_type_flags handle_type_= spk::external_semaphore_handle_type_flags(0);
  int fd_= 0;
};
static_assert(sizeof(import_semaphore_fd_info_khr) == sizeof(import_semaphore_fd_info_khr::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class import_semaphore_win_32handle_info_khr {
 public:
  using underlying_type = VkImportSemaphoreWin32HandleInfoKHR;

  // mutators
  void set_semaphore(spk::semaphore_ref value) { semaphore_ = value; }
  void set_flags(spk::semaphore_import_flags value) { flags_ = value; }
  void set_handle_type(spk::external_semaphore_handle_type_flags value) { handle_type_ = value; }
  void set_handle(HANDLE value) { handle_ = value; }
  void set_name(LPCWSTR value) { name_ = value; }

  // accessors
  spk::semaphore_ref semaphore() const { return semaphore_; }
  spk::semaphore_import_flags flags() const { return flags_; }
  spk::external_semaphore_handle_type_flags handle_type() const { return handle_type_; }
  HANDLE handle() const { return handle_; }
  LPCWSTR name() const { return name_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::semaphore_ref semaphore_= 0;
  spk::semaphore_import_flags flags_= spk::semaphore_import_flags(0);// optional
  spk::external_semaphore_handle_type_flags handle_type_= spk::external_semaphore_handle_type_flags(0);// optional
  HANDLE handle_= 0;// optional
  LPCWSTR name_= 0;// optional
};
static_assert(sizeof(import_semaphore_win_32handle_info_khr) == sizeof(import_semaphore_win_32handle_info_khr::underlying_type));
#endif

class indirect_commands_layout_create_info_nvx {
 public:
  using underlying_type = VkIndirectCommandsLayoutCreateInfoNVX;

  // mutators
  void set_tokens(spk::array_view<spk::indirect_commands_layout_token_nvx const> value) { p_tokens_ = value.get(); token_count_ = value.size(); }
  void set_pipeline_bind_point(spk::pipeline_bind_point value) { pipeline_bind_point_ = value; }
  void set_flags(spk::indirect_commands_layout_usage_flags_nvx value) { flags_ = value; }

  // accessors
  spk::array_view<spk::indirect_commands_layout_token_nvx const> tokens() const { return {p_tokens_, token_count_};}
  spk::pipeline_bind_point pipeline_bind_point() const { return pipeline_bind_point_; }
  spk::indirect_commands_layout_usage_flags_nvx flags() const { return flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
  void* p_next_ = nullptr;

  spk::pipeline_bind_point pipeline_bind_point_= spk::pipeline_bind_point(0);
  spk::indirect_commands_layout_usage_flags_nvx flags_= spk::indirect_commands_layout_usage_flags_nvx(0);
  uint32_t token_count_= 0;
  spk::indirect_commands_layout_token_nvx const * p_tokens_= 0;
};
static_assert(sizeof(indirect_commands_layout_create_info_nvx) == sizeof(indirect_commands_layout_create_info_nvx::underlying_type));

class indirect_commands_layout_token_nvx {
 public:
  using underlying_type = VkIndirectCommandsLayoutTokenNVX;

  // mutators
  void set_token_type(spk::indirect_commands_token_type_nvx value) { token_type_ = value; }
  void set_binding_unit(uint32_t value) { binding_unit_ = value; }
  void set_dynamic_count(uint32_t value) { dynamic_count_ = value; }
  void set_divisor(uint32_t value) { divisor_ = value; }

  // accessors
  spk::indirect_commands_token_type_nvx token_type() const { return token_type_; }
  uint32_t binding_unit() const { return binding_unit_; }
  uint32_t dynamic_count() const { return dynamic_count_; }
  uint32_t divisor() const { return divisor_; }

 private:
  spk::indirect_commands_token_type_nvx token_type_= spk::indirect_commands_token_type_nvx(0);
  uint32_t binding_unit_= 0;
  uint32_t dynamic_count_= 0;
  uint32_t divisor_= 0;
};
static_assert(sizeof(indirect_commands_layout_token_nvx) == sizeof(indirect_commands_layout_token_nvx::underlying_type));

class indirect_commands_token_nvx {
 public:
  using underlying_type = VkIndirectCommandsTokenNVX;

  // mutators
  void set_token_type(spk::indirect_commands_token_type_nvx value) { token_type_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }

  // accessors
  spk::indirect_commands_token_type_nvx token_type() const { return token_type_; }
  spk::buffer_ref buffer() const { return buffer_; }
  uint64_t offset() const { return offset_; }

 private:
  spk::indirect_commands_token_type_nvx token_type_= spk::indirect_commands_token_type_nvx(0);
  spk::buffer_ref buffer_= 0;
  uint64_t offset_= 0;
};
static_assert(sizeof(indirect_commands_token_nvx) == sizeof(indirect_commands_token_nvx::underlying_type));

class input_attachment_aspect_reference {
 public:
  using underlying_type = VkInputAttachmentAspectReference;

  // mutators
  void set_subpass(uint32_t value) { subpass_ = value; }
  void set_input_attachment_index(uint32_t value) { input_attachment_index_ = value; }
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }

  // accessors
  uint32_t subpass() const { return subpass_; }
  uint32_t input_attachment_index() const { return input_attachment_index_; }
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }

 private:
  uint32_t subpass_= 0;
  uint32_t input_attachment_index_= 0;
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
};
static_assert(sizeof(input_attachment_aspect_reference) == sizeof(input_attachment_aspect_reference::underlying_type));
using input_attachment_aspect_reference_khr = input_attachment_aspect_reference;


class instance_create_info {
 public:
  using underlying_type = VkInstanceCreateInfo;

  // mutators
  void set_pp_enabled_layer_names(spk::array_view<char const * const> value) { pp_enabled_layer_names_ = value.get(); enabled_layer_count_ = value.size(); }
  void set_pp_enabled_extension_names(spk::array_view<char const * const> value) { pp_enabled_extension_names_ = value.get(); enabled_extension_count_ = value.size(); }
  void set_p_application_info(spk::application_info const * value) { p_application_info_ = value; }

  // accessors
  spk::array_view<char const * const> pp_enabled_layer_names() const { return {pp_enabled_layer_names_, enabled_layer_count_};}
  spk::array_view<char const * const> pp_enabled_extension_names() const { return {pp_enabled_extension_names_, enabled_extension_count_};}
  spk::application_info const * p_application_info() const { return p_application_info_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::application_info const * p_application_info_= 0;// optional
  uint32_t enabled_layer_count_= 0;// optional
  char const * const * pp_enabled_layer_names_= 0;
  uint32_t enabled_extension_count_= 0;// optional
  char const * const * pp_enabled_extension_names_= 0;
};
static_assert(sizeof(instance_create_info) == sizeof(instance_create_info::underlying_type));

#ifdef VK_USE_PLATFORM_IOS_MVK
class ios_surface_create_info_mvk {
 public:
  using underlying_type = VkIOSSurfaceCreateInfoMVK;

  // mutators
  void set_p_view(void const * value) { p_view_ = value; }

  // accessors
  void const * p_view() const { return p_view_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IOS_SURFACE_CREATE_INFO_MVK;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  void const * p_view_= 0;
};
static_assert(sizeof(ios_surface_create_info_mvk) == sizeof(ios_surface_create_info_mvk::underlying_type));
#endif

class layer_properties {
 public:
  using underlying_type = VkLayerProperties;

  // mutators
  void set_layer_name(const std::array<char, VK_MAX_EXTENSION_NAME_SIZE> & value) { layer_name_ = value; }
  void set_spec_version(uint32_t value) { spec_version_ = value; }
  void set_implementation_version(uint32_t value) { implementation_version_ = value; }
  void set_description(const std::array<char, VK_MAX_DESCRIPTION_SIZE> & value) { description_ = value; }

  // accessors
  const std::array<char, VK_MAX_EXTENSION_NAME_SIZE> & layer_name() const { return layer_name_; }
  uint32_t spec_version() const { return spec_version_; }
  uint32_t implementation_version() const { return implementation_version_; }
  const std::array<char, VK_MAX_DESCRIPTION_SIZE> & description() const { return description_; }

 private:
  std::array<char, VK_MAX_EXTENSION_NAME_SIZE> layer_name_= {};
  uint32_t spec_version_= 0;
  uint32_t implementation_version_= 0;
  std::array<char, VK_MAX_DESCRIPTION_SIZE> description_= {};
};
static_assert(sizeof(layer_properties) == sizeof(layer_properties::underlying_type));

#ifdef VK_USE_PLATFORM_MACOS_MVK
class mac_os_surface_create_info_mvk {
 public:
  using underlying_type = VkMacOSSurfaceCreateInfoMVK;

  // mutators
  void set_p_view(void const * value) { p_view_ = value; }

  // accessors
  void const * p_view() const { return p_view_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MACOS_SURFACE_CREATE_INFO_MVK;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  void const * p_view_= 0;
};
static_assert(sizeof(mac_os_surface_create_info_mvk) == sizeof(mac_os_surface_create_info_mvk::underlying_type));
#endif

class mapped_memory_range {
 public:
  using underlying_type = VkMappedMemoryRange;

  // mutators
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_offset(uint64_t value) { offset_ = value; }
  void set_size(uint64_t value) { size_ = value; }

  // accessors
  spk::device_memory_ref memory() const { return memory_; }
  uint64_t offset() const { return offset_; }
  uint64_t size() const { return size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
  void* p_next_ = nullptr;

  spk::device_memory_ref memory_= 0;
  uint64_t offset_= 0;
  uint64_t size_= 0;
};
static_assert(sizeof(mapped_memory_range) == sizeof(mapped_memory_range::underlying_type));

class memory_allocate_flags_info {
 public:
  using underlying_type = VkMemoryAllocateFlagsInfo;

  // mutators
  void set_flags(spk::memory_allocate_flags value) { flags_ = value; }
  void set_device_mask(uint32_t value) { device_mask_ = value; }

  // accessors
  spk::memory_allocate_flags flags() const { return flags_; }
  uint32_t device_mask() const { return device_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO;
  void* p_next_ = nullptr;

  spk::memory_allocate_flags flags_= spk::memory_allocate_flags(0);// optional
  uint32_t device_mask_= 0;
};
static_assert(sizeof(memory_allocate_flags_info) == sizeof(memory_allocate_flags_info::underlying_type));
using memory_allocate_flags_info_khr = memory_allocate_flags_info;


class memory_allocate_info {
 public:
  using underlying_type = VkMemoryAllocateInfo;

  // mutators
  void set_allocation_size(uint64_t value) { allocation_size_ = value; }
  void set_memory_type_index(uint32_t value) { memory_type_index_ = value; }

  // accessors
  uint64_t allocation_size() const { return allocation_size_; }
  uint32_t memory_type_index() const { return memory_type_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
  void* p_next_ = nullptr;

  uint64_t allocation_size_= 0;
  uint32_t memory_type_index_= 0;
};
static_assert(sizeof(memory_allocate_info) == sizeof(memory_allocate_info::underlying_type));

class memory_barrier {
 public:
  using underlying_type = VkMemoryBarrier;

  // mutators
  void set_src_access_mask(spk::access_flags value) { src_access_mask_ = value; }
  void set_dst_access_mask(spk::access_flags value) { dst_access_mask_ = value; }

  // accessors
  spk::access_flags src_access_mask() const { return src_access_mask_; }
  spk::access_flags dst_access_mask() const { return dst_access_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  void* p_next_ = nullptr;

  spk::access_flags src_access_mask_= spk::access_flags(0);// optional
  spk::access_flags dst_access_mask_= spk::access_flags(0);// optional
};
static_assert(sizeof(memory_barrier) == sizeof(memory_barrier::underlying_type));

class memory_dedicated_allocate_info {
 public:
  using underlying_type = VkMemoryDedicatedAllocateInfo;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }
  spk::buffer_ref buffer() const { return buffer_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO;
  void* p_next_ = nullptr;

  spk::image_ref image_= 0;// optional
  spk::buffer_ref buffer_= 0;// optional
};
static_assert(sizeof(memory_dedicated_allocate_info) == sizeof(memory_dedicated_allocate_info::underlying_type));
using memory_dedicated_allocate_info_khr = memory_dedicated_allocate_info;


class memory_dedicated_requirements {
 public:
  using underlying_type = VkMemoryDedicatedRequirements;

  // mutators
  void set_prefers_dedicated_allocation(bool val) { prefers_dedicated_allocation_ = val; }
  void set_requires_dedicated_allocation(bool val) { requires_dedicated_allocation_ = val; }

  // accessors
  bool prefers_dedicated_allocation() const { return prefers_dedicated_allocation_; }
  bool requires_dedicated_allocation() const { return requires_dedicated_allocation_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS;
  void* p_next_ = nullptr;

  spk::bool32_t prefers_dedicated_allocation_= 0;
  spk::bool32_t requires_dedicated_allocation_= 0;
};
static_assert(sizeof(memory_dedicated_requirements) == sizeof(memory_dedicated_requirements::underlying_type));
using memory_dedicated_requirements_khr = memory_dedicated_requirements;


class memory_fd_properties_khr {
 public:
  using underlying_type = VkMemoryFdPropertiesKHR;

  // mutators
  void set_memory_type_bits(uint32_t value) { memory_type_bits_ = value; }

  // accessors
  uint32_t memory_type_bits() const { return memory_type_bits_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR;
  void* p_next_ = nullptr;

  uint32_t memory_type_bits_= 0;
};
static_assert(sizeof(memory_fd_properties_khr) == sizeof(memory_fd_properties_khr::underlying_type));

#ifdef VK_USE_PLATFORM_ANDROID_KHR
class memory_get_android_hardware_buffer_info_android {
 public:
  using underlying_type = VkMemoryGetAndroidHardwareBufferInfoANDROID;

  // mutators
  void set_memory(spk::device_memory_ref value) { memory_ = value; }

  // accessors
  spk::device_memory_ref memory() const { return memory_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_GET_ANDROID_HARDWARE_BUFFER_INFO_ANDROID;
  void* p_next_ = nullptr;

  spk::device_memory_ref memory_= 0;
};
static_assert(sizeof(memory_get_android_hardware_buffer_info_android) == sizeof(memory_get_android_hardware_buffer_info_android::underlying_type));
#endif

class memory_get_fd_info_khr {
 public:
  using underlying_type = VkMemoryGetFdInfoKHR;

  // mutators
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::device_memory_ref memory() const { return memory_; }
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::device_memory_ref memory_= 0;
  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);
};
static_assert(sizeof(memory_get_fd_info_khr) == sizeof(memory_get_fd_info_khr::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class memory_get_win_32handle_info_khr {
 public:
  using underlying_type = VkMemoryGetWin32HandleInfoKHR;

  // mutators
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::device_memory_ref memory() const { return memory_; }
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::device_memory_ref memory_= 0;
  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);
};
static_assert(sizeof(memory_get_win_32handle_info_khr) == sizeof(memory_get_win_32handle_info_khr::underlying_type));
#endif

class memory_heap {
 public:
  using underlying_type = VkMemoryHeap;

  // mutators
  void set_size(uint64_t value) { size_ = value; }
  void set_flags(spk::memory_heap_flags value) { flags_ = value; }

  // accessors
  uint64_t size() const { return size_; }
  spk::memory_heap_flags flags() const { return flags_; }

 private:
  uint64_t size_= 0;
  spk::memory_heap_flags flags_= spk::memory_heap_flags(0);// optional
};
static_assert(sizeof(memory_heap) == sizeof(memory_heap::underlying_type));

class memory_host_pointer_properties_ext {
 public:
  using underlying_type = VkMemoryHostPointerPropertiesEXT;

  // mutators
  void set_memory_type_bits(uint32_t value) { memory_type_bits_ = value; }

  // accessors
  uint32_t memory_type_bits() const { return memory_type_bits_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint32_t memory_type_bits_= 0;
};
static_assert(sizeof(memory_host_pointer_properties_ext) == sizeof(memory_host_pointer_properties_ext::underlying_type));

class memory_requirements {
 public:
  using underlying_type = VkMemoryRequirements;

  // mutators
  void set_size(uint64_t value) { size_ = value; }
  void set_alignment(uint64_t value) { alignment_ = value; }
  void set_memory_type_bits(uint32_t value) { memory_type_bits_ = value; }

  // accessors
  uint64_t size() const { return size_; }
  uint64_t alignment() const { return alignment_; }
  uint32_t memory_type_bits() const { return memory_type_bits_; }

 private:
  uint64_t size_= 0;
  uint64_t alignment_= 0;
  uint32_t memory_type_bits_= 0;
};
static_assert(sizeof(memory_requirements) == sizeof(memory_requirements::underlying_type));

class memory_type {
 public:
  using underlying_type = VkMemoryType;

  // mutators
  void set_property_flags(spk::memory_property_flags value) { property_flags_ = value; }
  void set_heap_index(uint32_t value) { heap_index_ = value; }

  // accessors
  spk::memory_property_flags property_flags() const { return property_flags_; }
  uint32_t heap_index() const { return heap_index_; }

 private:
  spk::memory_property_flags property_flags_= spk::memory_property_flags(0);// optional
  uint32_t heap_index_= 0;
};
static_assert(sizeof(memory_type) == sizeof(memory_type::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class memory_win_32handle_properties_khr {
 public:
  using underlying_type = VkMemoryWin32HandlePropertiesKHR;

  // mutators
  void set_memory_type_bits(uint32_t value) { memory_type_bits_ = value; }

  // accessors
  uint32_t memory_type_bits() const { return memory_type_bits_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_WIN32_HANDLE_PROPERTIES_KHR;
  void* p_next_ = nullptr;

  uint32_t memory_type_bits_= 0;
};
static_assert(sizeof(memory_win_32handle_properties_khr) == sizeof(memory_win_32handle_properties_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
class mir_surface_create_info_khr {
 public:
  using underlying_type = VkMirSurfaceCreateInfoKHR;

  // mutators
  void set_connection(MirConnection * value) { connection_ = value; }
  void set_mir_surface(MirSurface * value) { mir_surface_ = value; }

  // accessors
  MirConnection * connection() const { return connection_; }
  MirSurface * mir_surface() const { return mir_surface_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MIR_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  MirConnection * connection_= 0;
  MirSurface * mir_surface_= 0;
};
static_assert(sizeof(mir_surface_create_info_khr) == sizeof(mir_surface_create_info_khr::underlying_type));
#endif

class object_table_create_info_nvx {
 public:
  using underlying_type = VkObjectTableCreateInfoNVX;

  // mutators
  void set_object_entry_types(spk::array_view<spk::object_entry_type_nvx const> value) { p_object_entry_types_ = value.get(); object_count_ = value.size(); }
  void set_object_entry_counts(spk::array_view<uint32_t const> value) { p_object_entry_counts_ = value.get(); object_count_ = value.size(); }
  void set_object_entry_usage_flags(spk::array_view<spk::object_entry_usage_flags_nvx const> value) { p_object_entry_usage_flags_ = value.get(); object_count_ = value.size(); }
  void set_max_uniform_buffers_per_descriptor(uint32_t value) { max_uniform_buffers_per_descriptor_ = value; }
  void set_max_storage_buffers_per_descriptor(uint32_t value) { max_storage_buffers_per_descriptor_ = value; }
  void set_max_storage_images_per_descriptor(uint32_t value) { max_storage_images_per_descriptor_ = value; }
  void set_max_sampled_images_per_descriptor(uint32_t value) { max_sampled_images_per_descriptor_ = value; }
  void set_max_pipeline_layouts(uint32_t value) { max_pipeline_layouts_ = value; }

  // accessors
  spk::array_view<spk::object_entry_type_nvx const> object_entry_types() const { return {p_object_entry_types_, object_count_};}
  spk::array_view<uint32_t const> object_entry_counts() const { return {p_object_entry_counts_, object_count_};}
  spk::array_view<spk::object_entry_usage_flags_nvx const> object_entry_usage_flags() const { return {p_object_entry_usage_flags_, object_count_};}
  uint32_t max_uniform_buffers_per_descriptor() const { return max_uniform_buffers_per_descriptor_; }
  uint32_t max_storage_buffers_per_descriptor() const { return max_storage_buffers_per_descriptor_; }
  uint32_t max_storage_images_per_descriptor() const { return max_storage_images_per_descriptor_; }
  uint32_t max_sampled_images_per_descriptor() const { return max_sampled_images_per_descriptor_; }
  uint32_t max_pipeline_layouts() const { return max_pipeline_layouts_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_OBJECT_TABLE_CREATE_INFO_NVX;
  void* p_next_ = nullptr;

  uint32_t object_count_= 0;
  spk::object_entry_type_nvx const * p_object_entry_types_= 0;
  uint32_t const * p_object_entry_counts_= 0;
  spk::object_entry_usage_flags_nvx const * p_object_entry_usage_flags_= 0;
  uint32_t max_uniform_buffers_per_descriptor_= 0;
  uint32_t max_storage_buffers_per_descriptor_= 0;
  uint32_t max_storage_images_per_descriptor_= 0;
  uint32_t max_sampled_images_per_descriptor_= 0;
  uint32_t max_pipeline_layouts_= 0;
};
static_assert(sizeof(object_table_create_info_nvx) == sizeof(object_table_create_info_nvx::underlying_type));

class object_table_descriptor_set_entry_nvx {
 public:
  using underlying_type = VkObjectTableDescriptorSetEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }
  void set_pipeline_layout(spk::pipeline_layout_ref value) { pipeline_layout_ = value; }
  void set_descriptor_set(spk::descriptor_set_ref value) { descriptor_set_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }
  spk::pipeline_layout_ref pipeline_layout() const { return pipeline_layout_; }
  spk::descriptor_set_ref descriptor_set() const { return descriptor_set_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
  spk::pipeline_layout_ref pipeline_layout_= 0;
  spk::descriptor_set_ref descriptor_set_= 0;
};
static_assert(sizeof(object_table_descriptor_set_entry_nvx) == sizeof(object_table_descriptor_set_entry_nvx::underlying_type));

class object_table_entry_nvx {
 public:
  using underlying_type = VkObjectTableEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
};
static_assert(sizeof(object_table_entry_nvx) == sizeof(object_table_entry_nvx::underlying_type));

class object_table_index_buffer_entry_nvx {
 public:
  using underlying_type = VkObjectTableIndexBufferEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }
  void set_index_type(spk::index_type value) { index_type_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }
  spk::buffer_ref buffer() const { return buffer_; }
  spk::index_type index_type() const { return index_type_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
  spk::buffer_ref buffer_= 0;
  spk::index_type index_type_= spk::index_type(0);
};
static_assert(sizeof(object_table_index_buffer_entry_nvx) == sizeof(object_table_index_buffer_entry_nvx::underlying_type));

class object_table_pipeline_entry_nvx {
 public:
  using underlying_type = VkObjectTablePipelineEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }
  void set_pipeline(spk::pipeline_ref value) { pipeline_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }
  spk::pipeline_ref pipeline() const { return pipeline_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
  spk::pipeline_ref pipeline_= 0;
};
static_assert(sizeof(object_table_pipeline_entry_nvx) == sizeof(object_table_pipeline_entry_nvx::underlying_type));

class object_table_push_constant_entry_nvx {
 public:
  using underlying_type = VkObjectTablePushConstantEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }
  void set_pipeline_layout(spk::pipeline_layout_ref value) { pipeline_layout_ = value; }
  void set_stage_flags(spk::shader_stage_flags value) { stage_flags_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }
  spk::pipeline_layout_ref pipeline_layout() const { return pipeline_layout_; }
  spk::shader_stage_flags stage_flags() const { return stage_flags_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
  spk::pipeline_layout_ref pipeline_layout_= 0;
  spk::shader_stage_flags stage_flags_= spk::shader_stage_flags(0);
};
static_assert(sizeof(object_table_push_constant_entry_nvx) == sizeof(object_table_push_constant_entry_nvx::underlying_type));

class object_table_vertex_buffer_entry_nvx {
 public:
  using underlying_type = VkObjectTableVertexBufferEntryNVX;

  // mutators
  void set_type(spk::object_entry_type_nvx value) { type_ = value; }
  void set_flags(spk::object_entry_usage_flags_nvx value) { flags_ = value; }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }

  // accessors
  spk::object_entry_type_nvx type() const { return type_; }
  spk::object_entry_usage_flags_nvx flags() const { return flags_; }
  spk::buffer_ref buffer() const { return buffer_; }

 private:
  spk::object_entry_type_nvx type_= spk::object_entry_type_nvx(0);
  spk::object_entry_usage_flags_nvx flags_= spk::object_entry_usage_flags_nvx(0);
  spk::buffer_ref buffer_= 0;
};
static_assert(sizeof(object_table_vertex_buffer_entry_nvx) == sizeof(object_table_vertex_buffer_entry_nvx::underlying_type));

class offset_2d {
 public:
  using underlying_type = VkOffset2D;

  // mutators
  void set_x(int32_t value) { x_ = value; }
  void set_y(int32_t value) { y_ = value; }

  // accessors
  int32_t x() const { return x_; }
  int32_t y() const { return y_; }

 private:
  int32_t x_= 0;
  int32_t y_= 0;
};
static_assert(sizeof(offset_2d) == sizeof(offset_2d::underlying_type));

class offset_3d {
 public:
  using underlying_type = VkOffset3D;

  // mutators
  void set_x(int32_t value) { x_ = value; }
  void set_y(int32_t value) { y_ = value; }
  void set_z(int32_t value) { z_ = value; }

  // accessors
  int32_t x() const { return x_; }
  int32_t y() const { return y_; }
  int32_t z() const { return z_; }

 private:
  int32_t x_= 0;
  int32_t y_= 0;
  int32_t z_= 0;
};
static_assert(sizeof(offset_3d) == sizeof(offset_3d::underlying_type));

class past_presentation_timing_google {
 public:
  using underlying_type = VkPastPresentationTimingGOOGLE;

  // mutators
  void set_present_id(uint32_t value) { present_id_ = value; }
  void set_desired_present_time(uint64_t value) { desired_present_time_ = value; }
  void set_actual_present_time(uint64_t value) { actual_present_time_ = value; }
  void set_earliest_present_time(uint64_t value) { earliest_present_time_ = value; }
  void set_present_margin(uint64_t value) { present_margin_ = value; }

  // accessors
  uint32_t present_id() const { return present_id_; }
  uint64_t desired_present_time() const { return desired_present_time_; }
  uint64_t actual_present_time() const { return actual_present_time_; }
  uint64_t earliest_present_time() const { return earliest_present_time_; }
  uint64_t present_margin() const { return present_margin_; }

 private:
  uint32_t present_id_= 0;
  uint64_t desired_present_time_= 0;
  uint64_t actual_present_time_= 0;
  uint64_t earliest_present_time_= 0;
  uint64_t present_margin_= 0;
};
static_assert(sizeof(past_presentation_timing_google) == sizeof(past_presentation_timing_google::underlying_type));

class physical_device_16bit_storage_features {
 public:
  using underlying_type = VkPhysicalDevice16BitStorageFeatures;

  // mutators
  void set_storage_buffer_16bit_access(bool val) { storage_buffer_16bit_access_ = val; }
  void set_uniform_and_storage_buffer_16bit_access(bool val) { uniform_and_storage_buffer_16bit_access_ = val; }
  void set_storage_push_constant_16(bool val) { storage_push_constant_16_ = val; }
  void set_storage_input_output_16(bool val) { storage_input_output_16_ = val; }

  // accessors
  bool storage_buffer_16bit_access() const { return storage_buffer_16bit_access_; }
  bool uniform_and_storage_buffer_16bit_access() const { return uniform_and_storage_buffer_16bit_access_; }
  bool storage_push_constant_16() const { return storage_push_constant_16_; }
  bool storage_input_output_16() const { return storage_input_output_16_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t storage_buffer_16bit_access_= 0;
  spk::bool32_t uniform_and_storage_buffer_16bit_access_= 0;
  spk::bool32_t storage_push_constant_16_= 0;
  spk::bool32_t storage_input_output_16_= 0;
};
static_assert(sizeof(physical_device_16bit_storage_features) == sizeof(physical_device_16bit_storage_features::underlying_type));
using physical_device_16bit_storage_features_khr = physical_device_16bit_storage_features;


class physical_device_8bit_storage_features_khr {
 public:
  using underlying_type = VkPhysicalDevice8BitStorageFeaturesKHR;

  // mutators
  void set_storage_buffer_8bit_access(bool val) { storage_buffer_8bit_access_ = val; }
  void set_uniform_and_storage_buffer_8bit_access(bool val) { uniform_and_storage_buffer_8bit_access_ = val; }
  void set_storage_push_constant_8(bool val) { storage_push_constant_8_ = val; }

  // accessors
  bool storage_buffer_8bit_access() const { return storage_buffer_8bit_access_; }
  bool uniform_and_storage_buffer_8bit_access() const { return uniform_and_storage_buffer_8bit_access_; }
  bool storage_push_constant_8() const { return storage_push_constant_8_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES_KHR;
  void* p_next_ = nullptr;

  spk::bool32_t storage_buffer_8bit_access_= 0;
  spk::bool32_t uniform_and_storage_buffer_8bit_access_= 0;
  spk::bool32_t storage_push_constant_8_= 0;
};
static_assert(sizeof(physical_device_8bit_storage_features_khr) == sizeof(physical_device_8bit_storage_features_khr::underlying_type));

class physical_device_blend_operation_advanced_features_ext {
 public:
  using underlying_type = VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;

  // mutators
  void set_advanced_blend_coherent_operations(bool val) { advanced_blend_coherent_operations_ = val; }

  // accessors
  bool advanced_blend_coherent_operations() const { return advanced_blend_coherent_operations_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t advanced_blend_coherent_operations_= 0;
};
static_assert(sizeof(physical_device_blend_operation_advanced_features_ext) == sizeof(physical_device_blend_operation_advanced_features_ext::underlying_type));

class physical_device_blend_operation_advanced_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;

  // mutators
  void set_advanced_blend_independent_blend(bool val) { advanced_blend_independent_blend_ = val; }
  void set_advanced_blend_non_premultiplied_src_color(bool val) { advanced_blend_non_premultiplied_src_color_ = val; }
  void set_advanced_blend_non_premultiplied_dst_color(bool val) { advanced_blend_non_premultiplied_dst_color_ = val; }
  void set_advanced_blend_correlated_overlap(bool val) { advanced_blend_correlated_overlap_ = val; }
  void set_advanced_blend_all_operations(bool val) { advanced_blend_all_operations_ = val; }
  void set_advanced_blend_max_color_attachments(uint32_t value) { advanced_blend_max_color_attachments_ = value; }

  // accessors
  bool advanced_blend_independent_blend() const { return advanced_blend_independent_blend_; }
  bool advanced_blend_non_premultiplied_src_color() const { return advanced_blend_non_premultiplied_src_color_; }
  bool advanced_blend_non_premultiplied_dst_color() const { return advanced_blend_non_premultiplied_dst_color_; }
  bool advanced_blend_correlated_overlap() const { return advanced_blend_correlated_overlap_; }
  bool advanced_blend_all_operations() const { return advanced_blend_all_operations_; }
  uint32_t advanced_blend_max_color_attachments() const { return advanced_blend_max_color_attachments_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint32_t advanced_blend_max_color_attachments_= 0;
  spk::bool32_t advanced_blend_independent_blend_= 0;
  spk::bool32_t advanced_blend_non_premultiplied_src_color_= 0;
  spk::bool32_t advanced_blend_non_premultiplied_dst_color_= 0;
  spk::bool32_t advanced_blend_correlated_overlap_= 0;
  spk::bool32_t advanced_blend_all_operations_= 0;
};
static_assert(sizeof(physical_device_blend_operation_advanced_properties_ext) == sizeof(physical_device_blend_operation_advanced_properties_ext::underlying_type));

class physical_device_conditional_rendering_features_ext {
 public:
  using underlying_type = VkPhysicalDeviceConditionalRenderingFeaturesEXT;

  // mutators
  void set_conditional_rendering(bool val) { conditional_rendering_ = val; }
  void set_inherited_conditional_rendering(bool val) { inherited_conditional_rendering_ = val; }

  // accessors
  bool conditional_rendering() const { return conditional_rendering_; }
  bool inherited_conditional_rendering() const { return inherited_conditional_rendering_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t conditional_rendering_= 0;
  spk::bool32_t inherited_conditional_rendering_= 0;
};
static_assert(sizeof(physical_device_conditional_rendering_features_ext) == sizeof(physical_device_conditional_rendering_features_ext::underlying_type));

class physical_device_conservative_rasterization_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceConservativeRasterizationPropertiesEXT;

  // mutators
  void set_primitive_underestimation(bool val) { primitive_underestimation_ = val; }
  void set_conservative_point_and_line_rasterization(bool val) { conservative_point_and_line_rasterization_ = val; }
  void set_degenerate_triangles_rasterized(bool val) { degenerate_triangles_rasterized_ = val; }
  void set_degenerate_lines_rasterized(bool val) { degenerate_lines_rasterized_ = val; }
  void set_fully_covered_fragment_shader_input_variable(bool val) { fully_covered_fragment_shader_input_variable_ = val; }
  void set_conservative_rasterization_post_depth_coverage(bool val) { conservative_rasterization_post_depth_coverage_ = val; }
  void set_primitive_overestimation_size(float value) { primitive_overestimation_size_ = value; }
  void set_max_extra_primitive_overestimation_size(float value) { max_extra_primitive_overestimation_size_ = value; }
  void set_extra_primitive_overestimation_size_granularity(float value) { extra_primitive_overestimation_size_granularity_ = value; }

  // accessors
  bool primitive_underestimation() const { return primitive_underestimation_; }
  bool conservative_point_and_line_rasterization() const { return conservative_point_and_line_rasterization_; }
  bool degenerate_triangles_rasterized() const { return degenerate_triangles_rasterized_; }
  bool degenerate_lines_rasterized() const { return degenerate_lines_rasterized_; }
  bool fully_covered_fragment_shader_input_variable() const { return fully_covered_fragment_shader_input_variable_; }
  bool conservative_rasterization_post_depth_coverage() const { return conservative_rasterization_post_depth_coverage_; }
  float primitive_overestimation_size() const { return primitive_overestimation_size_; }
  float max_extra_primitive_overestimation_size() const { return max_extra_primitive_overestimation_size_; }
  float extra_primitive_overestimation_size_granularity() const { return extra_primitive_overestimation_size_granularity_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  float primitive_overestimation_size_= 0;
  float max_extra_primitive_overestimation_size_= 0;
  float extra_primitive_overestimation_size_granularity_= 0;
  spk::bool32_t primitive_underestimation_= 0;
  spk::bool32_t conservative_point_and_line_rasterization_= 0;
  spk::bool32_t degenerate_triangles_rasterized_= 0;
  spk::bool32_t degenerate_lines_rasterized_= 0;
  spk::bool32_t fully_covered_fragment_shader_input_variable_= 0;
  spk::bool32_t conservative_rasterization_post_depth_coverage_= 0;
};
static_assert(sizeof(physical_device_conservative_rasterization_properties_ext) == sizeof(physical_device_conservative_rasterization_properties_ext::underlying_type));

class physical_device_descriptor_indexing_features_ext {
 public:
  using underlying_type = VkPhysicalDeviceDescriptorIndexingFeaturesEXT;

  // mutators
  void set_shader_input_attachment_array_dynamic_indexing(bool val) { shader_input_attachment_array_dynamic_indexing_ = val; }
  void set_shader_uniform_texel_buffer_array_dynamic_indexing(bool val) { shader_uniform_texel_buffer_array_dynamic_indexing_ = val; }
  void set_shader_storage_texel_buffer_array_dynamic_indexing(bool val) { shader_storage_texel_buffer_array_dynamic_indexing_ = val; }
  void set_shader_uniform_buffer_array_non_uniform_indexing(bool val) { shader_uniform_buffer_array_non_uniform_indexing_ = val; }
  void set_shader_sampled_image_array_non_uniform_indexing(bool val) { shader_sampled_image_array_non_uniform_indexing_ = val; }
  void set_shader_storage_buffer_array_non_uniform_indexing(bool val) { shader_storage_buffer_array_non_uniform_indexing_ = val; }
  void set_shader_storage_image_array_non_uniform_indexing(bool val) { shader_storage_image_array_non_uniform_indexing_ = val; }
  void set_shader_input_attachment_array_non_uniform_indexing(bool val) { shader_input_attachment_array_non_uniform_indexing_ = val; }
  void set_shader_uniform_texel_buffer_array_non_uniform_indexing(bool val) { shader_uniform_texel_buffer_array_non_uniform_indexing_ = val; }
  void set_shader_storage_texel_buffer_array_non_uniform_indexing(bool val) { shader_storage_texel_buffer_array_non_uniform_indexing_ = val; }
  void set_descriptor_binding_uniform_buffer_update_after_bind(bool val) { descriptor_binding_uniform_buffer_update_after_bind_ = val; }
  void set_descriptor_binding_sampled_image_update_after_bind(bool val) { descriptor_binding_sampled_image_update_after_bind_ = val; }
  void set_descriptor_binding_storage_image_update_after_bind(bool val) { descriptor_binding_storage_image_update_after_bind_ = val; }
  void set_descriptor_binding_storage_buffer_update_after_bind(bool val) { descriptor_binding_storage_buffer_update_after_bind_ = val; }
  void set_descriptor_binding_uniform_texel_buffer_update_after_bind(bool val) { descriptor_binding_uniform_texel_buffer_update_after_bind_ = val; }
  void set_descriptor_binding_storage_texel_buffer_update_after_bind(bool val) { descriptor_binding_storage_texel_buffer_update_after_bind_ = val; }
  void set_descriptor_binding_update_unused_while_pending(bool val) { descriptor_binding_update_unused_while_pending_ = val; }
  void set_descriptor_binding_partially_bound(bool val) { descriptor_binding_partially_bound_ = val; }
  void set_descriptor_binding_variable_descriptor_count(bool val) { descriptor_binding_variable_descriptor_count_ = val; }
  void set_runtime_descriptor_array(bool val) { runtime_descriptor_array_ = val; }

  // accessors
  bool shader_input_attachment_array_dynamic_indexing() const { return shader_input_attachment_array_dynamic_indexing_; }
  bool shader_uniform_texel_buffer_array_dynamic_indexing() const { return shader_uniform_texel_buffer_array_dynamic_indexing_; }
  bool shader_storage_texel_buffer_array_dynamic_indexing() const { return shader_storage_texel_buffer_array_dynamic_indexing_; }
  bool shader_uniform_buffer_array_non_uniform_indexing() const { return shader_uniform_buffer_array_non_uniform_indexing_; }
  bool shader_sampled_image_array_non_uniform_indexing() const { return shader_sampled_image_array_non_uniform_indexing_; }
  bool shader_storage_buffer_array_non_uniform_indexing() const { return shader_storage_buffer_array_non_uniform_indexing_; }
  bool shader_storage_image_array_non_uniform_indexing() const { return shader_storage_image_array_non_uniform_indexing_; }
  bool shader_input_attachment_array_non_uniform_indexing() const { return shader_input_attachment_array_non_uniform_indexing_; }
  bool shader_uniform_texel_buffer_array_non_uniform_indexing() const { return shader_uniform_texel_buffer_array_non_uniform_indexing_; }
  bool shader_storage_texel_buffer_array_non_uniform_indexing() const { return shader_storage_texel_buffer_array_non_uniform_indexing_; }
  bool descriptor_binding_uniform_buffer_update_after_bind() const { return descriptor_binding_uniform_buffer_update_after_bind_; }
  bool descriptor_binding_sampled_image_update_after_bind() const { return descriptor_binding_sampled_image_update_after_bind_; }
  bool descriptor_binding_storage_image_update_after_bind() const { return descriptor_binding_storage_image_update_after_bind_; }
  bool descriptor_binding_storage_buffer_update_after_bind() const { return descriptor_binding_storage_buffer_update_after_bind_; }
  bool descriptor_binding_uniform_texel_buffer_update_after_bind() const { return descriptor_binding_uniform_texel_buffer_update_after_bind_; }
  bool descriptor_binding_storage_texel_buffer_update_after_bind() const { return descriptor_binding_storage_texel_buffer_update_after_bind_; }
  bool descriptor_binding_update_unused_while_pending() const { return descriptor_binding_update_unused_while_pending_; }
  bool descriptor_binding_partially_bound() const { return descriptor_binding_partially_bound_; }
  bool descriptor_binding_variable_descriptor_count() const { return descriptor_binding_variable_descriptor_count_; }
  bool runtime_descriptor_array() const { return runtime_descriptor_array_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t shader_input_attachment_array_dynamic_indexing_= 0;
  spk::bool32_t shader_uniform_texel_buffer_array_dynamic_indexing_= 0;
  spk::bool32_t shader_storage_texel_buffer_array_dynamic_indexing_= 0;
  spk::bool32_t shader_uniform_buffer_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_sampled_image_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_storage_buffer_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_storage_image_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_input_attachment_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_uniform_texel_buffer_array_non_uniform_indexing_= 0;
  spk::bool32_t shader_storage_texel_buffer_array_non_uniform_indexing_= 0;
  spk::bool32_t descriptor_binding_uniform_buffer_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_sampled_image_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_storage_image_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_storage_buffer_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_uniform_texel_buffer_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_storage_texel_buffer_update_after_bind_= 0;
  spk::bool32_t descriptor_binding_update_unused_while_pending_= 0;
  spk::bool32_t descriptor_binding_partially_bound_= 0;
  spk::bool32_t descriptor_binding_variable_descriptor_count_= 0;
  spk::bool32_t runtime_descriptor_array_= 0;
};
static_assert(sizeof(physical_device_descriptor_indexing_features_ext) == sizeof(physical_device_descriptor_indexing_features_ext::underlying_type));

class physical_device_descriptor_indexing_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceDescriptorIndexingPropertiesEXT;

  // mutators
  void set_shader_uniform_buffer_array_non_uniform_indexing_native(bool val) { shader_uniform_buffer_array_non_uniform_indexing_native_ = val; }
  void set_shader_sampled_image_array_non_uniform_indexing_native(bool val) { shader_sampled_image_array_non_uniform_indexing_native_ = val; }
  void set_shader_storage_buffer_array_non_uniform_indexing_native(bool val) { shader_storage_buffer_array_non_uniform_indexing_native_ = val; }
  void set_shader_storage_image_array_non_uniform_indexing_native(bool val) { shader_storage_image_array_non_uniform_indexing_native_ = val; }
  void set_shader_input_attachment_array_non_uniform_indexing_native(bool val) { shader_input_attachment_array_non_uniform_indexing_native_ = val; }
  void set_robust_buffer_access_update_after_bind(bool val) { robust_buffer_access_update_after_bind_ = val; }
  void set_quad_divergent_implicit_lod(bool val) { quad_divergent_implicit_lod_ = val; }
  void set_max_update_after_bind_descriptors_in_all_pools(uint32_t value) { max_update_after_bind_descriptors_in_all_pools_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_samplers(uint32_t value) { max_per_stage_descriptor_update_after_bind_samplers_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_uniform_buffers(uint32_t value) { max_per_stage_descriptor_update_after_bind_uniform_buffers_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_storage_buffers(uint32_t value) { max_per_stage_descriptor_update_after_bind_storage_buffers_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_sampled_images(uint32_t value) { max_per_stage_descriptor_update_after_bind_sampled_images_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_storage_images(uint32_t value) { max_per_stage_descriptor_update_after_bind_storage_images_ = value; }
  void set_max_per_stage_descriptor_update_after_bind_input_attachments(uint32_t value) { max_per_stage_descriptor_update_after_bind_input_attachments_ = value; }
  void set_max_per_stage_update_after_bind_resources(uint32_t value) { max_per_stage_update_after_bind_resources_ = value; }
  void set_max_descriptor_set_update_after_bind_samplers(uint32_t value) { max_descriptor_set_update_after_bind_samplers_ = value; }
  void set_max_descriptor_set_update_after_bind_uniform_buffers(uint32_t value) { max_descriptor_set_update_after_bind_uniform_buffers_ = value; }
  void set_max_descriptor_set_update_after_bind_uniform_buffers_dynamic(uint32_t value) { max_descriptor_set_update_after_bind_uniform_buffers_dynamic_ = value; }
  void set_max_descriptor_set_update_after_bind_storage_buffers(uint32_t value) { max_descriptor_set_update_after_bind_storage_buffers_ = value; }
  void set_max_descriptor_set_update_after_bind_storage_buffers_dynamic(uint32_t value) { max_descriptor_set_update_after_bind_storage_buffers_dynamic_ = value; }
  void set_max_descriptor_set_update_after_bind_sampled_images(uint32_t value) { max_descriptor_set_update_after_bind_sampled_images_ = value; }
  void set_max_descriptor_set_update_after_bind_storage_images(uint32_t value) { max_descriptor_set_update_after_bind_storage_images_ = value; }
  void set_max_descriptor_set_update_after_bind_input_attachments(uint32_t value) { max_descriptor_set_update_after_bind_input_attachments_ = value; }

  // accessors
  bool shader_uniform_buffer_array_non_uniform_indexing_native() const { return shader_uniform_buffer_array_non_uniform_indexing_native_; }
  bool shader_sampled_image_array_non_uniform_indexing_native() const { return shader_sampled_image_array_non_uniform_indexing_native_; }
  bool shader_storage_buffer_array_non_uniform_indexing_native() const { return shader_storage_buffer_array_non_uniform_indexing_native_; }
  bool shader_storage_image_array_non_uniform_indexing_native() const { return shader_storage_image_array_non_uniform_indexing_native_; }
  bool shader_input_attachment_array_non_uniform_indexing_native() const { return shader_input_attachment_array_non_uniform_indexing_native_; }
  bool robust_buffer_access_update_after_bind() const { return robust_buffer_access_update_after_bind_; }
  bool quad_divergent_implicit_lod() const { return quad_divergent_implicit_lod_; }
  uint32_t max_update_after_bind_descriptors_in_all_pools() const { return max_update_after_bind_descriptors_in_all_pools_; }
  uint32_t max_per_stage_descriptor_update_after_bind_samplers() const { return max_per_stage_descriptor_update_after_bind_samplers_; }
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers() const { return max_per_stage_descriptor_update_after_bind_uniform_buffers_; }
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers() const { return max_per_stage_descriptor_update_after_bind_storage_buffers_; }
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images() const { return max_per_stage_descriptor_update_after_bind_sampled_images_; }
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images() const { return max_per_stage_descriptor_update_after_bind_storage_images_; }
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments() const { return max_per_stage_descriptor_update_after_bind_input_attachments_; }
  uint32_t max_per_stage_update_after_bind_resources() const { return max_per_stage_update_after_bind_resources_; }
  uint32_t max_descriptor_set_update_after_bind_samplers() const { return max_descriptor_set_update_after_bind_samplers_; }
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers() const { return max_descriptor_set_update_after_bind_uniform_buffers_; }
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic() const { return max_descriptor_set_update_after_bind_uniform_buffers_dynamic_; }
  uint32_t max_descriptor_set_update_after_bind_storage_buffers() const { return max_descriptor_set_update_after_bind_storage_buffers_; }
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic() const { return max_descriptor_set_update_after_bind_storage_buffers_dynamic_; }
  uint32_t max_descriptor_set_update_after_bind_sampled_images() const { return max_descriptor_set_update_after_bind_sampled_images_; }
  uint32_t max_descriptor_set_update_after_bind_storage_images() const { return max_descriptor_set_update_after_bind_storage_images_; }
  uint32_t max_descriptor_set_update_after_bind_input_attachments() const { return max_descriptor_set_update_after_bind_input_attachments_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint32_t max_update_after_bind_descriptors_in_all_pools_= 0;
  spk::bool32_t shader_uniform_buffer_array_non_uniform_indexing_native_= 0;
  spk::bool32_t shader_sampled_image_array_non_uniform_indexing_native_= 0;
  spk::bool32_t shader_storage_buffer_array_non_uniform_indexing_native_= 0;
  spk::bool32_t shader_storage_image_array_non_uniform_indexing_native_= 0;
  spk::bool32_t shader_input_attachment_array_non_uniform_indexing_native_= 0;
  spk::bool32_t robust_buffer_access_update_after_bind_= 0;
  spk::bool32_t quad_divergent_implicit_lod_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_samplers_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_uniform_buffers_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_buffers_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_sampled_images_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_storage_images_= 0;
  uint32_t max_per_stage_descriptor_update_after_bind_input_attachments_= 0;
  uint32_t max_per_stage_update_after_bind_resources_= 0;
  uint32_t max_descriptor_set_update_after_bind_samplers_= 0;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_= 0;
  uint32_t max_descriptor_set_update_after_bind_uniform_buffers_dynamic_= 0;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_= 0;
  uint32_t max_descriptor_set_update_after_bind_storage_buffers_dynamic_= 0;
  uint32_t max_descriptor_set_update_after_bind_sampled_images_= 0;
  uint32_t max_descriptor_set_update_after_bind_storage_images_= 0;
  uint32_t max_descriptor_set_update_after_bind_input_attachments_= 0;
};
static_assert(sizeof(physical_device_descriptor_indexing_properties_ext) == sizeof(physical_device_descriptor_indexing_properties_ext::underlying_type));

class physical_device_discard_rectangle_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceDiscardRectanglePropertiesEXT;

  // mutators
  void set_max_discard_rectangles(uint32_t value) { max_discard_rectangles_ = value; }

  // accessors
  uint32_t max_discard_rectangles() const { return max_discard_rectangles_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint32_t max_discard_rectangles_= 0;
};
static_assert(sizeof(physical_device_discard_rectangle_properties_ext) == sizeof(physical_device_discard_rectangle_properties_ext::underlying_type));

class physical_device_external_buffer_info {
 public:
  using underlying_type = VkPhysicalDeviceExternalBufferInfo;

  // mutators
  void set_flags(spk::buffer_create_flags value) { flags_ = value; }
  void set_usage(spk::buffer_usage_flags value) { usage_ = value; }
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::buffer_create_flags flags() const { return flags_; }
  spk::buffer_usage_flags usage() const { return usage_; }
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO;
  void* p_next_ = nullptr;

  spk::buffer_create_flags flags_= spk::buffer_create_flags(0);// optional
  spk::buffer_usage_flags usage_= spk::buffer_usage_flags(0);
  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);
};
static_assert(sizeof(physical_device_external_buffer_info) == sizeof(physical_device_external_buffer_info::underlying_type));
using physical_device_external_buffer_info_khr = physical_device_external_buffer_info;


class physical_device_external_fence_info {
 public:
  using underlying_type = VkPhysicalDeviceExternalFenceInfo;

  // mutators
  void set_handle_type(spk::external_fence_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::external_fence_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO;
  void* p_next_ = nullptr;

  spk::external_fence_handle_type_flags handle_type_= spk::external_fence_handle_type_flags(0);
};
static_assert(sizeof(physical_device_external_fence_info) == sizeof(physical_device_external_fence_info::underlying_type));
using physical_device_external_fence_info_khr = physical_device_external_fence_info;


class physical_device_external_image_format_info {
 public:
  using underlying_type = VkPhysicalDeviceExternalImageFormatInfo;

  // mutators
  void set_handle_type(spk::external_memory_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::external_memory_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO;
  void* p_next_ = nullptr;

  spk::external_memory_handle_type_flags handle_type_= spk::external_memory_handle_type_flags(0);// optional
};
static_assert(sizeof(physical_device_external_image_format_info) == sizeof(physical_device_external_image_format_info::underlying_type));
using physical_device_external_image_format_info_khr = physical_device_external_image_format_info;


class physical_device_external_memory_host_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceExternalMemoryHostPropertiesEXT;

  // mutators
  void set_min_imported_host_pointer_alignment(uint64_t value) { min_imported_host_pointer_alignment_ = value; }

  // accessors
  uint64_t min_imported_host_pointer_alignment() const { return min_imported_host_pointer_alignment_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint64_t min_imported_host_pointer_alignment_= 0;
};
static_assert(sizeof(physical_device_external_memory_host_properties_ext) == sizeof(physical_device_external_memory_host_properties_ext::underlying_type));

class physical_device_external_semaphore_info {
 public:
  using underlying_type = VkPhysicalDeviceExternalSemaphoreInfo;

  // mutators
  void set_handle_type(spk::external_semaphore_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::external_semaphore_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO;
  void* p_next_ = nullptr;

  spk::external_semaphore_handle_type_flags handle_type_= spk::external_semaphore_handle_type_flags(0);
};
static_assert(sizeof(physical_device_external_semaphore_info) == sizeof(physical_device_external_semaphore_info::underlying_type));
using physical_device_external_semaphore_info_khr = physical_device_external_semaphore_info;


class physical_device_features {
 public:
  using underlying_type = VkPhysicalDeviceFeatures;

  // mutators
  void set_robust_buffer_access(bool val) { robust_buffer_access_ = val; }
  void set_full_draw_index_uint_32(bool val) { full_draw_index_uint_32_ = val; }
  void set_image_cube_array(bool val) { image_cube_array_ = val; }
  void set_independent_blend(bool val) { independent_blend_ = val; }
  void set_geometry_shader(bool val) { geometry_shader_ = val; }
  void set_tessellation_shader(bool val) { tessellation_shader_ = val; }
  void set_sample_rate_shading(bool val) { sample_rate_shading_ = val; }
  void set_dual_src_blend(bool val) { dual_src_blend_ = val; }
  void set_logic_op(bool val) { logic_op_ = val; }
  void set_multi_draw_indirect(bool val) { multi_draw_indirect_ = val; }
  void set_draw_indirect_first_instance(bool val) { draw_indirect_first_instance_ = val; }
  void set_depth_clamp(bool val) { depth_clamp_ = val; }
  void set_depth_bias_clamp(bool val) { depth_bias_clamp_ = val; }
  void set_fill_mode_non_solid(bool val) { fill_mode_non_solid_ = val; }
  void set_depth_bounds(bool val) { depth_bounds_ = val; }
  void set_wide_lines(bool val) { wide_lines_ = val; }
  void set_large_points(bool val) { large_points_ = val; }
  void set_alpha_to_one(bool val) { alpha_to_one_ = val; }
  void set_multi_viewport(bool val) { multi_viewport_ = val; }
  void set_sampler_anisotropy(bool val) { sampler_anisotropy_ = val; }
  void set_texture_compression_etc2(bool val) { texture_compression_etc2_ = val; }
  void set_texture_compression_astc_ldr(bool val) { texture_compression_astc_ldr_ = val; }
  void set_texture_compression_bc(bool val) { texture_compression_bc_ = val; }
  void set_occlusion_query_precise(bool val) { occlusion_query_precise_ = val; }
  void set_pipeline_statistics_query(bool val) { pipeline_statistics_query_ = val; }
  void set_vertex_pipeline_stores_and_atomics(bool val) { vertex_pipeline_stores_and_atomics_ = val; }
  void set_fragment_stores_and_atomics(bool val) { fragment_stores_and_atomics_ = val; }
  void set_shader_tessellation_and_geometry_point_size(bool val) { shader_tessellation_and_geometry_point_size_ = val; }
  void set_shader_image_gather_extended(bool val) { shader_image_gather_extended_ = val; }
  void set_shader_storage_image_extended_formats(bool val) { shader_storage_image_extended_formats_ = val; }
  void set_shader_storage_image_multisample(bool val) { shader_storage_image_multisample_ = val; }
  void set_shader_storage_image_read_without_format(bool val) { shader_storage_image_read_without_format_ = val; }
  void set_shader_storage_image_write_without_format(bool val) { shader_storage_image_write_without_format_ = val; }
  void set_shader_uniform_buffer_array_dynamic_indexing(bool val) { shader_uniform_buffer_array_dynamic_indexing_ = val; }
  void set_shader_sampled_image_array_dynamic_indexing(bool val) { shader_sampled_image_array_dynamic_indexing_ = val; }
  void set_shader_storage_buffer_array_dynamic_indexing(bool val) { shader_storage_buffer_array_dynamic_indexing_ = val; }
  void set_shader_storage_image_array_dynamic_indexing(bool val) { shader_storage_image_array_dynamic_indexing_ = val; }
  void set_shader_clip_distance(bool val) { shader_clip_distance_ = val; }
  void set_shader_cull_distance(bool val) { shader_cull_distance_ = val; }
  void set_shader_float_64(bool val) { shader_float_64_ = val; }
  void set_shader_int_64(bool val) { shader_int_64_ = val; }
  void set_shader_int_16(bool val) { shader_int_16_ = val; }
  void set_shader_resource_residency(bool val) { shader_resource_residency_ = val; }
  void set_shader_resource_min_lod(bool val) { shader_resource_min_lod_ = val; }
  void set_sparse_binding(bool val) { sparse_binding_ = val; }
  void set_sparse_residency_buffer(bool val) { sparse_residency_buffer_ = val; }
  void set_sparse_residency_image_2d(bool val) { sparse_residency_image_2d_ = val; }
  void set_sparse_residency_image_3d(bool val) { sparse_residency_image_3d_ = val; }
  void set_sparse_residency_2samples(bool val) { sparse_residency_2samples_ = val; }
  void set_sparse_residency_4samples(bool val) { sparse_residency_4samples_ = val; }
  void set_sparse_residency_8samples(bool val) { sparse_residency_8samples_ = val; }
  void set_sparse_residency_16samples(bool val) { sparse_residency_16samples_ = val; }
  void set_sparse_residency_aliased(bool val) { sparse_residency_aliased_ = val; }
  void set_variable_multisample_rate(bool val) { variable_multisample_rate_ = val; }
  void set_inherited_queries(bool val) { inherited_queries_ = val; }

  // accessors
  bool robust_buffer_access() const { return robust_buffer_access_; }
  bool full_draw_index_uint_32() const { return full_draw_index_uint_32_; }
  bool image_cube_array() const { return image_cube_array_; }
  bool independent_blend() const { return independent_blend_; }
  bool geometry_shader() const { return geometry_shader_; }
  bool tessellation_shader() const { return tessellation_shader_; }
  bool sample_rate_shading() const { return sample_rate_shading_; }
  bool dual_src_blend() const { return dual_src_blend_; }
  bool logic_op() const { return logic_op_; }
  bool multi_draw_indirect() const { return multi_draw_indirect_; }
  bool draw_indirect_first_instance() const { return draw_indirect_first_instance_; }
  bool depth_clamp() const { return depth_clamp_; }
  bool depth_bias_clamp() const { return depth_bias_clamp_; }
  bool fill_mode_non_solid() const { return fill_mode_non_solid_; }
  bool depth_bounds() const { return depth_bounds_; }
  bool wide_lines() const { return wide_lines_; }
  bool large_points() const { return large_points_; }
  bool alpha_to_one() const { return alpha_to_one_; }
  bool multi_viewport() const { return multi_viewport_; }
  bool sampler_anisotropy() const { return sampler_anisotropy_; }
  bool texture_compression_etc2() const { return texture_compression_etc2_; }
  bool texture_compression_astc_ldr() const { return texture_compression_astc_ldr_; }
  bool texture_compression_bc() const { return texture_compression_bc_; }
  bool occlusion_query_precise() const { return occlusion_query_precise_; }
  bool pipeline_statistics_query() const { return pipeline_statistics_query_; }
  bool vertex_pipeline_stores_and_atomics() const { return vertex_pipeline_stores_and_atomics_; }
  bool fragment_stores_and_atomics() const { return fragment_stores_and_atomics_; }
  bool shader_tessellation_and_geometry_point_size() const { return shader_tessellation_and_geometry_point_size_; }
  bool shader_image_gather_extended() const { return shader_image_gather_extended_; }
  bool shader_storage_image_extended_formats() const { return shader_storage_image_extended_formats_; }
  bool shader_storage_image_multisample() const { return shader_storage_image_multisample_; }
  bool shader_storage_image_read_without_format() const { return shader_storage_image_read_without_format_; }
  bool shader_storage_image_write_without_format() const { return shader_storage_image_write_without_format_; }
  bool shader_uniform_buffer_array_dynamic_indexing() const { return shader_uniform_buffer_array_dynamic_indexing_; }
  bool shader_sampled_image_array_dynamic_indexing() const { return shader_sampled_image_array_dynamic_indexing_; }
  bool shader_storage_buffer_array_dynamic_indexing() const { return shader_storage_buffer_array_dynamic_indexing_; }
  bool shader_storage_image_array_dynamic_indexing() const { return shader_storage_image_array_dynamic_indexing_; }
  bool shader_clip_distance() const { return shader_clip_distance_; }
  bool shader_cull_distance() const { return shader_cull_distance_; }
  bool shader_float_64() const { return shader_float_64_; }
  bool shader_int_64() const { return shader_int_64_; }
  bool shader_int_16() const { return shader_int_16_; }
  bool shader_resource_residency() const { return shader_resource_residency_; }
  bool shader_resource_min_lod() const { return shader_resource_min_lod_; }
  bool sparse_binding() const { return sparse_binding_; }
  bool sparse_residency_buffer() const { return sparse_residency_buffer_; }
  bool sparse_residency_image_2d() const { return sparse_residency_image_2d_; }
  bool sparse_residency_image_3d() const { return sparse_residency_image_3d_; }
  bool sparse_residency_2samples() const { return sparse_residency_2samples_; }
  bool sparse_residency_4samples() const { return sparse_residency_4samples_; }
  bool sparse_residency_8samples() const { return sparse_residency_8samples_; }
  bool sparse_residency_16samples() const { return sparse_residency_16samples_; }
  bool sparse_residency_aliased() const { return sparse_residency_aliased_; }
  bool variable_multisample_rate() const { return variable_multisample_rate_; }
  bool inherited_queries() const { return inherited_queries_; }

 private:
  spk::bool32_t robust_buffer_access_= 0;
  spk::bool32_t full_draw_index_uint_32_= 0;
  spk::bool32_t image_cube_array_= 0;
  spk::bool32_t independent_blend_= 0;
  spk::bool32_t geometry_shader_= 0;
  spk::bool32_t tessellation_shader_= 0;
  spk::bool32_t sample_rate_shading_= 0;
  spk::bool32_t dual_src_blend_= 0;
  spk::bool32_t logic_op_= 0;
  spk::bool32_t multi_draw_indirect_= 0;
  spk::bool32_t draw_indirect_first_instance_= 0;
  spk::bool32_t depth_clamp_= 0;
  spk::bool32_t depth_bias_clamp_= 0;
  spk::bool32_t fill_mode_non_solid_= 0;
  spk::bool32_t depth_bounds_= 0;
  spk::bool32_t wide_lines_= 0;
  spk::bool32_t large_points_= 0;
  spk::bool32_t alpha_to_one_= 0;
  spk::bool32_t multi_viewport_= 0;
  spk::bool32_t sampler_anisotropy_= 0;
  spk::bool32_t texture_compression_etc2_= 0;
  spk::bool32_t texture_compression_astc_ldr_= 0;
  spk::bool32_t texture_compression_bc_= 0;
  spk::bool32_t occlusion_query_precise_= 0;
  spk::bool32_t pipeline_statistics_query_= 0;
  spk::bool32_t vertex_pipeline_stores_and_atomics_= 0;
  spk::bool32_t fragment_stores_and_atomics_= 0;
  spk::bool32_t shader_tessellation_and_geometry_point_size_= 0;
  spk::bool32_t shader_image_gather_extended_= 0;
  spk::bool32_t shader_storage_image_extended_formats_= 0;
  spk::bool32_t shader_storage_image_multisample_= 0;
  spk::bool32_t shader_storage_image_read_without_format_= 0;
  spk::bool32_t shader_storage_image_write_without_format_= 0;
  spk::bool32_t shader_uniform_buffer_array_dynamic_indexing_= 0;
  spk::bool32_t shader_sampled_image_array_dynamic_indexing_= 0;
  spk::bool32_t shader_storage_buffer_array_dynamic_indexing_= 0;
  spk::bool32_t shader_storage_image_array_dynamic_indexing_= 0;
  spk::bool32_t shader_clip_distance_= 0;
  spk::bool32_t shader_cull_distance_= 0;
  spk::bool32_t shader_float_64_= 0;
  spk::bool32_t shader_int_64_= 0;
  spk::bool32_t shader_int_16_= 0;
  spk::bool32_t shader_resource_residency_= 0;
  spk::bool32_t shader_resource_min_lod_= 0;
  spk::bool32_t sparse_binding_= 0;
  spk::bool32_t sparse_residency_buffer_= 0;
  spk::bool32_t sparse_residency_image_2d_= 0;
  spk::bool32_t sparse_residency_image_3d_= 0;
  spk::bool32_t sparse_residency_2samples_= 0;
  spk::bool32_t sparse_residency_4samples_= 0;
  spk::bool32_t sparse_residency_8samples_= 0;
  spk::bool32_t sparse_residency_16samples_= 0;
  spk::bool32_t sparse_residency_aliased_= 0;
  spk::bool32_t variable_multisample_rate_= 0;
  spk::bool32_t inherited_queries_= 0;
};
static_assert(sizeof(physical_device_features) == sizeof(physical_device_features::underlying_type));

class physical_device_group_properties {
 public:
  using underlying_type = VkPhysicalDeviceGroupProperties;

  // mutators
  void set_subset_allocation(bool val) { subset_allocation_ = val; }
  void set_physical_device_count(uint32_t value) { physical_device_count_ = value; }
  void set_physical_devices(const std::array<spk::physical_device_ref, VK_MAX_DEVICE_GROUP_SIZE> & value) { physical_devices_ = value; }

  // accessors
  bool subset_allocation() const { return subset_allocation_; }
  uint32_t physical_device_count() const { return physical_device_count_; }
  const std::array<spk::physical_device_ref, VK_MAX_DEVICE_GROUP_SIZE> & physical_devices() const { return physical_devices_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES;
  void* p_next_ = nullptr;

  uint32_t physical_device_count_= 0;
  std::array<spk::physical_device_ref, VK_MAX_DEVICE_GROUP_SIZE> physical_devices_= {};
  spk::bool32_t subset_allocation_= 0;
};
static_assert(sizeof(physical_device_group_properties) == sizeof(physical_device_group_properties::underlying_type));
using physical_device_group_properties_khr = physical_device_group_properties;


class physical_device_id_properties {
 public:
  using underlying_type = VkPhysicalDeviceIDProperties;

  // mutators
  void set_device_luid_valid(bool val) { device_luid_valid_ = val; }
  void set_device_uuid(const std::array<uint8_t, VK_UUID_SIZE> & value) { device_uuid_ = value; }
  void set_driver_uuid(const std::array<uint8_t, VK_UUID_SIZE> & value) { driver_uuid_ = value; }
  void set_device_luid(const std::array<uint8_t, VK_LUID_SIZE> & value) { device_luid_ = value; }
  void set_device_node_mask(uint32_t value) { device_node_mask_ = value; }

  // accessors
  bool device_luid_valid() const { return device_luid_valid_; }
  const std::array<uint8_t, VK_UUID_SIZE> & device_uuid() const { return device_uuid_; }
  const std::array<uint8_t, VK_UUID_SIZE> & driver_uuid() const { return driver_uuid_; }
  const std::array<uint8_t, VK_LUID_SIZE> & device_luid() const { return device_luid_; }
  uint32_t device_node_mask() const { return device_node_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;
  void* p_next_ = nullptr;

  std::array<uint8_t, VK_UUID_SIZE> device_uuid_= {};
  std::array<uint8_t, VK_UUID_SIZE> driver_uuid_= {};
  std::array<uint8_t, VK_LUID_SIZE> device_luid_= {};
  uint32_t device_node_mask_= 0;
  spk::bool32_t device_luid_valid_= 0;
};
static_assert(sizeof(physical_device_id_properties) == sizeof(physical_device_id_properties::underlying_type));
using physical_device_id_properties_khr = physical_device_id_properties;


class physical_device_image_format_info_2 {
 public:
  using underlying_type = VkPhysicalDeviceImageFormatInfo2;

  // mutators
  void set_format(spk::format value) { format_ = value; }
  void set_type(spk::image_type value) { type_ = value; }
  void set_tiling(spk::image_tiling value) { tiling_ = value; }
  void set_usage(spk::image_usage_flags value) { usage_ = value; }
  void set_flags(spk::image_create_flags value) { flags_ = value; }

  // accessors
  spk::format format() const { return format_; }
  spk::image_type type() const { return type_; }
  spk::image_tiling tiling() const { return tiling_; }
  spk::image_usage_flags usage() const { return usage_; }
  spk::image_create_flags flags() const { return flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2;
  void* p_next_ = nullptr;

  spk::format format_= spk::format(0);
  spk::image_type type_= spk::image_type(0);
  spk::image_tiling tiling_= spk::image_tiling(0);
  spk::image_usage_flags usage_= spk::image_usage_flags(0);
  spk::image_create_flags flags_= spk::image_create_flags(0);// optional
};
static_assert(sizeof(physical_device_image_format_info_2) == sizeof(physical_device_image_format_info_2::underlying_type));
using physical_device_image_format_info_2khr = physical_device_image_format_info_2;


class physical_device_limits {
 public:
  using underlying_type = VkPhysicalDeviceLimits;

  // mutators
  void set_timestamp_compute_and_graphics(bool val) { timestamp_compute_and_graphics_ = val; }
  void set_strict_lines(bool val) { strict_lines_ = val; }
  void set_standard_sample_locations(bool val) { standard_sample_locations_ = val; }
  void set_max_image_dimension_1d(uint32_t value) { max_image_dimension_1d_ = value; }
  void set_max_image_dimension_2d(uint32_t value) { max_image_dimension_2d_ = value; }
  void set_max_image_dimension_3d(uint32_t value) { max_image_dimension_3d_ = value; }
  void set_max_image_dimension_cube(uint32_t value) { max_image_dimension_cube_ = value; }
  void set_max_image_array_layers(uint32_t value) { max_image_array_layers_ = value; }
  void set_max_texel_buffer_elements(uint32_t value) { max_texel_buffer_elements_ = value; }
  void set_max_uniform_buffer_range(uint32_t value) { max_uniform_buffer_range_ = value; }
  void set_max_storage_buffer_range(uint32_t value) { max_storage_buffer_range_ = value; }
  void set_max_push_constants_size(uint32_t value) { max_push_constants_size_ = value; }
  void set_max_memory_allocation_count(uint32_t value) { max_memory_allocation_count_ = value; }
  void set_max_sampler_allocation_count(uint32_t value) { max_sampler_allocation_count_ = value; }
  void set_buffer_image_granularity(uint64_t value) { buffer_image_granularity_ = value; }
  void set_sparse_address_space_size(uint64_t value) { sparse_address_space_size_ = value; }
  void set_max_bound_descriptor_sets(uint32_t value) { max_bound_descriptor_sets_ = value; }
  void set_max_per_stage_descriptor_samplers(uint32_t value) { max_per_stage_descriptor_samplers_ = value; }
  void set_max_per_stage_descriptor_uniform_buffers(uint32_t value) { max_per_stage_descriptor_uniform_buffers_ = value; }
  void set_max_per_stage_descriptor_storage_buffers(uint32_t value) { max_per_stage_descriptor_storage_buffers_ = value; }
  void set_max_per_stage_descriptor_sampled_images(uint32_t value) { max_per_stage_descriptor_sampled_images_ = value; }
  void set_max_per_stage_descriptor_storage_images(uint32_t value) { max_per_stage_descriptor_storage_images_ = value; }
  void set_max_per_stage_descriptor_input_attachments(uint32_t value) { max_per_stage_descriptor_input_attachments_ = value; }
  void set_max_per_stage_resources(uint32_t value) { max_per_stage_resources_ = value; }
  void set_max_descriptor_set_samplers(uint32_t value) { max_descriptor_set_samplers_ = value; }
  void set_max_descriptor_set_uniform_buffers(uint32_t value) { max_descriptor_set_uniform_buffers_ = value; }
  void set_max_descriptor_set_uniform_buffers_dynamic(uint32_t value) { max_descriptor_set_uniform_buffers_dynamic_ = value; }
  void set_max_descriptor_set_storage_buffers(uint32_t value) { max_descriptor_set_storage_buffers_ = value; }
  void set_max_descriptor_set_storage_buffers_dynamic(uint32_t value) { max_descriptor_set_storage_buffers_dynamic_ = value; }
  void set_max_descriptor_set_sampled_images(uint32_t value) { max_descriptor_set_sampled_images_ = value; }
  void set_max_descriptor_set_storage_images(uint32_t value) { max_descriptor_set_storage_images_ = value; }
  void set_max_descriptor_set_input_attachments(uint32_t value) { max_descriptor_set_input_attachments_ = value; }
  void set_max_vertex_input_attributes(uint32_t value) { max_vertex_input_attributes_ = value; }
  void set_max_vertex_input_bindings(uint32_t value) { max_vertex_input_bindings_ = value; }
  void set_max_vertex_input_attribute_offset(uint32_t value) { max_vertex_input_attribute_offset_ = value; }
  void set_max_vertex_input_binding_stride(uint32_t value) { max_vertex_input_binding_stride_ = value; }
  void set_max_vertex_output_components(uint32_t value) { max_vertex_output_components_ = value; }
  void set_max_tessellation_generation_level(uint32_t value) { max_tessellation_generation_level_ = value; }
  void set_max_tessellation_patch_size(uint32_t value) { max_tessellation_patch_size_ = value; }
  void set_max_tessellation_control_per_vertex_input_components(uint32_t value) { max_tessellation_control_per_vertex_input_components_ = value; }
  void set_max_tessellation_control_per_vertex_output_components(uint32_t value) { max_tessellation_control_per_vertex_output_components_ = value; }
  void set_max_tessellation_control_per_patch_output_components(uint32_t value) { max_tessellation_control_per_patch_output_components_ = value; }
  void set_max_tessellation_control_total_output_components(uint32_t value) { max_tessellation_control_total_output_components_ = value; }
  void set_max_tessellation_evaluation_input_components(uint32_t value) { max_tessellation_evaluation_input_components_ = value; }
  void set_max_tessellation_evaluation_output_components(uint32_t value) { max_tessellation_evaluation_output_components_ = value; }
  void set_max_geometry_shader_invocations(uint32_t value) { max_geometry_shader_invocations_ = value; }
  void set_max_geometry_input_components(uint32_t value) { max_geometry_input_components_ = value; }
  void set_max_geometry_output_components(uint32_t value) { max_geometry_output_components_ = value; }
  void set_max_geometry_output_vertices(uint32_t value) { max_geometry_output_vertices_ = value; }
  void set_max_geometry_total_output_components(uint32_t value) { max_geometry_total_output_components_ = value; }
  void set_max_fragment_input_components(uint32_t value) { max_fragment_input_components_ = value; }
  void set_max_fragment_output_attachments(uint32_t value) { max_fragment_output_attachments_ = value; }
  void set_max_fragment_dual_src_attachments(uint32_t value) { max_fragment_dual_src_attachments_ = value; }
  void set_max_fragment_combined_output_resources(uint32_t value) { max_fragment_combined_output_resources_ = value; }
  void set_max_compute_shared_memory_size(uint32_t value) { max_compute_shared_memory_size_ = value; }
  void set_max_compute_work_group_count(const std::array<uint32_t, 3> & value) { max_compute_work_group_count_ = value; }
  void set_max_compute_work_group_invocations(uint32_t value) { max_compute_work_group_invocations_ = value; }
  void set_max_compute_work_group_size(const std::array<uint32_t, 3> & value) { max_compute_work_group_size_ = value; }
  void set_sub_pixel_precision_bits(uint32_t value) { sub_pixel_precision_bits_ = value; }
  void set_sub_texel_precision_bits(uint32_t value) { sub_texel_precision_bits_ = value; }
  void set_mipmap_precision_bits(uint32_t value) { mipmap_precision_bits_ = value; }
  void set_max_draw_indexed_index_value(uint32_t value) { max_draw_indexed_index_value_ = value; }
  void set_max_draw_indirect_count(uint32_t value) { max_draw_indirect_count_ = value; }
  void set_max_sampler_lod_bias(float value) { max_sampler_lod_bias_ = value; }
  void set_max_sampler_anisotropy(float value) { max_sampler_anisotropy_ = value; }
  void set_max_viewports(uint32_t value) { max_viewports_ = value; }
  void set_max_viewport_dimensions(const std::array<uint32_t, 2> & value) { max_viewport_dimensions_ = value; }
  void set_viewport_bounds_range(const std::array<float, 2> & value) { viewport_bounds_range_ = value; }
  void set_viewport_sub_pixel_bits(uint32_t value) { viewport_sub_pixel_bits_ = value; }
  void set_min_memory_map_alignment(size_t value) { min_memory_map_alignment_ = value; }
  void set_min_texel_buffer_offset_alignment(uint64_t value) { min_texel_buffer_offset_alignment_ = value; }
  void set_min_uniform_buffer_offset_alignment(uint64_t value) { min_uniform_buffer_offset_alignment_ = value; }
  void set_min_storage_buffer_offset_alignment(uint64_t value) { min_storage_buffer_offset_alignment_ = value; }
  void set_min_texel_offset(int32_t value) { min_texel_offset_ = value; }
  void set_max_texel_offset(uint32_t value) { max_texel_offset_ = value; }
  void set_min_texel_gather_offset(int32_t value) { min_texel_gather_offset_ = value; }
  void set_max_texel_gather_offset(uint32_t value) { max_texel_gather_offset_ = value; }
  void set_min_interpolation_offset(float value) { min_interpolation_offset_ = value; }
  void set_max_interpolation_offset(float value) { max_interpolation_offset_ = value; }
  void set_sub_pixel_interpolation_offset_bits(uint32_t value) { sub_pixel_interpolation_offset_bits_ = value; }
  void set_max_framebuffer_width(uint32_t value) { max_framebuffer_width_ = value; }
  void set_max_framebuffer_height(uint32_t value) { max_framebuffer_height_ = value; }
  void set_max_framebuffer_layers(uint32_t value) { max_framebuffer_layers_ = value; }
  void set_framebuffer_color_sample_counts(spk::sample_count_flags value) { framebuffer_color_sample_counts_ = value; }
  void set_framebuffer_depth_sample_counts(spk::sample_count_flags value) { framebuffer_depth_sample_counts_ = value; }
  void set_framebuffer_stencil_sample_counts(spk::sample_count_flags value) { framebuffer_stencil_sample_counts_ = value; }
  void set_framebuffer_no_attachments_sample_counts(spk::sample_count_flags value) { framebuffer_no_attachments_sample_counts_ = value; }
  void set_max_color_attachments(uint32_t value) { max_color_attachments_ = value; }
  void set_sampled_image_color_sample_counts(spk::sample_count_flags value) { sampled_image_color_sample_counts_ = value; }
  void set_sampled_image_integer_sample_counts(spk::sample_count_flags value) { sampled_image_integer_sample_counts_ = value; }
  void set_sampled_image_depth_sample_counts(spk::sample_count_flags value) { sampled_image_depth_sample_counts_ = value; }
  void set_sampled_image_stencil_sample_counts(spk::sample_count_flags value) { sampled_image_stencil_sample_counts_ = value; }
  void set_storage_image_sample_counts(spk::sample_count_flags value) { storage_image_sample_counts_ = value; }
  void set_max_sample_mask_words(uint32_t value) { max_sample_mask_words_ = value; }
  void set_timestamp_period(float value) { timestamp_period_ = value; }
  void set_max_clip_distances(uint32_t value) { max_clip_distances_ = value; }
  void set_max_cull_distances(uint32_t value) { max_cull_distances_ = value; }
  void set_max_combined_clip_and_cull_distances(uint32_t value) { max_combined_clip_and_cull_distances_ = value; }
  void set_discrete_queue_priorities(uint32_t value) { discrete_queue_priorities_ = value; }
  void set_point_size_range(const std::array<float, 2> & value) { point_size_range_ = value; }
  void set_line_width_range(const std::array<float, 2> & value) { line_width_range_ = value; }
  void set_point_size_granularity(float value) { point_size_granularity_ = value; }
  void set_line_width_granularity(float value) { line_width_granularity_ = value; }
  void set_optimal_buffer_copy_offset_alignment(uint64_t value) { optimal_buffer_copy_offset_alignment_ = value; }
  void set_optimal_buffer_copy_row_pitch_alignment(uint64_t value) { optimal_buffer_copy_row_pitch_alignment_ = value; }
  void set_non_coherent_atom_size(uint64_t value) { non_coherent_atom_size_ = value; }

  // accessors
  bool timestamp_compute_and_graphics() const { return timestamp_compute_and_graphics_; }
  bool strict_lines() const { return strict_lines_; }
  bool standard_sample_locations() const { return standard_sample_locations_; }
  uint32_t max_image_dimension_1d() const { return max_image_dimension_1d_; }
  uint32_t max_image_dimension_2d() const { return max_image_dimension_2d_; }
  uint32_t max_image_dimension_3d() const { return max_image_dimension_3d_; }
  uint32_t max_image_dimension_cube() const { return max_image_dimension_cube_; }
  uint32_t max_image_array_layers() const { return max_image_array_layers_; }
  uint32_t max_texel_buffer_elements() const { return max_texel_buffer_elements_; }
  uint32_t max_uniform_buffer_range() const { return max_uniform_buffer_range_; }
  uint32_t max_storage_buffer_range() const { return max_storage_buffer_range_; }
  uint32_t max_push_constants_size() const { return max_push_constants_size_; }
  uint32_t max_memory_allocation_count() const { return max_memory_allocation_count_; }
  uint32_t max_sampler_allocation_count() const { return max_sampler_allocation_count_; }
  uint64_t buffer_image_granularity() const { return buffer_image_granularity_; }
  uint64_t sparse_address_space_size() const { return sparse_address_space_size_; }
  uint32_t max_bound_descriptor_sets() const { return max_bound_descriptor_sets_; }
  uint32_t max_per_stage_descriptor_samplers() const { return max_per_stage_descriptor_samplers_; }
  uint32_t max_per_stage_descriptor_uniform_buffers() const { return max_per_stage_descriptor_uniform_buffers_; }
  uint32_t max_per_stage_descriptor_storage_buffers() const { return max_per_stage_descriptor_storage_buffers_; }
  uint32_t max_per_stage_descriptor_sampled_images() const { return max_per_stage_descriptor_sampled_images_; }
  uint32_t max_per_stage_descriptor_storage_images() const { return max_per_stage_descriptor_storage_images_; }
  uint32_t max_per_stage_descriptor_input_attachments() const { return max_per_stage_descriptor_input_attachments_; }
  uint32_t max_per_stage_resources() const { return max_per_stage_resources_; }
  uint32_t max_descriptor_set_samplers() const { return max_descriptor_set_samplers_; }
  uint32_t max_descriptor_set_uniform_buffers() const { return max_descriptor_set_uniform_buffers_; }
  uint32_t max_descriptor_set_uniform_buffers_dynamic() const { return max_descriptor_set_uniform_buffers_dynamic_; }
  uint32_t max_descriptor_set_storage_buffers() const { return max_descriptor_set_storage_buffers_; }
  uint32_t max_descriptor_set_storage_buffers_dynamic() const { return max_descriptor_set_storage_buffers_dynamic_; }
  uint32_t max_descriptor_set_sampled_images() const { return max_descriptor_set_sampled_images_; }
  uint32_t max_descriptor_set_storage_images() const { return max_descriptor_set_storage_images_; }
  uint32_t max_descriptor_set_input_attachments() const { return max_descriptor_set_input_attachments_; }
  uint32_t max_vertex_input_attributes() const { return max_vertex_input_attributes_; }
  uint32_t max_vertex_input_bindings() const { return max_vertex_input_bindings_; }
  uint32_t max_vertex_input_attribute_offset() const { return max_vertex_input_attribute_offset_; }
  uint32_t max_vertex_input_binding_stride() const { return max_vertex_input_binding_stride_; }
  uint32_t max_vertex_output_components() const { return max_vertex_output_components_; }
  uint32_t max_tessellation_generation_level() const { return max_tessellation_generation_level_; }
  uint32_t max_tessellation_patch_size() const { return max_tessellation_patch_size_; }
  uint32_t max_tessellation_control_per_vertex_input_components() const { return max_tessellation_control_per_vertex_input_components_; }
  uint32_t max_tessellation_control_per_vertex_output_components() const { return max_tessellation_control_per_vertex_output_components_; }
  uint32_t max_tessellation_control_per_patch_output_components() const { return max_tessellation_control_per_patch_output_components_; }
  uint32_t max_tessellation_control_total_output_components() const { return max_tessellation_control_total_output_components_; }
  uint32_t max_tessellation_evaluation_input_components() const { return max_tessellation_evaluation_input_components_; }
  uint32_t max_tessellation_evaluation_output_components() const { return max_tessellation_evaluation_output_components_; }
  uint32_t max_geometry_shader_invocations() const { return max_geometry_shader_invocations_; }
  uint32_t max_geometry_input_components() const { return max_geometry_input_components_; }
  uint32_t max_geometry_output_components() const { return max_geometry_output_components_; }
  uint32_t max_geometry_output_vertices() const { return max_geometry_output_vertices_; }
  uint32_t max_geometry_total_output_components() const { return max_geometry_total_output_components_; }
  uint32_t max_fragment_input_components() const { return max_fragment_input_components_; }
  uint32_t max_fragment_output_attachments() const { return max_fragment_output_attachments_; }
  uint32_t max_fragment_dual_src_attachments() const { return max_fragment_dual_src_attachments_; }
  uint32_t max_fragment_combined_output_resources() const { return max_fragment_combined_output_resources_; }
  uint32_t max_compute_shared_memory_size() const { return max_compute_shared_memory_size_; }
  const std::array<uint32_t, 3> & max_compute_work_group_count() const { return max_compute_work_group_count_; }
  uint32_t max_compute_work_group_invocations() const { return max_compute_work_group_invocations_; }
  const std::array<uint32_t, 3> & max_compute_work_group_size() const { return max_compute_work_group_size_; }
  uint32_t sub_pixel_precision_bits() const { return sub_pixel_precision_bits_; }
  uint32_t sub_texel_precision_bits() const { return sub_texel_precision_bits_; }
  uint32_t mipmap_precision_bits() const { return mipmap_precision_bits_; }
  uint32_t max_draw_indexed_index_value() const { return max_draw_indexed_index_value_; }
  uint32_t max_draw_indirect_count() const { return max_draw_indirect_count_; }
  float max_sampler_lod_bias() const { return max_sampler_lod_bias_; }
  float max_sampler_anisotropy() const { return max_sampler_anisotropy_; }
  uint32_t max_viewports() const { return max_viewports_; }
  const std::array<uint32_t, 2> & max_viewport_dimensions() const { return max_viewport_dimensions_; }
  const std::array<float, 2> & viewport_bounds_range() const { return viewport_bounds_range_; }
  uint32_t viewport_sub_pixel_bits() const { return viewport_sub_pixel_bits_; }
  size_t min_memory_map_alignment() const { return min_memory_map_alignment_; }
  uint64_t min_texel_buffer_offset_alignment() const { return min_texel_buffer_offset_alignment_; }
  uint64_t min_uniform_buffer_offset_alignment() const { return min_uniform_buffer_offset_alignment_; }
  uint64_t min_storage_buffer_offset_alignment() const { return min_storage_buffer_offset_alignment_; }
  int32_t min_texel_offset() const { return min_texel_offset_; }
  uint32_t max_texel_offset() const { return max_texel_offset_; }
  int32_t min_texel_gather_offset() const { return min_texel_gather_offset_; }
  uint32_t max_texel_gather_offset() const { return max_texel_gather_offset_; }
  float min_interpolation_offset() const { return min_interpolation_offset_; }
  float max_interpolation_offset() const { return max_interpolation_offset_; }
  uint32_t sub_pixel_interpolation_offset_bits() const { return sub_pixel_interpolation_offset_bits_; }
  uint32_t max_framebuffer_width() const { return max_framebuffer_width_; }
  uint32_t max_framebuffer_height() const { return max_framebuffer_height_; }
  uint32_t max_framebuffer_layers() const { return max_framebuffer_layers_; }
  spk::sample_count_flags framebuffer_color_sample_counts() const { return framebuffer_color_sample_counts_; }
  spk::sample_count_flags framebuffer_depth_sample_counts() const { return framebuffer_depth_sample_counts_; }
  spk::sample_count_flags framebuffer_stencil_sample_counts() const { return framebuffer_stencil_sample_counts_; }
  spk::sample_count_flags framebuffer_no_attachments_sample_counts() const { return framebuffer_no_attachments_sample_counts_; }
  uint32_t max_color_attachments() const { return max_color_attachments_; }
  spk::sample_count_flags sampled_image_color_sample_counts() const { return sampled_image_color_sample_counts_; }
  spk::sample_count_flags sampled_image_integer_sample_counts() const { return sampled_image_integer_sample_counts_; }
  spk::sample_count_flags sampled_image_depth_sample_counts() const { return sampled_image_depth_sample_counts_; }
  spk::sample_count_flags sampled_image_stencil_sample_counts() const { return sampled_image_stencil_sample_counts_; }
  spk::sample_count_flags storage_image_sample_counts() const { return storage_image_sample_counts_; }
  uint32_t max_sample_mask_words() const { return max_sample_mask_words_; }
  float timestamp_period() const { return timestamp_period_; }
  uint32_t max_clip_distances() const { return max_clip_distances_; }
  uint32_t max_cull_distances() const { return max_cull_distances_; }
  uint32_t max_combined_clip_and_cull_distances() const { return max_combined_clip_and_cull_distances_; }
  uint32_t discrete_queue_priorities() const { return discrete_queue_priorities_; }
  const std::array<float, 2> & point_size_range() const { return point_size_range_; }
  const std::array<float, 2> & line_width_range() const { return line_width_range_; }
  float point_size_granularity() const { return point_size_granularity_; }
  float line_width_granularity() const { return line_width_granularity_; }
  uint64_t optimal_buffer_copy_offset_alignment() const { return optimal_buffer_copy_offset_alignment_; }
  uint64_t optimal_buffer_copy_row_pitch_alignment() const { return optimal_buffer_copy_row_pitch_alignment_; }
  uint64_t non_coherent_atom_size() const { return non_coherent_atom_size_; }

 private:
  uint32_t max_image_dimension_1d_= 0;
  uint32_t max_image_dimension_2d_= 0;
  uint32_t max_image_dimension_3d_= 0;
  uint32_t max_image_dimension_cube_= 0;
  uint32_t max_image_array_layers_= 0;
  uint32_t max_texel_buffer_elements_= 0;
  uint32_t max_uniform_buffer_range_= 0;
  uint32_t max_storage_buffer_range_= 0;
  uint32_t max_push_constants_size_= 0;
  uint32_t max_memory_allocation_count_= 0;
  uint32_t max_sampler_allocation_count_= 0;
  uint64_t buffer_image_granularity_= 0;
  uint64_t sparse_address_space_size_= 0;
  uint32_t max_bound_descriptor_sets_= 0;
  uint32_t max_per_stage_descriptor_samplers_= 0;
  uint32_t max_per_stage_descriptor_uniform_buffers_= 0;
  uint32_t max_per_stage_descriptor_storage_buffers_= 0;
  uint32_t max_per_stage_descriptor_sampled_images_= 0;
  uint32_t max_per_stage_descriptor_storage_images_= 0;
  uint32_t max_per_stage_descriptor_input_attachments_= 0;
  uint32_t max_per_stage_resources_= 0;
  uint32_t max_descriptor_set_samplers_= 0;
  uint32_t max_descriptor_set_uniform_buffers_= 0;
  uint32_t max_descriptor_set_uniform_buffers_dynamic_= 0;
  uint32_t max_descriptor_set_storage_buffers_= 0;
  uint32_t max_descriptor_set_storage_buffers_dynamic_= 0;
  uint32_t max_descriptor_set_sampled_images_= 0;
  uint32_t max_descriptor_set_storage_images_= 0;
  uint32_t max_descriptor_set_input_attachments_= 0;
  uint32_t max_vertex_input_attributes_= 0;
  uint32_t max_vertex_input_bindings_= 0;
  uint32_t max_vertex_input_attribute_offset_= 0;
  uint32_t max_vertex_input_binding_stride_= 0;
  uint32_t max_vertex_output_components_= 0;
  uint32_t max_tessellation_generation_level_= 0;
  uint32_t max_tessellation_patch_size_= 0;
  uint32_t max_tessellation_control_per_vertex_input_components_= 0;
  uint32_t max_tessellation_control_per_vertex_output_components_= 0;
  uint32_t max_tessellation_control_per_patch_output_components_= 0;
  uint32_t max_tessellation_control_total_output_components_= 0;
  uint32_t max_tessellation_evaluation_input_components_= 0;
  uint32_t max_tessellation_evaluation_output_components_= 0;
  uint32_t max_geometry_shader_invocations_= 0;
  uint32_t max_geometry_input_components_= 0;
  uint32_t max_geometry_output_components_= 0;
  uint32_t max_geometry_output_vertices_= 0;
  uint32_t max_geometry_total_output_components_= 0;
  uint32_t max_fragment_input_components_= 0;
  uint32_t max_fragment_output_attachments_= 0;
  uint32_t max_fragment_dual_src_attachments_= 0;
  uint32_t max_fragment_combined_output_resources_= 0;
  uint32_t max_compute_shared_memory_size_= 0;
  std::array<uint32_t, 3> max_compute_work_group_count_= {};
  uint32_t max_compute_work_group_invocations_= 0;
  std::array<uint32_t, 3> max_compute_work_group_size_= {};
  uint32_t sub_pixel_precision_bits_= 0;
  uint32_t sub_texel_precision_bits_= 0;
  uint32_t mipmap_precision_bits_= 0;
  uint32_t max_draw_indexed_index_value_= 0;
  uint32_t max_draw_indirect_count_= 0;
  float max_sampler_lod_bias_= 0;
  float max_sampler_anisotropy_= 0;
  uint32_t max_viewports_= 0;
  std::array<uint32_t, 2> max_viewport_dimensions_= {};
  std::array<float, 2> viewport_bounds_range_= {};
  uint32_t viewport_sub_pixel_bits_= 0;
  size_t min_memory_map_alignment_= 0;
  uint64_t min_texel_buffer_offset_alignment_= 0;
  uint64_t min_uniform_buffer_offset_alignment_= 0;
  uint64_t min_storage_buffer_offset_alignment_= 0;
  int32_t min_texel_offset_= 0;
  uint32_t max_texel_offset_= 0;
  int32_t min_texel_gather_offset_= 0;
  uint32_t max_texel_gather_offset_= 0;
  float min_interpolation_offset_= 0;
  float max_interpolation_offset_= 0;
  uint32_t sub_pixel_interpolation_offset_bits_= 0;
  uint32_t max_framebuffer_width_= 0;
  uint32_t max_framebuffer_height_= 0;
  uint32_t max_framebuffer_layers_= 0;
  spk::sample_count_flags framebuffer_color_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags framebuffer_depth_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags framebuffer_stencil_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags framebuffer_no_attachments_sample_counts_= spk::sample_count_flags(0);// optional
  uint32_t max_color_attachments_= 0;
  spk::sample_count_flags sampled_image_color_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags sampled_image_integer_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags sampled_image_depth_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags sampled_image_stencil_sample_counts_= spk::sample_count_flags(0);// optional
  spk::sample_count_flags storage_image_sample_counts_= spk::sample_count_flags(0);// optional
  uint32_t max_sample_mask_words_= 0;
  spk::bool32_t timestamp_compute_and_graphics_= 0;
  float timestamp_period_= 0;
  uint32_t max_clip_distances_= 0;
  uint32_t max_cull_distances_= 0;
  uint32_t max_combined_clip_and_cull_distances_= 0;
  uint32_t discrete_queue_priorities_= 0;
  std::array<float, 2> point_size_range_= {};
  std::array<float, 2> line_width_range_= {};
  float point_size_granularity_= 0;
  float line_width_granularity_= 0;
  spk::bool32_t strict_lines_= 0;
  spk::bool32_t standard_sample_locations_= 0;
  uint64_t optimal_buffer_copy_offset_alignment_= 0;
  uint64_t optimal_buffer_copy_row_pitch_alignment_= 0;
  uint64_t non_coherent_atom_size_= 0;
};
static_assert(sizeof(physical_device_limits) == sizeof(physical_device_limits::underlying_type));

class physical_device_maintenance_3properties {
 public:
  using underlying_type = VkPhysicalDeviceMaintenance3Properties;

  // mutators
  void set_max_per_set_descriptors(uint32_t value) { max_per_set_descriptors_ = value; }
  void set_max_memory_allocation_size(uint64_t value) { max_memory_allocation_size_ = value; }

  // accessors
  uint32_t max_per_set_descriptors() const { return max_per_set_descriptors_; }
  uint64_t max_memory_allocation_size() const { return max_memory_allocation_size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES;
  void* p_next_ = nullptr;

  uint32_t max_per_set_descriptors_= 0;
  uint64_t max_memory_allocation_size_= 0;
};
static_assert(sizeof(physical_device_maintenance_3properties) == sizeof(physical_device_maintenance_3properties::underlying_type));
using physical_device_maintenance_3properties_khr = physical_device_maintenance_3properties;


class physical_device_multiview_features {
 public:
  using underlying_type = VkPhysicalDeviceMultiviewFeatures;

  // mutators
  void set_multiview(bool val) { multiview_ = val; }
  void set_multiview_geometry_shader(bool val) { multiview_geometry_shader_ = val; }
  void set_multiview_tessellation_shader(bool val) { multiview_tessellation_shader_ = val; }

  // accessors
  bool multiview() const { return multiview_; }
  bool multiview_geometry_shader() const { return multiview_geometry_shader_; }
  bool multiview_tessellation_shader() const { return multiview_tessellation_shader_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t multiview_= 0;
  spk::bool32_t multiview_geometry_shader_= 0;
  spk::bool32_t multiview_tessellation_shader_= 0;
};
static_assert(sizeof(physical_device_multiview_features) == sizeof(physical_device_multiview_features::underlying_type));
using physical_device_multiview_features_khr = physical_device_multiview_features;


class physical_device_multiview_per_view_attributes_properties_nvx {
 public:
  using underlying_type = VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;

  // mutators
  void set_per_view_position_all_components(bool val) { per_view_position_all_components_ = val; }

  // accessors
  bool per_view_position_all_components() const { return per_view_position_all_components_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
  void* p_next_ = nullptr;

  spk::bool32_t per_view_position_all_components_= 0;
};
static_assert(sizeof(physical_device_multiview_per_view_attributes_properties_nvx) == sizeof(physical_device_multiview_per_view_attributes_properties_nvx::underlying_type));

class physical_device_multiview_properties {
 public:
  using underlying_type = VkPhysicalDeviceMultiviewProperties;

  // mutators
  void set_max_multiview_view_count(uint32_t value) { max_multiview_view_count_ = value; }
  void set_max_multiview_instance_index(uint32_t value) { max_multiview_instance_index_ = value; }

  // accessors
  uint32_t max_multiview_view_count() const { return max_multiview_view_count_; }
  uint32_t max_multiview_instance_index() const { return max_multiview_instance_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES;
  void* p_next_ = nullptr;

  uint32_t max_multiview_view_count_= 0;
  uint32_t max_multiview_instance_index_= 0;
};
static_assert(sizeof(physical_device_multiview_properties) == sizeof(physical_device_multiview_properties::underlying_type));
using physical_device_multiview_properties_khr = physical_device_multiview_properties;


class physical_device_point_clipping_properties {
 public:
  using underlying_type = VkPhysicalDevicePointClippingProperties;

  // mutators
  void set_point_clipping_behavior(spk::point_clipping_behavior value) { point_clipping_behavior_ = value; }

  // accessors
  spk::point_clipping_behavior point_clipping_behavior() const { return point_clipping_behavior_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES;
  void* p_next_ = nullptr;

  spk::point_clipping_behavior point_clipping_behavior_= spk::point_clipping_behavior(0);
};
static_assert(sizeof(physical_device_point_clipping_properties) == sizeof(physical_device_point_clipping_properties::underlying_type));
using physical_device_point_clipping_properties_khr = physical_device_point_clipping_properties;


class physical_device_protected_memory_features {
 public:
  using underlying_type = VkPhysicalDeviceProtectedMemoryFeatures;

  // mutators
  void set_protected_memory(bool val) { protected_memory_ = val; }

  // accessors
  bool protected_memory() const { return protected_memory_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t protected_memory_= 0;
};
static_assert(sizeof(physical_device_protected_memory_features) == sizeof(physical_device_protected_memory_features::underlying_type));

class physical_device_protected_memory_properties {
 public:
  using underlying_type = VkPhysicalDeviceProtectedMemoryProperties;

  // mutators
  void set_protected_no_fault(bool val) { protected_no_fault_ = val; }

  // accessors
  bool protected_no_fault() const { return protected_no_fault_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES;
  void* p_next_ = nullptr;

  spk::bool32_t protected_no_fault_= 0;
};
static_assert(sizeof(physical_device_protected_memory_properties) == sizeof(physical_device_protected_memory_properties::underlying_type));

class physical_device_push_descriptor_properties_khr {
 public:
  using underlying_type = VkPhysicalDevicePushDescriptorPropertiesKHR;

  // mutators
  void set_max_push_descriptors(uint32_t value) { max_push_descriptors_ = value; }

  // accessors
  uint32_t max_push_descriptors() const { return max_push_descriptors_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR;
  void* p_next_ = nullptr;

  uint32_t max_push_descriptors_= 0;
};
static_assert(sizeof(physical_device_push_descriptor_properties_khr) == sizeof(physical_device_push_descriptor_properties_khr::underlying_type));

class physical_device_sampler_filter_minmax_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;

  // mutators
  void set_filter_minmax_single_component_formats(bool val) { filter_minmax_single_component_formats_ = val; }
  void set_filter_minmax_image_component_mapping(bool val) { filter_minmax_image_component_mapping_ = val; }

  // accessors
  bool filter_minmax_single_component_formats() const { return filter_minmax_single_component_formats_; }
  bool filter_minmax_image_component_mapping() const { return filter_minmax_image_component_mapping_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t filter_minmax_single_component_formats_= 0;
  spk::bool32_t filter_minmax_image_component_mapping_= 0;
};
static_assert(sizeof(physical_device_sampler_filter_minmax_properties_ext) == sizeof(physical_device_sampler_filter_minmax_properties_ext::underlying_type));

class physical_device_sampler_ycbcr_conversion_features {
 public:
  using underlying_type = VkPhysicalDeviceSamplerYcbcrConversionFeatures;

  // mutators
  void set_sampler_ycbcr_conversion(bool val) { sampler_ycbcr_conversion_ = val; }

  // accessors
  bool sampler_ycbcr_conversion() const { return sampler_ycbcr_conversion_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t sampler_ycbcr_conversion_= 0;
};
static_assert(sizeof(physical_device_sampler_ycbcr_conversion_features) == sizeof(physical_device_sampler_ycbcr_conversion_features::underlying_type));
using physical_device_sampler_ycbcr_conversion_features_khr = physical_device_sampler_ycbcr_conversion_features;


class physical_device_shader_core_properties_amd {
 public:
  using underlying_type = VkPhysicalDeviceShaderCorePropertiesAMD;

  // mutators
  void set_shader_engine_count(uint32_t value) { shader_engine_count_ = value; }
  void set_shader_arrays_per_engine_count(uint32_t value) { shader_arrays_per_engine_count_ = value; }
  void set_compute_units_per_shader_array(uint32_t value) { compute_units_per_shader_array_ = value; }
  void set_simd_per_compute_unit(uint32_t value) { simd_per_compute_unit_ = value; }
  void set_wavefronts_per_simd(uint32_t value) { wavefronts_per_simd_ = value; }
  void set_wavefront_size(uint32_t value) { wavefront_size_ = value; }
  void set_sgprs_per_simd(uint32_t value) { sgprs_per_simd_ = value; }
  void set_min_sgpr_allocation(uint32_t value) { min_sgpr_allocation_ = value; }
  void set_max_sgpr_allocation(uint32_t value) { max_sgpr_allocation_ = value; }
  void set_sgpr_allocation_granularity(uint32_t value) { sgpr_allocation_granularity_ = value; }
  void set_vgprs_per_simd(uint32_t value) { vgprs_per_simd_ = value; }
  void set_min_vgpr_allocation(uint32_t value) { min_vgpr_allocation_ = value; }
  void set_max_vgpr_allocation(uint32_t value) { max_vgpr_allocation_ = value; }
  void set_vgpr_allocation_granularity(uint32_t value) { vgpr_allocation_granularity_ = value; }

  // accessors
  uint32_t shader_engine_count() const { return shader_engine_count_; }
  uint32_t shader_arrays_per_engine_count() const { return shader_arrays_per_engine_count_; }
  uint32_t compute_units_per_shader_array() const { return compute_units_per_shader_array_; }
  uint32_t simd_per_compute_unit() const { return simd_per_compute_unit_; }
  uint32_t wavefronts_per_simd() const { return wavefronts_per_simd_; }
  uint32_t wavefront_size() const { return wavefront_size_; }
  uint32_t sgprs_per_simd() const { return sgprs_per_simd_; }
  uint32_t min_sgpr_allocation() const { return min_sgpr_allocation_; }
  uint32_t max_sgpr_allocation() const { return max_sgpr_allocation_; }
  uint32_t sgpr_allocation_granularity() const { return sgpr_allocation_granularity_; }
  uint32_t vgprs_per_simd() const { return vgprs_per_simd_; }
  uint32_t min_vgpr_allocation() const { return min_vgpr_allocation_; }
  uint32_t max_vgpr_allocation() const { return max_vgpr_allocation_; }
  uint32_t vgpr_allocation_granularity() const { return vgpr_allocation_granularity_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD;
  void* p_next_ = nullptr;

  uint32_t shader_engine_count_= 0;
  uint32_t shader_arrays_per_engine_count_= 0;
  uint32_t compute_units_per_shader_array_= 0;
  uint32_t simd_per_compute_unit_= 0;
  uint32_t wavefronts_per_simd_= 0;
  uint32_t wavefront_size_= 0;
  uint32_t sgprs_per_simd_= 0;
  uint32_t min_sgpr_allocation_= 0;
  uint32_t max_sgpr_allocation_= 0;
  uint32_t sgpr_allocation_granularity_= 0;
  uint32_t vgprs_per_simd_= 0;
  uint32_t min_vgpr_allocation_= 0;
  uint32_t max_vgpr_allocation_= 0;
  uint32_t vgpr_allocation_granularity_= 0;
};
static_assert(sizeof(physical_device_shader_core_properties_amd) == sizeof(physical_device_shader_core_properties_amd::underlying_type));

class physical_device_shader_draw_parameter_features {
 public:
  using underlying_type = VkPhysicalDeviceShaderDrawParameterFeatures;

  // mutators
  void set_shader_draw_parameters(bool val) { shader_draw_parameters_ = val; }

  // accessors
  bool shader_draw_parameters() const { return shader_draw_parameters_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETER_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t shader_draw_parameters_= 0;
};
static_assert(sizeof(physical_device_shader_draw_parameter_features) == sizeof(physical_device_shader_draw_parameter_features::underlying_type));

class physical_device_sparse_image_format_info_2 {
 public:
  using underlying_type = VkPhysicalDeviceSparseImageFormatInfo2;

  // mutators
  void set_format(spk::format value) { format_ = value; }
  void set_type(spk::image_type value) { type_ = value; }
  void set_samples(spk::sample_count_flags value) { samples_ = value; }
  void set_usage(spk::image_usage_flags value) { usage_ = value; }
  void set_tiling(spk::image_tiling value) { tiling_ = value; }

  // accessors
  spk::format format() const { return format_; }
  spk::image_type type() const { return type_; }
  spk::sample_count_flags samples() const { return samples_; }
  spk::image_usage_flags usage() const { return usage_; }
  spk::image_tiling tiling() const { return tiling_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
  void* p_next_ = nullptr;

  spk::format format_= spk::format(0);
  spk::image_type type_= spk::image_type(0);
  spk::sample_count_flags samples_= spk::sample_count_flags(0);
  spk::image_usage_flags usage_= spk::image_usage_flags(0);
  spk::image_tiling tiling_= spk::image_tiling(0);
};
static_assert(sizeof(physical_device_sparse_image_format_info_2) == sizeof(physical_device_sparse_image_format_info_2::underlying_type));
using physical_device_sparse_image_format_info_2khr = physical_device_sparse_image_format_info_2;


class physical_device_sparse_properties {
 public:
  using underlying_type = VkPhysicalDeviceSparseProperties;

  // mutators
  void set_residency_standard_2d_block_shape(bool val) { residency_standard_2d_block_shape_ = val; }
  void set_residency_standard_2d_multisample_block_shape(bool val) { residency_standard_2d_multisample_block_shape_ = val; }
  void set_residency_standard_3d_block_shape(bool val) { residency_standard_3d_block_shape_ = val; }
  void set_residency_aligned_mip_size(bool val) { residency_aligned_mip_size_ = val; }
  void set_residency_non_resident_strict(bool val) { residency_non_resident_strict_ = val; }

  // accessors
  bool residency_standard_2d_block_shape() const { return residency_standard_2d_block_shape_; }
  bool residency_standard_2d_multisample_block_shape() const { return residency_standard_2d_multisample_block_shape_; }
  bool residency_standard_3d_block_shape() const { return residency_standard_3d_block_shape_; }
  bool residency_aligned_mip_size() const { return residency_aligned_mip_size_; }
  bool residency_non_resident_strict() const { return residency_non_resident_strict_; }

 private:
  spk::bool32_t residency_standard_2d_block_shape_= 0;
  spk::bool32_t residency_standard_2d_multisample_block_shape_= 0;
  spk::bool32_t residency_standard_3d_block_shape_= 0;
  spk::bool32_t residency_aligned_mip_size_= 0;
  spk::bool32_t residency_non_resident_strict_= 0;
};
static_assert(sizeof(physical_device_sparse_properties) == sizeof(physical_device_sparse_properties::underlying_type));

class physical_device_subgroup_properties {
 public:
  using underlying_type = VkPhysicalDeviceSubgroupProperties;

  // mutators
  void set_quad_operations_in_all_stages(bool val) { quad_operations_in_all_stages_ = val; }
  void set_subgroup_size(uint32_t value) { subgroup_size_ = value; }
  void set_supported_stages(spk::shader_stage_flags value) { supported_stages_ = value; }
  void set_supported_operations(spk::subgroup_feature_flags value) { supported_operations_ = value; }

  // accessors
  bool quad_operations_in_all_stages() const { return quad_operations_in_all_stages_; }
  uint32_t subgroup_size() const { return subgroup_size_; }
  spk::shader_stage_flags supported_stages() const { return supported_stages_; }
  spk::subgroup_feature_flags supported_operations() const { return supported_operations_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES;
  void* p_next_ = nullptr;

  uint32_t subgroup_size_= 0;
  spk::shader_stage_flags supported_stages_= spk::shader_stage_flags(0);
  spk::subgroup_feature_flags supported_operations_= spk::subgroup_feature_flags(0);
  spk::bool32_t quad_operations_in_all_stages_= 0;
};
static_assert(sizeof(physical_device_subgroup_properties) == sizeof(physical_device_subgroup_properties::underlying_type));

class physical_device_surface_info_2khr {
 public:
  using underlying_type = VkPhysicalDeviceSurfaceInfo2KHR;

  // mutators
  void set_surface(spk::surface_khr_ref value) { surface_ = value; }

  // accessors
  spk::surface_khr_ref surface() const { return surface_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
  void* p_next_ = nullptr;

  spk::surface_khr_ref surface_= 0;
};
static_assert(sizeof(physical_device_surface_info_2khr) == sizeof(physical_device_surface_info_2khr::underlying_type));

class physical_device_variable_pointer_features {
 public:
  using underlying_type = VkPhysicalDeviceVariablePointerFeatures;

  // mutators
  void set_variable_pointers_storage_buffer(bool val) { variable_pointers_storage_buffer_ = val; }
  void set_variable_pointers(bool val) { variable_pointers_ = val; }

  // accessors
  bool variable_pointers_storage_buffer() const { return variable_pointers_storage_buffer_; }
  bool variable_pointers() const { return variable_pointers_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTER_FEATURES;
  void* p_next_ = nullptr;

  spk::bool32_t variable_pointers_storage_buffer_= 0;
  spk::bool32_t variable_pointers_= 0;
};
static_assert(sizeof(physical_device_variable_pointer_features) == sizeof(physical_device_variable_pointer_features::underlying_type));
using physical_device_variable_pointer_features_khr = physical_device_variable_pointer_features;


class physical_device_vertex_attribute_divisor_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;

  // mutators
  void set_max_vertex_attrib_divisor(uint32_t value) { max_vertex_attrib_divisor_ = value; }

  // accessors
  uint32_t max_vertex_attrib_divisor() const { return max_vertex_attrib_divisor_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  uint32_t max_vertex_attrib_divisor_= 0;
};
static_assert(sizeof(physical_device_vertex_attribute_divisor_properties_ext) == sizeof(physical_device_vertex_attribute_divisor_properties_ext::underlying_type));

class pipeline_cache_create_info {
 public:
  using underlying_type = VkPipelineCacheCreateInfo;

  // mutators
  void set_initial_data(spk::array_view<void const> value) { p_initial_data_ = value.get(); initial_data_size_ = value.size(); }

  // accessors
  spk::array_view<void const> initial_data() const { return {p_initial_data_, initial_data_size_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  size_t initial_data_size_= 0;// optional
  void const * p_initial_data_= 0;
};
static_assert(sizeof(pipeline_cache_create_info) == sizeof(pipeline_cache_create_info::underlying_type));

class pipeline_color_blend_advanced_state_create_info_ext {
 public:
  using underlying_type = VkPipelineColorBlendAdvancedStateCreateInfoEXT;

  // mutators
  void set_src_premultiplied(bool val) { src_premultiplied_ = val; }
  void set_dst_premultiplied(bool val) { dst_premultiplied_ = val; }
  void set_blend_overlap(spk::blend_overlap_ext value) { blend_overlap_ = value; }

  // accessors
  bool src_premultiplied() const { return src_premultiplied_; }
  bool dst_premultiplied() const { return dst_premultiplied_; }
  spk::blend_overlap_ext blend_overlap() const { return blend_overlap_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t src_premultiplied_= 0;
  spk::bool32_t dst_premultiplied_= 0;
  spk::blend_overlap_ext blend_overlap_= spk::blend_overlap_ext(0);
};
static_assert(sizeof(pipeline_color_blend_advanced_state_create_info_ext) == sizeof(pipeline_color_blend_advanced_state_create_info_ext::underlying_type));

class pipeline_color_blend_attachment_state {
 public:
  using underlying_type = VkPipelineColorBlendAttachmentState;

  // mutators
  void set_blend_enable(bool val) { blend_enable_ = val; }
  void set_src_color_blend_factor(spk::blend_factor value) { src_color_blend_factor_ = value; }
  void set_dst_color_blend_factor(spk::blend_factor value) { dst_color_blend_factor_ = value; }
  void set_color_blend_op(spk::blend_op value) { color_blend_op_ = value; }
  void set_src_alpha_blend_factor(spk::blend_factor value) { src_alpha_blend_factor_ = value; }
  void set_dst_alpha_blend_factor(spk::blend_factor value) { dst_alpha_blend_factor_ = value; }
  void set_alpha_blend_op(spk::blend_op value) { alpha_blend_op_ = value; }
  void set_color_write_mask(spk::color_component_flags value) { color_write_mask_ = value; }

  // accessors
  bool blend_enable() const { return blend_enable_; }
  spk::blend_factor src_color_blend_factor() const { return src_color_blend_factor_; }
  spk::blend_factor dst_color_blend_factor() const { return dst_color_blend_factor_; }
  spk::blend_op color_blend_op() const { return color_blend_op_; }
  spk::blend_factor src_alpha_blend_factor() const { return src_alpha_blend_factor_; }
  spk::blend_factor dst_alpha_blend_factor() const { return dst_alpha_blend_factor_; }
  spk::blend_op alpha_blend_op() const { return alpha_blend_op_; }
  spk::color_component_flags color_write_mask() const { return color_write_mask_; }

 private:
  spk::bool32_t blend_enable_= 0;
  spk::blend_factor src_color_blend_factor_= spk::blend_factor(0);
  spk::blend_factor dst_color_blend_factor_= spk::blend_factor(0);
  spk::blend_op color_blend_op_= spk::blend_op(0);
  spk::blend_factor src_alpha_blend_factor_= spk::blend_factor(0);
  spk::blend_factor dst_alpha_blend_factor_= spk::blend_factor(0);
  spk::blend_op alpha_blend_op_= spk::blend_op(0);
  spk::color_component_flags color_write_mask_= spk::color_component_flags(0);// optional
};
static_assert(sizeof(pipeline_color_blend_attachment_state) == sizeof(pipeline_color_blend_attachment_state::underlying_type));

class pipeline_color_blend_state_create_info {
 public:
  using underlying_type = VkPipelineColorBlendStateCreateInfo;

  // mutators
  void set_logic_op_enable(bool val) { logic_op_enable_ = val; }
  void set_attachments(spk::array_view<spk::pipeline_color_blend_attachment_state const> value) { p_attachments_ = value.get(); attachment_count_ = value.size(); }
  void set_logic_op(spk::logic_op value) { logic_op_ = value; }
  void set_blend_constants(const std::array<float, 4> & value) { blend_constants_ = value; }

  // accessors
  bool logic_op_enable() const { return logic_op_enable_; }
  spk::array_view<spk::pipeline_color_blend_attachment_state const> attachments() const { return {p_attachments_, attachment_count_};}
  spk::logic_op logic_op() const { return logic_op_; }
  const std::array<float, 4> & blend_constants() const { return blend_constants_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::bool32_t logic_op_enable_= 0;
  spk::logic_op logic_op_= spk::logic_op(0);
  uint32_t attachment_count_= 0;// optional
  spk::pipeline_color_blend_attachment_state const * p_attachments_= 0;
  std::array<float, 4> blend_constants_= {};
};
static_assert(sizeof(pipeline_color_blend_state_create_info) == sizeof(pipeline_color_blend_state_create_info::underlying_type));

class pipeline_coverage_modulation_state_create_info_nv {
 public:
  using underlying_type = VkPipelineCoverageModulationStateCreateInfoNV;

  // mutators
  void set_coverage_modulation_table_enable(bool val) { coverage_modulation_table_enable_ = val; }
  void set_coverage_modulation_table(spk::array_view<float const> value) { p_coverage_modulation_table_ = value.get(); coverage_modulation_table_count_ = value.size(); }
  void set_coverage_modulation_mode(spk::coverage_modulation_mode_nv value) { coverage_modulation_mode_ = value; }

  // accessors
  bool coverage_modulation_table_enable() const { return coverage_modulation_table_enable_; }
  spk::array_view<float const> coverage_modulation_table() const { return {p_coverage_modulation_table_, coverage_modulation_table_count_};}
  spk::coverage_modulation_mode_nv coverage_modulation_mode() const { return coverage_modulation_mode_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::coverage_modulation_mode_nv coverage_modulation_mode_= spk::coverage_modulation_mode_nv(0);
  spk::bool32_t coverage_modulation_table_enable_= 0;
  uint32_t coverage_modulation_table_count_= 0;
  float const * p_coverage_modulation_table_= 0;// optional
};
static_assert(sizeof(pipeline_coverage_modulation_state_create_info_nv) == sizeof(pipeline_coverage_modulation_state_create_info_nv::underlying_type));

class pipeline_coverage_to_color_state_create_info_nv {
 public:
  using underlying_type = VkPipelineCoverageToColorStateCreateInfoNV;

  // mutators
  void set_coverage_to_color_enable(bool val) { coverage_to_color_enable_ = val; }
  void set_coverage_to_color_location(uint32_t value) { coverage_to_color_location_ = value; }

  // accessors
  bool coverage_to_color_enable() const { return coverage_to_color_enable_; }
  uint32_t coverage_to_color_location() const { return coverage_to_color_location_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::bool32_t coverage_to_color_enable_= 0;
  uint32_t coverage_to_color_location_= 0;// optional
};
static_assert(sizeof(pipeline_coverage_to_color_state_create_info_nv) == sizeof(pipeline_coverage_to_color_state_create_info_nv::underlying_type));

class pipeline_discard_rectangle_state_create_info_ext {
 public:
  using underlying_type = VkPipelineDiscardRectangleStateCreateInfoEXT;

  // mutators
  void set_discard_rectangles(spk::array_view<spk::rect_2d const> value) { p_discard_rectangles_ = value.get(); discard_rectangle_count_ = value.size(); }
  void set_discard_rectangle_mode(spk::discard_rectangle_mode_ext value) { discard_rectangle_mode_ = value; }

  // accessors
  spk::array_view<spk::rect_2d const> discard_rectangles() const { return {p_discard_rectangles_, discard_rectangle_count_};}
  spk::discard_rectangle_mode_ext discard_rectangle_mode() const { return discard_rectangle_mode_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::discard_rectangle_mode_ext discard_rectangle_mode_= spk::discard_rectangle_mode_ext(0);
  uint32_t discard_rectangle_count_= 0;// optional
  spk::rect_2d const * p_discard_rectangles_= 0;// optional
};
static_assert(sizeof(pipeline_discard_rectangle_state_create_info_ext) == sizeof(pipeline_discard_rectangle_state_create_info_ext::underlying_type));

class pipeline_dynamic_state_create_info {
 public:
  using underlying_type = VkPipelineDynamicStateCreateInfo;

  // mutators
  void set_dynamic_states(spk::array_view<spk::dynamic_state const> value) { p_dynamic_states_ = value.get(); dynamic_state_count_ = value.size(); }

  // accessors
  spk::array_view<spk::dynamic_state const> dynamic_states() const { return {p_dynamic_states_, dynamic_state_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t dynamic_state_count_= 0;
  spk::dynamic_state const * p_dynamic_states_= 0;
};
static_assert(sizeof(pipeline_dynamic_state_create_info) == sizeof(pipeline_dynamic_state_create_info::underlying_type));

class pipeline_input_assembly_state_create_info {
 public:
  using underlying_type = VkPipelineInputAssemblyStateCreateInfo;

  // mutators
  void set_primitive_restart_enable(bool val) { primitive_restart_enable_ = val; }
  void set_topology(spk::primitive_topology value) { topology_ = value; }

  // accessors
  bool primitive_restart_enable() const { return primitive_restart_enable_; }
  spk::primitive_topology topology() const { return topology_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::primitive_topology topology_= spk::primitive_topology(0);
  spk::bool32_t primitive_restart_enable_= 0;
};
static_assert(sizeof(pipeline_input_assembly_state_create_info) == sizeof(pipeline_input_assembly_state_create_info::underlying_type));

class pipeline_layout_create_info {
 public:
  using underlying_type = VkPipelineLayoutCreateInfo;

  // mutators
  void set_set_layouts(spk::array_view<spk::descriptor_set_layout_ref const> value) { p_set_layouts_ = value.get(); set_layout_count_ = value.size(); }
  void set_push_constant_ranges(spk::array_view<spk::push_constant_range const> value) { p_push_constant_ranges_ = value.get(); push_constant_range_count_ = value.size(); }

  // accessors
  spk::array_view<spk::descriptor_set_layout_ref const> set_layouts() const { return {p_set_layouts_, set_layout_count_};}
  spk::array_view<spk::push_constant_range const> push_constant_ranges() const { return {p_push_constant_ranges_, push_constant_range_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t set_layout_count_= 0;// optional
  spk::descriptor_set_layout_ref const * p_set_layouts_= 0;
  uint32_t push_constant_range_count_= 0;// optional
  spk::push_constant_range const * p_push_constant_ranges_= 0;
};
static_assert(sizeof(pipeline_layout_create_info) == sizeof(pipeline_layout_create_info::underlying_type));

class pipeline_multisample_state_create_info {
 public:
  using underlying_type = VkPipelineMultisampleStateCreateInfo;

  // mutators
  void set_sample_shading_enable(bool val) { sample_shading_enable_ = val; }
  void set_alpha_to_coverage_enable(bool val) { alpha_to_coverage_enable_ = val; }
  void set_alpha_to_one_enable(bool val) { alpha_to_one_enable_ = val; }
  void set_rasterization_samples(spk::sample_count_flags value) { rasterization_samples_ = value; }
  void set_min_sample_shading(float value) { min_sample_shading_ = value; }
  void set_p_sample_mask(VkSampleMask const * value) { p_sample_mask_ = value; }

  // accessors
  bool sample_shading_enable() const { return sample_shading_enable_; }
  bool alpha_to_coverage_enable() const { return alpha_to_coverage_enable_; }
  bool alpha_to_one_enable() const { return alpha_to_one_enable_; }
  spk::sample_count_flags rasterization_samples() const { return rasterization_samples_; }
  float min_sample_shading() const { return min_sample_shading_; }
  VkSampleMask const * p_sample_mask() const { return p_sample_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::sample_count_flags rasterization_samples_= spk::sample_count_flags(0);
  spk::bool32_t sample_shading_enable_= 0;
  float min_sample_shading_= 0;
  VkSampleMask const * p_sample_mask_= 0;// optional
  spk::bool32_t alpha_to_coverage_enable_= 0;
  spk::bool32_t alpha_to_one_enable_= 0;
};
static_assert(sizeof(pipeline_multisample_state_create_info) == sizeof(pipeline_multisample_state_create_info::underlying_type));

class pipeline_rasterization_conservative_state_create_info_ext {
 public:
  using underlying_type = VkPipelineRasterizationConservativeStateCreateInfoEXT;

  // mutators
  void set_conservative_rasterization_mode(spk::conservative_rasterization_mode_ext value) { conservative_rasterization_mode_ = value; }
  void set_extra_primitive_overestimation_size(float value) { extra_primitive_overestimation_size_ = value; }

  // accessors
  spk::conservative_rasterization_mode_ext conservative_rasterization_mode() const { return conservative_rasterization_mode_; }
  float extra_primitive_overestimation_size() const { return extra_primitive_overestimation_size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::conservative_rasterization_mode_ext conservative_rasterization_mode_= spk::conservative_rasterization_mode_ext(0);
  float extra_primitive_overestimation_size_= 0;
};
static_assert(sizeof(pipeline_rasterization_conservative_state_create_info_ext) == sizeof(pipeline_rasterization_conservative_state_create_info_ext::underlying_type));

class pipeline_rasterization_state_create_info {
 public:
  using underlying_type = VkPipelineRasterizationStateCreateInfo;

  // mutators
  void set_depth_clamp_enable(bool val) { depth_clamp_enable_ = val; }
  void set_rasterizer_discard_enable(bool val) { rasterizer_discard_enable_ = val; }
  void set_depth_bias_enable(bool val) { depth_bias_enable_ = val; }
  void set_polygon_mode(spk::polygon_mode value) { polygon_mode_ = value; }
  void set_cull_mode(spk::cull_mode_flags value) { cull_mode_ = value; }
  void set_front_face(spk::front_face value) { front_face_ = value; }
  void set_depth_bias_constant_factor(float value) { depth_bias_constant_factor_ = value; }
  void set_depth_bias_clamp(float value) { depth_bias_clamp_ = value; }
  void set_depth_bias_slope_factor(float value) { depth_bias_slope_factor_ = value; }
  void set_line_width(float value) { line_width_ = value; }

  // accessors
  bool depth_clamp_enable() const { return depth_clamp_enable_; }
  bool rasterizer_discard_enable() const { return rasterizer_discard_enable_; }
  bool depth_bias_enable() const { return depth_bias_enable_; }
  spk::polygon_mode polygon_mode() const { return polygon_mode_; }
  spk::cull_mode_flags cull_mode() const { return cull_mode_; }
  spk::front_face front_face() const { return front_face_; }
  float depth_bias_constant_factor() const { return depth_bias_constant_factor_; }
  float depth_bias_clamp() const { return depth_bias_clamp_; }
  float depth_bias_slope_factor() const { return depth_bias_slope_factor_; }
  float line_width() const { return line_width_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::bool32_t depth_clamp_enable_= 0;
  spk::bool32_t rasterizer_discard_enable_= 0;
  spk::polygon_mode polygon_mode_= spk::polygon_mode(0);
  spk::cull_mode_flags cull_mode_= spk::cull_mode_flags(0);// optional
  spk::front_face front_face_= spk::front_face(0);
  spk::bool32_t depth_bias_enable_= 0;
  float depth_bias_constant_factor_= 0;
  float depth_bias_clamp_= 0;
  float depth_bias_slope_factor_= 0;
  float line_width_= 0;
};
static_assert(sizeof(pipeline_rasterization_state_create_info) == sizeof(pipeline_rasterization_state_create_info::underlying_type));

class pipeline_rasterization_state_rasterization_order_amd {
 public:
  using underlying_type = VkPipelineRasterizationStateRasterizationOrderAMD;

  // mutators
  void set_rasterization_order(spk::rasterization_order_amd value) { rasterization_order_ = value; }

  // accessors
  spk::rasterization_order_amd rasterization_order() const { return rasterization_order_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD;
  void* p_next_ = nullptr;

  spk::rasterization_order_amd rasterization_order_= spk::rasterization_order_amd(0);
};
static_assert(sizeof(pipeline_rasterization_state_rasterization_order_amd) == sizeof(pipeline_rasterization_state_rasterization_order_amd::underlying_type));

class pipeline_shader_stage_create_info {
 public:
  using underlying_type = VkPipelineShaderStageCreateInfo;

  // mutators
  void set_name(spk::string_ptr str) { p_name_ = str.get(); }
  void set_stage(spk::shader_stage_flags value) { stage_ = value; }
  void set_module(spk::shader_module_ref value) { module_ = value; }
  void set_p_specialization_info(spk::specialization_info const * value) { p_specialization_info_ = value; }

  // accessors
  std::string_view name() const { return p_name_; }
  spk::shader_stage_flags stage() const { return stage_; }
  spk::shader_module_ref module() const { return module_; }
  spk::specialization_info const * p_specialization_info() const { return p_specialization_info_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::shader_stage_flags stage_= spk::shader_stage_flags(0);
  spk::shader_module_ref module_= 0;
  char const * p_name_= 0;
  spk::specialization_info const * p_specialization_info_= 0;// optional
};
static_assert(sizeof(pipeline_shader_stage_create_info) == sizeof(pipeline_shader_stage_create_info::underlying_type));

class pipeline_tessellation_domain_origin_state_create_info {
 public:
  using underlying_type = VkPipelineTessellationDomainOriginStateCreateInfo;

  // mutators
  void set_domain_origin(spk::tessellation_domain_origin value) { domain_origin_ = value; }

  // accessors
  spk::tessellation_domain_origin domain_origin() const { return domain_origin_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::tessellation_domain_origin domain_origin_= spk::tessellation_domain_origin(0);
};
static_assert(sizeof(pipeline_tessellation_domain_origin_state_create_info) == sizeof(pipeline_tessellation_domain_origin_state_create_info::underlying_type));
using pipeline_tessellation_domain_origin_state_create_info_khr = pipeline_tessellation_domain_origin_state_create_info;


class pipeline_tessellation_state_create_info {
 public:
  using underlying_type = VkPipelineTessellationStateCreateInfo;

  // mutators
  void set_patch_control_points(uint32_t value) { patch_control_points_ = value; }

  // accessors
  uint32_t patch_control_points() const { return patch_control_points_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t patch_control_points_= 0;
};
static_assert(sizeof(pipeline_tessellation_state_create_info) == sizeof(pipeline_tessellation_state_create_info::underlying_type));

class pipeline_vertex_input_divisor_state_create_info_ext {
 public:
  using underlying_type = VkPipelineVertexInputDivisorStateCreateInfoEXT;

  // mutators
  void set_vertex_binding_divisors(spk::array_view<spk::vertex_input_binding_divisor_description_ext const> value) { p_vertex_binding_divisors_ = value.get(); vertex_binding_divisor_count_ = value.size(); }

  // accessors
  spk::array_view<spk::vertex_input_binding_divisor_description_ext const> vertex_binding_divisors() const { return {p_vertex_binding_divisors_, vertex_binding_divisor_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  uint32_t vertex_binding_divisor_count_= 0;
  spk::vertex_input_binding_divisor_description_ext const * p_vertex_binding_divisors_= 0;
};
static_assert(sizeof(pipeline_vertex_input_divisor_state_create_info_ext) == sizeof(pipeline_vertex_input_divisor_state_create_info_ext::underlying_type));

class pipeline_vertex_input_state_create_info {
 public:
  using underlying_type = VkPipelineVertexInputStateCreateInfo;

  // mutators
  void set_vertex_binding_descriptions(spk::array_view<spk::vertex_input_binding_description const> value) { p_vertex_binding_descriptions_ = value.get(); vertex_binding_description_count_ = value.size(); }
  void set_vertex_attribute_descriptions(spk::array_view<spk::vertex_input_attribute_description const> value) { p_vertex_attribute_descriptions_ = value.get(); vertex_attribute_description_count_ = value.size(); }

  // accessors
  spk::array_view<spk::vertex_input_binding_description const> vertex_binding_descriptions() const { return {p_vertex_binding_descriptions_, vertex_binding_description_count_};}
  spk::array_view<spk::vertex_input_attribute_description const> vertex_attribute_descriptions() const { return {p_vertex_attribute_descriptions_, vertex_attribute_description_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t vertex_binding_description_count_= 0;// optional
  spk::vertex_input_binding_description const * p_vertex_binding_descriptions_= 0;
  uint32_t vertex_attribute_description_count_= 0;// optional
  spk::vertex_input_attribute_description const * p_vertex_attribute_descriptions_= 0;
};
static_assert(sizeof(pipeline_vertex_input_state_create_info) == sizeof(pipeline_vertex_input_state_create_info::underlying_type));

class pipeline_viewport_state_create_info {
 public:
  using underlying_type = VkPipelineViewportStateCreateInfo;

  // mutators
  void set_viewports(spk::array_view<spk::viewport const> value) { p_viewports_ = value.get(); viewport_count_ = value.size(); }
  void set_scissors(spk::array_view<spk::rect_2d const> value) { p_scissors_ = value.get(); scissor_count_ = value.size(); }

  // accessors
  spk::array_view<spk::viewport const> viewports() const { return {p_viewports_, viewport_count_};}
  spk::array_view<spk::rect_2d const> scissors() const { return {p_scissors_, scissor_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t viewport_count_= 0;
  spk::viewport const * p_viewports_= 0;// optional
  uint32_t scissor_count_= 0;
  spk::rect_2d const * p_scissors_= 0;// optional
};
static_assert(sizeof(pipeline_viewport_state_create_info) == sizeof(pipeline_viewport_state_create_info::underlying_type));

class pipeline_viewport_swizzle_state_create_info_nv {
 public:
  using underlying_type = VkPipelineViewportSwizzleStateCreateInfoNV;

  // mutators
  void set_viewport_swizzles(spk::array_view<spk::viewport_swizzle_nv const> value) { p_viewport_swizzles_ = value.get(); viewport_count_ = value.size(); }

  // accessors
  spk::array_view<spk::viewport_swizzle_nv const> viewport_swizzles() const { return {p_viewport_swizzles_, viewport_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t viewport_count_= 0;
  spk::viewport_swizzle_nv const * p_viewport_swizzles_= 0;// optional
};
static_assert(sizeof(pipeline_viewport_swizzle_state_create_info_nv) == sizeof(pipeline_viewport_swizzle_state_create_info_nv::underlying_type));

class pipeline_viewport_w_scaling_state_create_info_nv {
 public:
  using underlying_type = VkPipelineViewportWScalingStateCreateInfoNV;

  // mutators
  void set_viewport_w_scaling_enable(bool val) { viewport_w_scaling_enable_ = val; }
  void set_viewport_w_scalings(spk::array_view<spk::viewport_w_scaling_nv const> value) { p_viewport_w_scalings_ = value.get(); viewport_count_ = value.size(); }

  // accessors
  bool viewport_w_scaling_enable() const { return viewport_w_scaling_enable_; }
  spk::array_view<spk::viewport_w_scaling_nv const> viewport_w_scalings() const { return {p_viewport_w_scalings_, viewport_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV;
  void* p_next_ = nullptr;

  spk::bool32_t viewport_w_scaling_enable_= 0;
  uint32_t viewport_count_= 0;
  spk::viewport_w_scaling_nv const * p_viewport_w_scalings_= 0;
};
static_assert(sizeof(pipeline_viewport_w_scaling_state_create_info_nv) == sizeof(pipeline_viewport_w_scaling_state_create_info_nv::underlying_type));

class present_info_khr {
 public:
  using underlying_type = VkPresentInfoKHR;

  // mutators
  void set_wait_semaphores(spk::array_view<spk::semaphore_ref const> value) { p_wait_semaphores_ = value.get(); wait_semaphore_count_ = value.size(); }
  void set_swapchains(spk::array_view<spk::swapchain_khr_ref const> value) { p_swapchains_ = value.get(); swapchain_count_ = value.size(); }
  void set_image_indices(spk::array_view<uint32_t const> value) { p_image_indices_ = value.get(); swapchain_count_ = value.size(); }
  void set_results(spk::array_view<spk::result> value) { p_results_ = value.get(); swapchain_count_ = value.size(); }

  // accessors
  spk::array_view<spk::semaphore_ref const> wait_semaphores() const { return {p_wait_semaphores_, wait_semaphore_count_};}
  spk::array_view<spk::swapchain_khr_ref const> swapchains() const { return {p_swapchains_, swapchain_count_};}
  spk::array_view<uint32_t const> image_indices() const { return {p_image_indices_, swapchain_count_};}
  spk::array_view<spk::result> results() const { return {p_results_, swapchain_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
  void* p_next_ = nullptr;

  uint32_t wait_semaphore_count_= 0;// optional
  spk::semaphore_ref const * p_wait_semaphores_= 0;
  uint32_t swapchain_count_= 0;
  spk::swapchain_khr_ref const * p_swapchains_= 0;
  uint32_t const * p_image_indices_= 0;
  spk::result * p_results_= 0;// optional
};
static_assert(sizeof(present_info_khr) == sizeof(present_info_khr::underlying_type));

class present_region_khr {
 public:
  using underlying_type = VkPresentRegionKHR;

  // mutators
  void set_rectangles(spk::array_view<spk::rect_layer_khr const> value) { p_rectangles_ = value.get(); rectangle_count_ = value.size(); }

  // accessors
  spk::array_view<spk::rect_layer_khr const> rectangles() const { return {p_rectangles_, rectangle_count_};}

 private:
  uint32_t rectangle_count_= 0;// optional
  spk::rect_layer_khr const * p_rectangles_= 0;// optional
};
static_assert(sizeof(present_region_khr) == sizeof(present_region_khr::underlying_type));

class present_regions_khr {
 public:
  using underlying_type = VkPresentRegionsKHR;

  // mutators
  void set_regions(spk::array_view<spk::present_region_khr const> value) { p_regions_ = value.get(); swapchain_count_ = value.size(); }

  // accessors
  spk::array_view<spk::present_region_khr const> regions() const { return {p_regions_, swapchain_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
  void* p_next_ = nullptr;

  uint32_t swapchain_count_= 0;
  spk::present_region_khr const * p_regions_= 0;// optional
};
static_assert(sizeof(present_regions_khr) == sizeof(present_regions_khr::underlying_type));

class present_time_google {
 public:
  using underlying_type = VkPresentTimeGOOGLE;

  // mutators
  void set_present_id(uint32_t value) { present_id_ = value; }
  void set_desired_present_time(uint64_t value) { desired_present_time_ = value; }

  // accessors
  uint32_t present_id() const { return present_id_; }
  uint64_t desired_present_time() const { return desired_present_time_; }

 private:
  uint32_t present_id_= 0;
  uint64_t desired_present_time_= 0;
};
static_assert(sizeof(present_time_google) == sizeof(present_time_google::underlying_type));

class present_times_info_google {
 public:
  using underlying_type = VkPresentTimesInfoGOOGLE;

  // mutators
  void set_times(spk::array_view<spk::present_time_google const> value) { p_times_ = value.get(); swapchain_count_ = value.size(); }

  // accessors
  spk::array_view<spk::present_time_google const> times() const { return {p_times_, swapchain_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE;
  void* p_next_ = nullptr;

  uint32_t swapchain_count_= 0;
  spk::present_time_google const * p_times_= 0;// optional
};
static_assert(sizeof(present_times_info_google) == sizeof(present_times_info_google::underlying_type));

class protected_submit_info {
 public:
  using underlying_type = VkProtectedSubmitInfo;

  // mutators
  void set_protected_submit(bool val) { protected_submit_ = val; }

  // accessors
  bool protected_submit() const { return protected_submit_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO;
  void* p_next_ = nullptr;

  spk::bool32_t protected_submit_= 0;
};
static_assert(sizeof(protected_submit_info) == sizeof(protected_submit_info::underlying_type));

class push_constant_range {
 public:
  using underlying_type = VkPushConstantRange;

  // mutators
  void set_stage_flags(spk::shader_stage_flags value) { stage_flags_ = value; }
  void set_offset(uint32_t value) { offset_ = value; }
  void set_size(uint32_t value) { size_ = value; }

  // accessors
  spk::shader_stage_flags stage_flags() const { return stage_flags_; }
  uint32_t offset() const { return offset_; }
  uint32_t size() const { return size_; }

 private:
  spk::shader_stage_flags stage_flags_= spk::shader_stage_flags(0);
  uint32_t offset_= 0;
  uint32_t size_= 0;
};
static_assert(sizeof(push_constant_range) == sizeof(push_constant_range::underlying_type));

class query_pool_create_info {
 public:
  using underlying_type = VkQueryPoolCreateInfo;

  // mutators
  void set_query_type(spk::query_type value) { query_type_ = value; }
  void set_query_count(uint32_t value) { query_count_ = value; }
  void set_pipeline_statistics(spk::query_pipeline_statistic_flags value) { pipeline_statistics_ = value; }

  // accessors
  spk::query_type query_type() const { return query_type_; }
  uint32_t query_count() const { return query_count_; }
  spk::query_pipeline_statistic_flags pipeline_statistics() const { return pipeline_statistics_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::query_type query_type_= spk::query_type(0);
  uint32_t query_count_= 0;
  spk::query_pipeline_statistic_flags pipeline_statistics_= spk::query_pipeline_statistic_flags(0);// optional
};
static_assert(sizeof(query_pool_create_info) == sizeof(query_pool_create_info::underlying_type));

class queue_family_checkpoint_properties_nv {
 public:
  using underlying_type = VkQueueFamilyCheckpointPropertiesNV;

  // mutators
  void set_checkpoint_execution_stage_mask(spk::pipeline_stage_flags value) { checkpoint_execution_stage_mask_ = value; }

  // accessors
  spk::pipeline_stage_flags checkpoint_execution_stage_mask() const { return checkpoint_execution_stage_mask_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV;
  void* p_next_ = nullptr;

  spk::pipeline_stage_flags checkpoint_execution_stage_mask_= spk::pipeline_stage_flags(0);
};
static_assert(sizeof(queue_family_checkpoint_properties_nv) == sizeof(queue_family_checkpoint_properties_nv::underlying_type));

class refresh_cycle_duration_google {
 public:
  using underlying_type = VkRefreshCycleDurationGOOGLE;

  // mutators
  void set_refresh_duration(uint64_t value) { refresh_duration_ = value; }

  // accessors
  uint64_t refresh_duration() const { return refresh_duration_; }

 private:
  uint64_t refresh_duration_= 0;
};
static_assert(sizeof(refresh_cycle_duration_google) == sizeof(refresh_cycle_duration_google::underlying_type));

class render_pass_create_info {
 public:
  using underlying_type = VkRenderPassCreateInfo;

  // mutators
  void set_attachments(spk::array_view<spk::attachment_description const> value) { p_attachments_ = value.get(); attachment_count_ = value.size(); }
  void set_subpasses(spk::array_view<spk::subpass_description const> value) { p_subpasses_ = value.get(); subpass_count_ = value.size(); }
  void set_dependencies(spk::array_view<spk::subpass_dependency const> value) { p_dependencies_ = value.get(); dependency_count_ = value.size(); }

  // accessors
  spk::array_view<spk::attachment_description const> attachments() const { return {p_attachments_, attachment_count_};}
  spk::array_view<spk::subpass_description const> subpasses() const { return {p_subpasses_, subpass_count_};}
  spk::array_view<spk::subpass_dependency const> dependencies() const { return {p_dependencies_, dependency_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t attachment_count_= 0;// optional
  spk::attachment_description const * p_attachments_= 0;
  uint32_t subpass_count_= 0;
  spk::subpass_description const * p_subpasses_= 0;
  uint32_t dependency_count_= 0;// optional
  spk::subpass_dependency const * p_dependencies_= 0;
};
static_assert(sizeof(render_pass_create_info) == sizeof(render_pass_create_info::underlying_type));

class render_pass_create_info_2khr {
 public:
  using underlying_type = VkRenderPassCreateInfo2KHR;

  // mutators
  void set_attachments(spk::array_view<spk::attachment_description_2khr const> value) { p_attachments_ = value.get(); attachment_count_ = value.size(); }
  void set_subpasses(spk::array_view<spk::subpass_description_2khr const> value) { p_subpasses_ = value.get(); subpass_count_ = value.size(); }
  void set_dependencies(spk::array_view<spk::subpass_dependency_2khr const> value) { p_dependencies_ = value.get(); dependency_count_ = value.size(); }
  void set_correlated_view_masks(spk::array_view<uint32_t const> value) { p_correlated_view_masks_ = value.get(); correlated_view_mask_count_ = value.size(); }

  // accessors
  spk::array_view<spk::attachment_description_2khr const> attachments() const { return {p_attachments_, attachment_count_};}
  spk::array_view<spk::subpass_description_2khr const> subpasses() const { return {p_subpasses_, subpass_count_};}
  spk::array_view<spk::subpass_dependency_2khr const> dependencies() const { return {p_dependencies_, dependency_count_};}
  spk::array_view<uint32_t const> correlated_view_masks() const { return {p_correlated_view_masks_, correlated_view_mask_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  uint32_t attachment_count_= 0;// optional
  spk::attachment_description_2khr const * p_attachments_= 0;
  uint32_t subpass_count_= 0;
  spk::subpass_description_2khr const * p_subpasses_= 0;
  uint32_t dependency_count_= 0;// optional
  spk::subpass_dependency_2khr const * p_dependencies_= 0;
  uint32_t correlated_view_mask_count_= 0;// optional
  uint32_t const * p_correlated_view_masks_= 0;
};
static_assert(sizeof(render_pass_create_info_2khr) == sizeof(render_pass_create_info_2khr::underlying_type));

class render_pass_input_attachment_aspect_create_info {
 public:
  using underlying_type = VkRenderPassInputAttachmentAspectCreateInfo;

  // mutators
  void set_aspect_references(spk::array_view<spk::input_attachment_aspect_reference const> value) { p_aspect_references_ = value.get(); aspect_reference_count_ = value.size(); }

  // accessors
  spk::array_view<spk::input_attachment_aspect_reference const> aspect_references() const { return {p_aspect_references_, aspect_reference_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO;
  void* p_next_ = nullptr;

  uint32_t aspect_reference_count_= 0;
  spk::input_attachment_aspect_reference const * p_aspect_references_= 0;
};
static_assert(sizeof(render_pass_input_attachment_aspect_create_info) == sizeof(render_pass_input_attachment_aspect_create_info::underlying_type));
using render_pass_input_attachment_aspect_create_info_khr = render_pass_input_attachment_aspect_create_info;


class render_pass_multiview_create_info {
 public:
  using underlying_type = VkRenderPassMultiviewCreateInfo;

  // mutators
  void set_view_masks(spk::array_view<uint32_t const> value) { p_view_masks_ = value.get(); subpass_count_ = value.size(); }
  void set_view_offsets(spk::array_view<int32_t const> value) { p_view_offsets_ = value.get(); dependency_count_ = value.size(); }
  void set_correlation_masks(spk::array_view<uint32_t const> value) { p_correlation_masks_ = value.get(); correlation_mask_count_ = value.size(); }

  // accessors
  spk::array_view<uint32_t const> view_masks() const { return {p_view_masks_, subpass_count_};}
  spk::array_view<int32_t const> view_offsets() const { return {p_view_offsets_, dependency_count_};}
  spk::array_view<uint32_t const> correlation_masks() const { return {p_correlation_masks_, correlation_mask_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO;
  void* p_next_ = nullptr;

  uint32_t subpass_count_= 0;// optional
  uint32_t const * p_view_masks_= 0;
  uint32_t dependency_count_= 0;// optional
  int32_t const * p_view_offsets_= 0;
  uint32_t correlation_mask_count_= 0;// optional
  uint32_t const * p_correlation_masks_= 0;
};
static_assert(sizeof(render_pass_multiview_create_info) == sizeof(render_pass_multiview_create_info::underlying_type));
using render_pass_multiview_create_info_khr = render_pass_multiview_create_info;


class render_pass_sample_locations_begin_info_ext {
 public:
  using underlying_type = VkRenderPassSampleLocationsBeginInfoEXT;

  // mutators
  void set_attachment_initial_sample_locations(spk::array_view<spk::attachment_sample_locations_ext const> value) { p_attachment_initial_sample_locations_ = value.get(); attachment_initial_sample_locations_count_ = value.size(); }
  void set_post_subpass_sample_locations(spk::array_view<spk::subpass_sample_locations_ext const> value) { p_post_subpass_sample_locations_ = value.get(); post_subpass_sample_locations_count_ = value.size(); }

  // accessors
  spk::array_view<spk::attachment_sample_locations_ext const> attachment_initial_sample_locations() const { return {p_attachment_initial_sample_locations_, attachment_initial_sample_locations_count_};}
  spk::array_view<spk::subpass_sample_locations_ext const> post_subpass_sample_locations() const { return {p_post_subpass_sample_locations_, post_subpass_sample_locations_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT;
  void* p_next_ = nullptr;

  uint32_t attachment_initial_sample_locations_count_= 0;// optional
  spk::attachment_sample_locations_ext const * p_attachment_initial_sample_locations_= 0;
  uint32_t post_subpass_sample_locations_count_= 0;// optional
  spk::subpass_sample_locations_ext const * p_post_subpass_sample_locations_= 0;
};
static_assert(sizeof(render_pass_sample_locations_begin_info_ext) == sizeof(render_pass_sample_locations_begin_info_ext::underlying_type));

class sample_location_ext {
 public:
  using underlying_type = VkSampleLocationEXT;

  // mutators
  void set_x(float value) { x_ = value; }
  void set_y(float value) { y_ = value; }

  // accessors
  float x() const { return x_; }
  float y() const { return y_; }

 private:
  float x_= 0;
  float y_= 0;
};
static_assert(sizeof(sample_location_ext) == sizeof(sample_location_ext::underlying_type));

class sampler_create_info {
 public:
  using underlying_type = VkSamplerCreateInfo;

  // mutators
  void set_anisotropy_enable(bool val) { anisotropy_enable_ = val; }
  void set_compare_enable(bool val) { compare_enable_ = val; }
  void set_unnormalized_coordinates(bool val) { unnormalized_coordinates_ = val; }
  void set_mag_filter(spk::filter value) { mag_filter_ = value; }
  void set_min_filter(spk::filter value) { min_filter_ = value; }
  void set_mipmap_mode(spk::sampler_mipmap_mode value) { mipmap_mode_ = value; }
  void set_address_mode_u(spk::sampler_address_mode value) { address_mode_u_ = value; }
  void set_address_mode_v(spk::sampler_address_mode value) { address_mode_v_ = value; }
  void set_address_mode_w(spk::sampler_address_mode value) { address_mode_w_ = value; }
  void set_mip_lod_bias(float value) { mip_lod_bias_ = value; }
  void set_max_anisotropy(float value) { max_anisotropy_ = value; }
  void set_compare_op(spk::compare_op value) { compare_op_ = value; }
  void set_min_lod(float value) { min_lod_ = value; }
  void set_max_lod(float value) { max_lod_ = value; }
  void set_border_color(spk::border_color value) { border_color_ = value; }

  // accessors
  bool anisotropy_enable() const { return anisotropy_enable_; }
  bool compare_enable() const { return compare_enable_; }
  bool unnormalized_coordinates() const { return unnormalized_coordinates_; }
  spk::filter mag_filter() const { return mag_filter_; }
  spk::filter min_filter() const { return min_filter_; }
  spk::sampler_mipmap_mode mipmap_mode() const { return mipmap_mode_; }
  spk::sampler_address_mode address_mode_u() const { return address_mode_u_; }
  spk::sampler_address_mode address_mode_v() const { return address_mode_v_; }
  spk::sampler_address_mode address_mode_w() const { return address_mode_w_; }
  float mip_lod_bias() const { return mip_lod_bias_; }
  float max_anisotropy() const { return max_anisotropy_; }
  spk::compare_op compare_op() const { return compare_op_; }
  float min_lod() const { return min_lod_; }
  float max_lod() const { return max_lod_; }
  spk::border_color border_color() const { return border_color_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::filter mag_filter_= spk::filter(0);
  spk::filter min_filter_= spk::filter(0);
  spk::sampler_mipmap_mode mipmap_mode_= spk::sampler_mipmap_mode(0);
  spk::sampler_address_mode address_mode_u_= spk::sampler_address_mode(0);
  spk::sampler_address_mode address_mode_v_= spk::sampler_address_mode(0);
  spk::sampler_address_mode address_mode_w_= spk::sampler_address_mode(0);
  float mip_lod_bias_= 0;
  spk::bool32_t anisotropy_enable_= 0;
  float max_anisotropy_= 0;
  spk::bool32_t compare_enable_= 0;
  spk::compare_op compare_op_= spk::compare_op(0);
  float min_lod_= 0;
  float max_lod_= 0;
  spk::border_color border_color_= spk::border_color(0);
  spk::bool32_t unnormalized_coordinates_= 0;
};
static_assert(sizeof(sampler_create_info) == sizeof(sampler_create_info::underlying_type));

class sampler_reduction_mode_create_info_ext {
 public:
  using underlying_type = VkSamplerReductionModeCreateInfoEXT;

  // mutators
  void set_reduction_mode(spk::sampler_reduction_mode_ext value) { reduction_mode_ = value; }

  // accessors
  spk::sampler_reduction_mode_ext reduction_mode() const { return reduction_mode_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::sampler_reduction_mode_ext reduction_mode_= spk::sampler_reduction_mode_ext(0);
};
static_assert(sizeof(sampler_reduction_mode_create_info_ext) == sizeof(sampler_reduction_mode_create_info_ext::underlying_type));

class sampler_ycbcr_conversion_image_format_properties {
 public:
  using underlying_type = VkSamplerYcbcrConversionImageFormatProperties;

  // mutators
  void set_combined_image_sampler_descriptor_count(uint32_t value) { combined_image_sampler_descriptor_count_ = value; }

  // accessors
  uint32_t combined_image_sampler_descriptor_count() const { return combined_image_sampler_descriptor_count_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES;
  void* p_next_ = nullptr;

  uint32_t combined_image_sampler_descriptor_count_= 0;
};
static_assert(sizeof(sampler_ycbcr_conversion_image_format_properties) == sizeof(sampler_ycbcr_conversion_image_format_properties::underlying_type));
using sampler_ycbcr_conversion_image_format_properties_khr = sampler_ycbcr_conversion_image_format_properties;


class sampler_ycbcr_conversion_info {
 public:
  using underlying_type = VkSamplerYcbcrConversionInfo;

  // mutators
  void set_conversion(spk::sampler_ycbcr_conversion_ref value) { conversion_ = value; }

  // accessors
  spk::sampler_ycbcr_conversion_ref conversion() const { return conversion_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO;
  void* p_next_ = nullptr;

  spk::sampler_ycbcr_conversion_ref conversion_= 0;
};
static_assert(sizeof(sampler_ycbcr_conversion_info) == sizeof(sampler_ycbcr_conversion_info::underlying_type));
using sampler_ycbcr_conversion_info_khr = sampler_ycbcr_conversion_info;


class semaphore_create_info {
 public:
  using underlying_type = VkSemaphoreCreateInfo;

  // mutators

  // accessors

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
};
static_assert(sizeof(semaphore_create_info) == sizeof(semaphore_create_info::underlying_type));

class semaphore_get_fd_info_khr {
 public:
  using underlying_type = VkSemaphoreGetFdInfoKHR;

  // mutators
  void set_semaphore(spk::semaphore_ref value) { semaphore_ = value; }
  void set_handle_type(spk::external_semaphore_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::semaphore_ref semaphore() const { return semaphore_; }
  spk::external_semaphore_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR;
  void* p_next_ = nullptr;

  spk::semaphore_ref semaphore_= 0;
  spk::external_semaphore_handle_type_flags handle_type_= spk::external_semaphore_handle_type_flags(0);
};
static_assert(sizeof(semaphore_get_fd_info_khr) == sizeof(semaphore_get_fd_info_khr::underlying_type));

#ifdef VK_USE_PLATFORM_WIN32_KHR
class semaphore_get_win_32handle_info_khr {
 public:
  using underlying_type = VkSemaphoreGetWin32HandleInfoKHR;

  // mutators
  void set_semaphore(spk::semaphore_ref value) { semaphore_ = value; }
  void set_handle_type(spk::external_semaphore_handle_type_flags value) { handle_type_ = value; }

  // accessors
  spk::semaphore_ref semaphore() const { return semaphore_; }
  spk::external_semaphore_handle_type_flags handle_type() const { return handle_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::semaphore_ref semaphore_= 0;
  spk::external_semaphore_handle_type_flags handle_type_= spk::external_semaphore_handle_type_flags(0);
};
static_assert(sizeof(semaphore_get_win_32handle_info_khr) == sizeof(semaphore_get_win_32handle_info_khr::underlying_type));
#endif

class shader_module_create_info {
 public:
  using underlying_type = VkShaderModuleCreateInfo;

  // mutators
  void set_code_size(size_t value) { code_size_ = value; }
  void set_p_code(uint32_t const * value) { p_code_ = value; }

  // accessors
  size_t code_size() const { return code_size_; }
  uint32_t const * p_code() const { return p_code_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  size_t code_size_= 0;
  uint32_t const * p_code_= 0;
};
static_assert(sizeof(shader_module_create_info) == sizeof(shader_module_create_info::underlying_type));

class shader_module_validation_cache_create_info_ext {
 public:
  using underlying_type = VkShaderModuleValidationCacheCreateInfoEXT;

  // mutators
  void set_validation_cache(spk::validation_cache_ext_ref value) { validation_cache_ = value; }

  // accessors
  spk::validation_cache_ext_ref validation_cache() const { return validation_cache_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::validation_cache_ext_ref validation_cache_= 0;
};
static_assert(sizeof(shader_module_validation_cache_create_info_ext) == sizeof(shader_module_validation_cache_create_info_ext::underlying_type));

class shader_resource_usage_amd {
 public:
  using underlying_type = VkShaderResourceUsageAMD;

  // mutators
  void set_num_used_vgprs(uint32_t value) { num_used_vgprs_ = value; }
  void set_num_used_sgprs(uint32_t value) { num_used_sgprs_ = value; }
  void set_lds_size_per_local_work_group(uint32_t value) { lds_size_per_local_work_group_ = value; }
  void set_lds_usage_size_in_bytes(size_t value) { lds_usage_size_in_bytes_ = value; }
  void set_scratch_mem_usage_in_bytes(size_t value) { scratch_mem_usage_in_bytes_ = value; }

  // accessors
  uint32_t num_used_vgprs() const { return num_used_vgprs_; }
  uint32_t num_used_sgprs() const { return num_used_sgprs_; }
  uint32_t lds_size_per_local_work_group() const { return lds_size_per_local_work_group_; }
  size_t lds_usage_size_in_bytes() const { return lds_usage_size_in_bytes_; }
  size_t scratch_mem_usage_in_bytes() const { return scratch_mem_usage_in_bytes_; }

 private:
  uint32_t num_used_vgprs_= 0;
  uint32_t num_used_sgprs_= 0;
  uint32_t lds_size_per_local_work_group_= 0;
  size_t lds_usage_size_in_bytes_= 0;
  size_t scratch_mem_usage_in_bytes_= 0;
};
static_assert(sizeof(shader_resource_usage_amd) == sizeof(shader_resource_usage_amd::underlying_type));

class shared_present_surface_capabilities_khr {
 public:
  using underlying_type = VkSharedPresentSurfaceCapabilitiesKHR;

  // mutators
  void set_shared_present_supported_usage_flags(spk::image_usage_flags value) { shared_present_supported_usage_flags_ = value; }

  // accessors
  spk::image_usage_flags shared_present_supported_usage_flags() const { return shared_present_supported_usage_flags_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR;
  void* p_next_ = nullptr;

  spk::image_usage_flags shared_present_supported_usage_flags_= spk::image_usage_flags(0);// optional
};
static_assert(sizeof(shared_present_surface_capabilities_khr) == sizeof(shared_present_surface_capabilities_khr::underlying_type));

class sparse_buffer_memory_bind_info {
 public:
  using underlying_type = VkSparseBufferMemoryBindInfo;

  // mutators
  void set_binds(spk::array_view<spk::sparse_memory_bind const> value) { p_binds_ = value.get(); bind_count_ = value.size(); }
  void set_buffer(spk::buffer_ref value) { buffer_ = value; }

  // accessors
  spk::array_view<spk::sparse_memory_bind const> binds() const { return {p_binds_, bind_count_};}
  spk::buffer_ref buffer() const { return buffer_; }

 private:
  spk::buffer_ref buffer_= 0;
  uint32_t bind_count_= 0;
  spk::sparse_memory_bind const * p_binds_= 0;
};
static_assert(sizeof(sparse_buffer_memory_bind_info) == sizeof(sparse_buffer_memory_bind_info::underlying_type));

class sparse_image_memory_bind_info {
 public:
  using underlying_type = VkSparseImageMemoryBindInfo;

  // mutators
  void set_binds(spk::array_view<spk::sparse_image_memory_bind const> value) { p_binds_ = value.get(); bind_count_ = value.size(); }
  void set_image(spk::image_ref value) { image_ = value; }

  // accessors
  spk::array_view<spk::sparse_image_memory_bind const> binds() const { return {p_binds_, bind_count_};}
  spk::image_ref image() const { return image_; }

 private:
  spk::image_ref image_= 0;
  uint32_t bind_count_= 0;
  spk::sparse_image_memory_bind const * p_binds_= 0;
};
static_assert(sizeof(sparse_image_memory_bind_info) == sizeof(sparse_image_memory_bind_info::underlying_type));

class sparse_image_opaque_memory_bind_info {
 public:
  using underlying_type = VkSparseImageOpaqueMemoryBindInfo;

  // mutators
  void set_binds(spk::array_view<spk::sparse_memory_bind const> value) { p_binds_ = value.get(); bind_count_ = value.size(); }
  void set_image(spk::image_ref value) { image_ = value; }

  // accessors
  spk::array_view<spk::sparse_memory_bind const> binds() const { return {p_binds_, bind_count_};}
  spk::image_ref image() const { return image_; }

 private:
  spk::image_ref image_= 0;
  uint32_t bind_count_= 0;
  spk::sparse_memory_bind const * p_binds_= 0;
};
static_assert(sizeof(sparse_image_opaque_memory_bind_info) == sizeof(sparse_image_opaque_memory_bind_info::underlying_type));

class sparse_memory_bind {
 public:
  using underlying_type = VkSparseMemoryBind;

  // mutators
  void set_resource_offset(uint64_t value) { resource_offset_ = value; }
  void set_size(uint64_t value) { size_ = value; }
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_memory_offset(uint64_t value) { memory_offset_ = value; }
  void set_flags(spk::sparse_memory_bind_flags value) { flags_ = value; }

  // accessors
  uint64_t resource_offset() const { return resource_offset_; }
  uint64_t size() const { return size_; }
  spk::device_memory_ref memory() const { return memory_; }
  uint64_t memory_offset() const { return memory_offset_; }
  spk::sparse_memory_bind_flags flags() const { return flags_; }

 private:
  uint64_t resource_offset_= 0;
  uint64_t size_= 0;
  spk::device_memory_ref memory_= 0;// optional
  uint64_t memory_offset_= 0;
  spk::sparse_memory_bind_flags flags_= spk::sparse_memory_bind_flags(0);// optional
};
static_assert(sizeof(sparse_memory_bind) == sizeof(sparse_memory_bind::underlying_type));

class specialization_info {
 public:
  using underlying_type = VkSpecializationInfo;

  // mutators
  void set_map_entries(spk::array_view<spk::specialization_map_entry const> value) { p_map_entries_ = value.get(); map_entry_count_ = value.size(); }
  void set_data(spk::array_view<void const> value) { p_data_ = value.get(); data_size_ = value.size(); }

  // accessors
  spk::array_view<spk::specialization_map_entry const> map_entries() const { return {p_map_entries_, map_entry_count_};}
  spk::array_view<void const> data() const { return {p_data_, data_size_};}

 private:
  uint32_t map_entry_count_= 0;// optional
  spk::specialization_map_entry const * p_map_entries_= 0;
  size_t data_size_= 0;// optional
  void const * p_data_= 0;
};
static_assert(sizeof(specialization_info) == sizeof(specialization_info::underlying_type));

class specialization_map_entry {
 public:
  using underlying_type = VkSpecializationMapEntry;

  // mutators
  void set_constant_id(uint32_t value) { constant_id_ = value; }
  void set_offset(uint32_t value) { offset_ = value; }
  void set_size(size_t value) { size_ = value; }

  // accessors
  uint32_t constant_id() const { return constant_id_; }
  uint32_t offset() const { return offset_; }
  size_t size() const { return size_; }

 private:
  uint32_t constant_id_= 0;
  uint32_t offset_= 0;
  size_t size_= 0;
};
static_assert(sizeof(specialization_map_entry) == sizeof(specialization_map_entry::underlying_type));

class stencil_op_state {
 public:
  using underlying_type = VkStencilOpState;

  // mutators
  void set_fail_op(spk::stencil_op value) { fail_op_ = value; }
  void set_pass_op(spk::stencil_op value) { pass_op_ = value; }
  void set_depth_fail_op(spk::stencil_op value) { depth_fail_op_ = value; }
  void set_compare_op(spk::compare_op value) { compare_op_ = value; }
  void set_compare_mask(uint32_t value) { compare_mask_ = value; }
  void set_write_mask(uint32_t value) { write_mask_ = value; }
  void set_reference(uint32_t value) { reference_ = value; }

  // accessors
  spk::stencil_op fail_op() const { return fail_op_; }
  spk::stencil_op pass_op() const { return pass_op_; }
  spk::stencil_op depth_fail_op() const { return depth_fail_op_; }
  spk::compare_op compare_op() const { return compare_op_; }
  uint32_t compare_mask() const { return compare_mask_; }
  uint32_t write_mask() const { return write_mask_; }
  uint32_t reference() const { return reference_; }

 private:
  spk::stencil_op fail_op_= spk::stencil_op(0);
  spk::stencil_op pass_op_= spk::stencil_op(0);
  spk::stencil_op depth_fail_op_= spk::stencil_op(0);
  spk::compare_op compare_op_= spk::compare_op(0);
  uint32_t compare_mask_= 0;
  uint32_t write_mask_= 0;
  uint32_t reference_= 0;
};
static_assert(sizeof(stencil_op_state) == sizeof(stencil_op_state::underlying_type));

class submit_info {
 public:
  using underlying_type = VkSubmitInfo;

  // mutators
  void set_wait_semaphores(spk::array_view<spk::semaphore_ref const> value) { p_wait_semaphores_ = value.get(); wait_semaphore_count_ = value.size(); }
  void set_wait_dst_stage_mask(spk::array_view<spk::pipeline_stage_flags const> value) { p_wait_dst_stage_mask_ = value.get(); wait_semaphore_count_ = value.size(); }
  void set_command_buffers(spk::array_view<spk::command_buffer_ref const> value) { p_command_buffers_ = value.get(); command_buffer_count_ = value.size(); }
  void set_signal_semaphores(spk::array_view<spk::semaphore_ref const> value) { p_signal_semaphores_ = value.get(); signal_semaphore_count_ = value.size(); }

  // accessors
  spk::array_view<spk::semaphore_ref const> wait_semaphores() const { return {p_wait_semaphores_, wait_semaphore_count_};}
  spk::array_view<spk::pipeline_stage_flags const> wait_dst_stage_mask() const { return {p_wait_dst_stage_mask_, wait_semaphore_count_};}
  spk::array_view<spk::command_buffer_ref const> command_buffers() const { return {p_command_buffers_, command_buffer_count_};}
  spk::array_view<spk::semaphore_ref const> signal_semaphores() const { return {p_signal_semaphores_, signal_semaphore_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SUBMIT_INFO;
  void* p_next_ = nullptr;

  uint32_t wait_semaphore_count_= 0;// optional
  spk::semaphore_ref const * p_wait_semaphores_= 0;
  spk::pipeline_stage_flags const * p_wait_dst_stage_mask_= 0;
  uint32_t command_buffer_count_= 0;// optional
  spk::command_buffer_ref const * p_command_buffers_= 0;
  uint32_t signal_semaphore_count_= 0;// optional
  spk::semaphore_ref const * p_signal_semaphores_= 0;
};
static_assert(sizeof(submit_info) == sizeof(submit_info::underlying_type));

class subpass_begin_info_khr {
 public:
  using underlying_type = VkSubpassBeginInfoKHR;

  // mutators
  void set_contents(spk::subpass_contents value) { contents_ = value; }

  // accessors
  spk::subpass_contents contents() const { return contents_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO_KHR;
  void* p_next_ = nullptr;

  spk::subpass_contents contents_= spk::subpass_contents(0);
};
static_assert(sizeof(subpass_begin_info_khr) == sizeof(subpass_begin_info_khr::underlying_type));

class subpass_dependency {
 public:
  using underlying_type = VkSubpassDependency;

  // mutators
  void set_src_subpass(uint32_t value) { src_subpass_ = value; }
  void set_dst_subpass(uint32_t value) { dst_subpass_ = value; }
  void set_src_stage_mask(spk::pipeline_stage_flags value) { src_stage_mask_ = value; }
  void set_dst_stage_mask(spk::pipeline_stage_flags value) { dst_stage_mask_ = value; }
  void set_src_access_mask(spk::access_flags value) { src_access_mask_ = value; }
  void set_dst_access_mask(spk::access_flags value) { dst_access_mask_ = value; }
  void set_dependency_flags(spk::dependency_flags value) { dependency_flags_ = value; }

  // accessors
  uint32_t src_subpass() const { return src_subpass_; }
  uint32_t dst_subpass() const { return dst_subpass_; }
  spk::pipeline_stage_flags src_stage_mask() const { return src_stage_mask_; }
  spk::pipeline_stage_flags dst_stage_mask() const { return dst_stage_mask_; }
  spk::access_flags src_access_mask() const { return src_access_mask_; }
  spk::access_flags dst_access_mask() const { return dst_access_mask_; }
  spk::dependency_flags dependency_flags() const { return dependency_flags_; }

 private:
  uint32_t src_subpass_= 0;
  uint32_t dst_subpass_= 0;
  spk::pipeline_stage_flags src_stage_mask_= spk::pipeline_stage_flags(0);
  spk::pipeline_stage_flags dst_stage_mask_= spk::pipeline_stage_flags(0);
  spk::access_flags src_access_mask_= spk::access_flags(0);// optional
  spk::access_flags dst_access_mask_= spk::access_flags(0);// optional
  spk::dependency_flags dependency_flags_= spk::dependency_flags(0);// optional
};
static_assert(sizeof(subpass_dependency) == sizeof(subpass_dependency::underlying_type));

class subpass_dependency_2khr {
 public:
  using underlying_type = VkSubpassDependency2KHR;

  // mutators
  void set_src_subpass(uint32_t value) { src_subpass_ = value; }
  void set_dst_subpass(uint32_t value) { dst_subpass_ = value; }
  void set_src_stage_mask(spk::pipeline_stage_flags value) { src_stage_mask_ = value; }
  void set_dst_stage_mask(spk::pipeline_stage_flags value) { dst_stage_mask_ = value; }
  void set_src_access_mask(spk::access_flags value) { src_access_mask_ = value; }
  void set_dst_access_mask(spk::access_flags value) { dst_access_mask_ = value; }
  void set_dependency_flags(spk::dependency_flags value) { dependency_flags_ = value; }
  void set_view_offset(int32_t value) { view_offset_ = value; }

  // accessors
  uint32_t src_subpass() const { return src_subpass_; }
  uint32_t dst_subpass() const { return dst_subpass_; }
  spk::pipeline_stage_flags src_stage_mask() const { return src_stage_mask_; }
  spk::pipeline_stage_flags dst_stage_mask() const { return dst_stage_mask_; }
  spk::access_flags src_access_mask() const { return src_access_mask_; }
  spk::access_flags dst_access_mask() const { return dst_access_mask_; }
  spk::dependency_flags dependency_flags() const { return dependency_flags_; }
  int32_t view_offset() const { return view_offset_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2_KHR;
  void* p_next_ = nullptr;

  uint32_t src_subpass_= 0;
  uint32_t dst_subpass_= 0;
  spk::pipeline_stage_flags src_stage_mask_= spk::pipeline_stage_flags(0);
  spk::pipeline_stage_flags dst_stage_mask_= spk::pipeline_stage_flags(0);
  spk::access_flags src_access_mask_= spk::access_flags(0);// optional
  spk::access_flags dst_access_mask_= spk::access_flags(0);// optional
  spk::dependency_flags dependency_flags_= spk::dependency_flags(0);// optional
  int32_t view_offset_= 0;// optional
};
static_assert(sizeof(subpass_dependency_2khr) == sizeof(subpass_dependency_2khr::underlying_type));

class subpass_description {
 public:
  using underlying_type = VkSubpassDescription;

  // mutators
  void set_input_attachments(spk::array_view<spk::attachment_reference const> value) { p_input_attachments_ = value.get(); input_attachment_count_ = value.size(); }
  void set_color_attachments(spk::array_view<spk::attachment_reference const> value) { p_color_attachments_ = value.get(); color_attachment_count_ = value.size(); }
  void set_resolve_attachments(spk::array_view<spk::attachment_reference const> value) { p_resolve_attachments_ = value.get(); color_attachment_count_ = value.size(); }
  void set_preserve_attachments(spk::array_view<uint32_t const> value) { p_preserve_attachments_ = value.get(); preserve_attachment_count_ = value.size(); }
  void set_flags(spk::subpass_description_flags value) { flags_ = value; }
  void set_pipeline_bind_point(spk::pipeline_bind_point value) { pipeline_bind_point_ = value; }
  void set_p_depth_stencil_attachment(spk::attachment_reference const * value) { p_depth_stencil_attachment_ = value; }

  // accessors
  spk::array_view<spk::attachment_reference const> input_attachments() const { return {p_input_attachments_, input_attachment_count_};}
  spk::array_view<spk::attachment_reference const> color_attachments() const { return {p_color_attachments_, color_attachment_count_};}
  spk::array_view<spk::attachment_reference const> resolve_attachments() const { return {p_resolve_attachments_, color_attachment_count_};}
  spk::array_view<uint32_t const> preserve_attachments() const { return {p_preserve_attachments_, preserve_attachment_count_};}
  spk::subpass_description_flags flags() const { return flags_; }
  spk::pipeline_bind_point pipeline_bind_point() const { return pipeline_bind_point_; }
  spk::attachment_reference const * p_depth_stencil_attachment() const { return p_depth_stencil_attachment_; }

 private:
  spk::subpass_description_flags flags_= spk::subpass_description_flags(0);// optional
  spk::pipeline_bind_point pipeline_bind_point_= spk::pipeline_bind_point(0);
  uint32_t input_attachment_count_= 0;// optional
  spk::attachment_reference const * p_input_attachments_= 0;
  uint32_t color_attachment_count_= 0;// optional
  spk::attachment_reference const * p_color_attachments_= 0;
  spk::attachment_reference const * p_resolve_attachments_= 0;// optional
  spk::attachment_reference const * p_depth_stencil_attachment_= 0;// optional
  uint32_t preserve_attachment_count_= 0;// optional
  uint32_t const * p_preserve_attachments_= 0;
};
static_assert(sizeof(subpass_description) == sizeof(subpass_description::underlying_type));

class subpass_description_2khr {
 public:
  using underlying_type = VkSubpassDescription2KHR;

  // mutators
  void set_input_attachments(spk::array_view<spk::attachment_reference_2khr const> value) { p_input_attachments_ = value.get(); input_attachment_count_ = value.size(); }
  void set_color_attachments(spk::array_view<spk::attachment_reference_2khr const> value) { p_color_attachments_ = value.get(); color_attachment_count_ = value.size(); }
  void set_resolve_attachments(spk::array_view<spk::attachment_reference_2khr const> value) { p_resolve_attachments_ = value.get(); color_attachment_count_ = value.size(); }
  void set_preserve_attachments(spk::array_view<uint32_t const> value) { p_preserve_attachments_ = value.get(); preserve_attachment_count_ = value.size(); }
  void set_flags(spk::subpass_description_flags value) { flags_ = value; }
  void set_pipeline_bind_point(spk::pipeline_bind_point value) { pipeline_bind_point_ = value; }
  void set_view_mask(uint32_t value) { view_mask_ = value; }
  void set_p_depth_stencil_attachment(spk::attachment_reference_2khr const * value) { p_depth_stencil_attachment_ = value; }

  // accessors
  spk::array_view<spk::attachment_reference_2khr const> input_attachments() const { return {p_input_attachments_, input_attachment_count_};}
  spk::array_view<spk::attachment_reference_2khr const> color_attachments() const { return {p_color_attachments_, color_attachment_count_};}
  spk::array_view<spk::attachment_reference_2khr const> resolve_attachments() const { return {p_resolve_attachments_, color_attachment_count_};}
  spk::array_view<uint32_t const> preserve_attachments() const { return {p_preserve_attachments_, preserve_attachment_count_};}
  spk::subpass_description_flags flags() const { return flags_; }
  spk::pipeline_bind_point pipeline_bind_point() const { return pipeline_bind_point_; }
  uint32_t view_mask() const { return view_mask_; }
  spk::attachment_reference_2khr const * p_depth_stencil_attachment() const { return p_depth_stencil_attachment_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;
  void* p_next_ = nullptr;

  spk::subpass_description_flags flags_= spk::subpass_description_flags(0);// optional
  spk::pipeline_bind_point pipeline_bind_point_= spk::pipeline_bind_point(0);
  uint32_t view_mask_= 0;
  uint32_t input_attachment_count_= 0;// optional
  spk::attachment_reference_2khr const * p_input_attachments_= 0;
  uint32_t color_attachment_count_= 0;// optional
  spk::attachment_reference_2khr const * p_color_attachments_= 0;
  spk::attachment_reference_2khr const * p_resolve_attachments_= 0;// optional
  spk::attachment_reference_2khr const * p_depth_stencil_attachment_= 0;// optional
  uint32_t preserve_attachment_count_= 0;// optional
  uint32_t const * p_preserve_attachments_= 0;
};
static_assert(sizeof(subpass_description_2khr) == sizeof(subpass_description_2khr::underlying_type));

class subpass_end_info_khr {
 public:
  using underlying_type = VkSubpassEndInfoKHR;

  // mutators

  // accessors

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SUBPASS_END_INFO_KHR;
  void* p_next_ = nullptr;

};
static_assert(sizeof(subpass_end_info_khr) == sizeof(subpass_end_info_khr::underlying_type));

class subresource_layout {
 public:
  using underlying_type = VkSubresourceLayout;

  // mutators
  void set_offset(uint64_t value) { offset_ = value; }
  void set_size(uint64_t value) { size_ = value; }
  void set_row_pitch(uint64_t value) { row_pitch_ = value; }
  void set_array_pitch(uint64_t value) { array_pitch_ = value; }
  void set_depth_pitch(uint64_t value) { depth_pitch_ = value; }

  // accessors
  uint64_t offset() const { return offset_; }
  uint64_t size() const { return size_; }
  uint64_t row_pitch() const { return row_pitch_; }
  uint64_t array_pitch() const { return array_pitch_; }
  uint64_t depth_pitch() const { return depth_pitch_; }

 private:
  uint64_t offset_= 0;
  uint64_t size_= 0;
  uint64_t row_pitch_= 0;
  uint64_t array_pitch_= 0;
  uint64_t depth_pitch_= 0;
};
static_assert(sizeof(subresource_layout) == sizeof(subresource_layout::underlying_type));

class surface_format_khr {
 public:
  using underlying_type = VkSurfaceFormatKHR;

  // mutators
  void set_format(spk::format value) { format_ = value; }
  void set_color_space(spk::color_space_khr value) { color_space_ = value; }

  // accessors
  spk::format format() const { return format_; }
  spk::color_space_khr color_space() const { return color_space_; }

 private:
  spk::format format_= spk::format(0);
  spk::color_space_khr color_space_= spk::color_space_khr(0);
};
static_assert(sizeof(surface_format_khr) == sizeof(surface_format_khr::underlying_type));

class swapchain_counter_create_info_ext {
 public:
  using underlying_type = VkSwapchainCounterCreateInfoEXT;

  // mutators
  void set_surface_counters(spk::surface_counter_flags_ext value) { surface_counters_ = value; }

  // accessors
  spk::surface_counter_flags_ext surface_counters() const { return surface_counters_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::surface_counter_flags_ext surface_counters_= spk::surface_counter_flags_ext(0);// optional
};
static_assert(sizeof(swapchain_counter_create_info_ext) == sizeof(swapchain_counter_create_info_ext::underlying_type));

class texture_lod_gather_format_properties_amd {
 public:
  using underlying_type = VkTextureLODGatherFormatPropertiesAMD;

  // mutators
  void set_supports_texture_gather_lod_bias_amd(bool val) { supports_texture_gather_lod_bias_amd_ = val; }

  // accessors
  bool supports_texture_gather_lod_bias_amd() const { return supports_texture_gather_lod_bias_amd_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD;
  void* p_next_ = nullptr;

  spk::bool32_t supports_texture_gather_lod_bias_amd_= 0;
};
static_assert(sizeof(texture_lod_gather_format_properties_amd) == sizeof(texture_lod_gather_format_properties_amd::underlying_type));

class validation_cache_create_info_ext {
 public:
  using underlying_type = VkValidationCacheCreateInfoEXT;

  // mutators
  void set_initial_data(spk::array_view<void const> value) { p_initial_data_ = value.get(); initial_data_size_ = value.size(); }

  // accessors
  spk::array_view<void const> initial_data() const { return {p_initial_data_, initial_data_size_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  size_t initial_data_size_= 0;// optional
  void const * p_initial_data_= 0;
};
static_assert(sizeof(validation_cache_create_info_ext) == sizeof(validation_cache_create_info_ext::underlying_type));

class validation_flags_ext {
 public:
  using underlying_type = VkValidationFlagsEXT;

  // mutators
  void set_disabled_validation_checks(spk::array_view<spk::validation_check_ext const> value) { p_disabled_validation_checks_ = value.get(); disabled_validation_check_count_ = value.size(); }

  // accessors
  spk::array_view<spk::validation_check_ext const> disabled_validation_checks() const { return {p_disabled_validation_checks_, disabled_validation_check_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT;
  void* p_next_ = nullptr;

  uint32_t disabled_validation_check_count_= 0;
  spk::validation_check_ext const * p_disabled_validation_checks_= 0;
};
static_assert(sizeof(validation_flags_ext) == sizeof(validation_flags_ext::underlying_type));

class vertex_input_attribute_description {
 public:
  using underlying_type = VkVertexInputAttributeDescription;

  // mutators
  void set_location(uint32_t value) { location_ = value; }
  void set_binding(uint32_t value) { binding_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_offset(uint32_t value) { offset_ = value; }

  // accessors
  uint32_t location() const { return location_; }
  uint32_t binding() const { return binding_; }
  spk::format format() const { return format_; }
  uint32_t offset() const { return offset_; }

 private:
  uint32_t location_= 0;
  uint32_t binding_= 0;
  spk::format format_= spk::format(0);
  uint32_t offset_= 0;
};
static_assert(sizeof(vertex_input_attribute_description) == sizeof(vertex_input_attribute_description::underlying_type));

class vertex_input_binding_description {
 public:
  using underlying_type = VkVertexInputBindingDescription;

  // mutators
  void set_binding(uint32_t value) { binding_ = value; }
  void set_stride(uint32_t value) { stride_ = value; }
  void set_input_rate(spk::vertex_input_rate value) { input_rate_ = value; }

  // accessors
  uint32_t binding() const { return binding_; }
  uint32_t stride() const { return stride_; }
  spk::vertex_input_rate input_rate() const { return input_rate_; }

 private:
  uint32_t binding_= 0;
  uint32_t stride_= 0;
  spk::vertex_input_rate input_rate_= spk::vertex_input_rate(0);
};
static_assert(sizeof(vertex_input_binding_description) == sizeof(vertex_input_binding_description::underlying_type));

class vertex_input_binding_divisor_description_ext {
 public:
  using underlying_type = VkVertexInputBindingDivisorDescriptionEXT;

  // mutators
  void set_binding(uint32_t value) { binding_ = value; }
  void set_divisor(uint32_t value) { divisor_ = value; }

  // accessors
  uint32_t binding() const { return binding_; }
  uint32_t divisor() const { return divisor_; }

 private:
  uint32_t binding_= 0;
  uint32_t divisor_= 0;
};
static_assert(sizeof(vertex_input_binding_divisor_description_ext) == sizeof(vertex_input_binding_divisor_description_ext::underlying_type));

#ifdef VK_USE_PLATFORM_VI_NN
class vi_surface_create_info_nn {
 public:
  using underlying_type = VkViSurfaceCreateInfoNN;

  // mutators
  void set_window(void * value) { window_ = value; }

  // accessors
  void * window() const { return window_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_VI_SURFACE_CREATE_INFO_NN;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  void * window_= 0;
};
static_assert(sizeof(vi_surface_create_info_nn) == sizeof(vi_surface_create_info_nn::underlying_type));
#endif

class viewport {
 public:
  using underlying_type = VkViewport;

  // mutators
  void set_x(float value) { x_ = value; }
  void set_y(float value) { y_ = value; }
  void set_width(float value) { width_ = value; }
  void set_height(float value) { height_ = value; }
  void set_min_depth(float value) { min_depth_ = value; }
  void set_max_depth(float value) { max_depth_ = value; }

  // accessors
  float x() const { return x_; }
  float y() const { return y_; }
  float width() const { return width_; }
  float height() const { return height_; }
  float min_depth() const { return min_depth_; }
  float max_depth() const { return max_depth_; }

 private:
  float x_= 0;
  float y_= 0;
  float width_= 0;
  float height_= 0;
  float min_depth_= 0;
  float max_depth_= 0;
};
static_assert(sizeof(viewport) == sizeof(viewport::underlying_type));

class viewport_swizzle_nv {
 public:
  using underlying_type = VkViewportSwizzleNV;

  // mutators
  void set_x(spk::viewport_coordinate_swizzle_nv value) { x_ = value; }
  void set_y(spk::viewport_coordinate_swizzle_nv value) { y_ = value; }
  void set_z(spk::viewport_coordinate_swizzle_nv value) { z_ = value; }
  void set_w(spk::viewport_coordinate_swizzle_nv value) { w_ = value; }

  // accessors
  spk::viewport_coordinate_swizzle_nv x() const { return x_; }
  spk::viewport_coordinate_swizzle_nv y() const { return y_; }
  spk::viewport_coordinate_swizzle_nv z() const { return z_; }
  spk::viewport_coordinate_swizzle_nv w() const { return w_; }

 private:
  spk::viewport_coordinate_swizzle_nv x_= spk::viewport_coordinate_swizzle_nv(0);
  spk::viewport_coordinate_swizzle_nv y_= spk::viewport_coordinate_swizzle_nv(0);
  spk::viewport_coordinate_swizzle_nv z_= spk::viewport_coordinate_swizzle_nv(0);
  spk::viewport_coordinate_swizzle_nv w_= spk::viewport_coordinate_swizzle_nv(0);
};
static_assert(sizeof(viewport_swizzle_nv) == sizeof(viewport_swizzle_nv::underlying_type));

class viewport_w_scaling_nv {
 public:
  using underlying_type = VkViewportWScalingNV;

  // mutators
  void set_xcoeff(float value) { xcoeff_ = value; }
  void set_ycoeff(float value) { ycoeff_ = value; }

  // accessors
  float xcoeff() const { return xcoeff_; }
  float ycoeff() const { return ycoeff_; }

 private:
  float xcoeff_= 0;
  float ycoeff_= 0;
};
static_assert(sizeof(viewport_w_scaling_nv) == sizeof(viewport_w_scaling_nv::underlying_type));

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
class wayland_surface_create_info_khr {
 public:
  using underlying_type = VkWaylandSurfaceCreateInfoKHR;

  // mutators
  void set_display(wl_display * value) { display_ = value; }
  void set_surface(wl_surface * value) { surface_ = value; }

  // accessors
  wl_display * display() const { return display_; }
  wl_surface * surface() const { return surface_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_WAYLAND_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  wl_display * display_= 0;
  wl_surface * surface_= 0;
};
static_assert(sizeof(wayland_surface_create_info_khr) == sizeof(wayland_surface_create_info_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32keyed_mutex_acquire_release_info_khr {
 public:
  using underlying_type = VkWin32KeyedMutexAcquireReleaseInfoKHR;

  // mutators
  void set_acquire_syncs(spk::array_view<spk::device_memory_ref const> value) { p_acquire_syncs_ = value.get(); acquire_count_ = value.size(); }
  void set_acquire_keys(spk::array_view<uint64_t const> value) { p_acquire_keys_ = value.get(); acquire_count_ = value.size(); }
  void set_acquire_timeouts(spk::array_view<uint32_t const> value) { p_acquire_timeouts_ = value.get(); acquire_count_ = value.size(); }
  void set_release_syncs(spk::array_view<spk::device_memory_ref const> value) { p_release_syncs_ = value.get(); release_count_ = value.size(); }
  void set_release_keys(spk::array_view<uint64_t const> value) { p_release_keys_ = value.get(); release_count_ = value.size(); }

  // accessors
  spk::array_view<spk::device_memory_ref const> acquire_syncs() const { return {p_acquire_syncs_, acquire_count_};}
  spk::array_view<uint64_t const> acquire_keys() const { return {p_acquire_keys_, acquire_count_};}
  spk::array_view<uint32_t const> acquire_timeouts() const { return {p_acquire_timeouts_, acquire_count_};}
  spk::array_view<spk::device_memory_ref const> release_syncs() const { return {p_release_syncs_, release_count_};}
  spk::array_view<uint64_t const> release_keys() const { return {p_release_keys_, release_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_KHR;
  void* p_next_ = nullptr;

  uint32_t acquire_count_= 0;// optional
  spk::device_memory_ref const * p_acquire_syncs_= 0;
  uint64_t const * p_acquire_keys_= 0;
  uint32_t const * p_acquire_timeouts_= 0;
  uint32_t release_count_= 0;// optional
  spk::device_memory_ref const * p_release_syncs_= 0;
  uint64_t const * p_release_keys_= 0;
};
static_assert(sizeof(win_32keyed_mutex_acquire_release_info_khr) == sizeof(win_32keyed_mutex_acquire_release_info_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32keyed_mutex_acquire_release_info_nv {
 public:
  using underlying_type = VkWin32KeyedMutexAcquireReleaseInfoNV;

  // mutators
  void set_acquire_syncs(spk::array_view<spk::device_memory_ref const> value) { p_acquire_syncs_ = value.get(); acquire_count_ = value.size(); }
  void set_acquire_keys(spk::array_view<uint64_t const> value) { p_acquire_keys_ = value.get(); acquire_count_ = value.size(); }
  void set_acquire_timeout_milliseconds(spk::array_view<uint32_t const> value) { p_acquire_timeout_milliseconds_ = value.get(); acquire_count_ = value.size(); }
  void set_release_syncs(spk::array_view<spk::device_memory_ref const> value) { p_release_syncs_ = value.get(); release_count_ = value.size(); }
  void set_release_keys(spk::array_view<uint64_t const> value) { p_release_keys_ = value.get(); release_count_ = value.size(); }

  // accessors
  spk::array_view<spk::device_memory_ref const> acquire_syncs() const { return {p_acquire_syncs_, acquire_count_};}
  spk::array_view<uint64_t const> acquire_keys() const { return {p_acquire_keys_, acquire_count_};}
  spk::array_view<uint32_t const> acquire_timeout_milliseconds() const { return {p_acquire_timeout_milliseconds_, acquire_count_};}
  spk::array_view<spk::device_memory_ref const> release_syncs() const { return {p_release_syncs_, release_count_};}
  spk::array_view<uint64_t const> release_keys() const { return {p_release_keys_, release_count_};}

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
  void* p_next_ = nullptr;

  uint32_t acquire_count_= 0;// optional
  spk::device_memory_ref const * p_acquire_syncs_= 0;
  uint64_t const * p_acquire_keys_= 0;
  uint32_t const * p_acquire_timeout_milliseconds_= 0;
  uint32_t release_count_= 0;// optional
  spk::device_memory_ref const * p_release_syncs_= 0;
  uint64_t const * p_release_keys_= 0;
};
static_assert(sizeof(win_32keyed_mutex_acquire_release_info_nv) == sizeof(win_32keyed_mutex_acquire_release_info_nv::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
class win_32surface_create_info_khr {
 public:
  using underlying_type = VkWin32SurfaceCreateInfoKHR;

  // mutators
  void set_hinstance(HINSTANCE value) { hinstance_ = value; }
  void set_hwnd(HWND value) { hwnd_ = value; }

  // accessors
  HINSTANCE hinstance() const { return hinstance_; }
  HWND hwnd() const { return hwnd_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  HINSTANCE hinstance_= 0;
  HWND hwnd_= 0;
};
static_assert(sizeof(win_32surface_create_info_khr) == sizeof(win_32surface_create_info_khr::underlying_type));
#endif

class write_descriptor_set {
 public:
  using underlying_type = VkWriteDescriptorSet;

  // mutators
  void set_image_info(spk::array_view<spk::descriptor_image_info const> value) { p_image_info_ = value.get(); descriptor_count_ = value.size(); }
  void set_buffer_info(spk::array_view<spk::descriptor_buffer_info const> value) { p_buffer_info_ = value.get(); descriptor_count_ = value.size(); }
  void set_texel_buffer_view(spk::array_view<spk::buffer_view_ref const> value) { p_texel_buffer_view_ = value.get(); descriptor_count_ = value.size(); }
  void set_dst_set(spk::descriptor_set_ref value) { dst_set_ = value; }
  void set_dst_binding(uint32_t value) { dst_binding_ = value; }
  void set_dst_array_element(uint32_t value) { dst_array_element_ = value; }
  void set_descriptor_type(spk::descriptor_type value) { descriptor_type_ = value; }

  // accessors
  spk::array_view<spk::descriptor_image_info const> image_info() const { return {p_image_info_, descriptor_count_};}
  spk::array_view<spk::descriptor_buffer_info const> buffer_info() const { return {p_buffer_info_, descriptor_count_};}
  spk::array_view<spk::buffer_view_ref const> texel_buffer_view() const { return {p_texel_buffer_view_, descriptor_count_};}
  spk::descriptor_set_ref dst_set() const { return dst_set_; }
  uint32_t dst_binding() const { return dst_binding_; }
  uint32_t dst_array_element() const { return dst_array_element_; }
  spk::descriptor_type descriptor_type() const { return descriptor_type_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET;
  void* p_next_ = nullptr;

  spk::descriptor_set_ref dst_set_= 0;
  uint32_t dst_binding_= 0;
  uint32_t dst_array_element_= 0;
  uint32_t descriptor_count_= 0;
  spk::descriptor_type descriptor_type_= spk::descriptor_type(0);
  spk::descriptor_image_info const * p_image_info_= 0;
  spk::descriptor_buffer_info const * p_buffer_info_= 0;
  spk::buffer_view_ref const * p_texel_buffer_view_= 0;
};
static_assert(sizeof(write_descriptor_set) == sizeof(write_descriptor_set::underlying_type));

#ifdef VK_USE_PLATFORM_XCB_KHR
class xcb_surface_create_info_khr {
 public:
  using underlying_type = VkXcbSurfaceCreateInfoKHR;

  // mutators
  void set_connection(xcb_connection_t * value) { connection_ = value; }
  void set_window(xcb_window_t value) { window_ = value; }

  // accessors
  xcb_connection_t * connection() const { return connection_; }
  xcb_window_t window() const { return window_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  xcb_connection_t * connection_= 0;
  xcb_window_t window_= 0;
};
static_assert(sizeof(xcb_surface_create_info_khr) == sizeof(xcb_surface_create_info_khr::underlying_type));
#endif

#ifdef VK_USE_PLATFORM_XLIB_KHR
class xlib_surface_create_info_khr {
 public:
  using underlying_type = VkXlibSurfaceCreateInfoKHR;

  // mutators
  void set_dpy(Display * value) { dpy_ = value; }
  void set_window(Window value) { window_ = value; }

  // accessors
  Display * dpy() const { return dpy_; }
  Window window() const { return window_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  Display * dpy_= 0;
  Window window_= 0;
};
static_assert(sizeof(xlib_surface_create_info_khr) == sizeof(xlib_surface_create_info_khr::underlying_type));
#endif

class xy_color_ext {
 public:
  using underlying_type = VkXYColorEXT;

  // mutators
  void set_x(float value) { x_ = value; }
  void set_y(float value) { y_ = value; }

  // accessors
  float x() const { return x_; }
  float y() const { return y_; }

 private:
  float x_= 0;
  float y_= 0;
};
static_assert(sizeof(xy_color_ext) == sizeof(xy_color_ext::underlying_type));

#ifdef VK_USE_PLATFORM_ANDROID_KHR
class android_hardware_buffer_format_properties_android {
 public:
  using underlying_type = VkAndroidHardwareBufferFormatPropertiesANDROID;

  // mutators
  void set_format(spk::format value) { format_ = value; }
  void set_external_format(uint64_t value) { external_format_ = value; }
  void set_format_features(spk::format_feature_flags value) { format_features_ = value; }
  void set_sampler_ycbcr_conversion_components(spk::component_mapping value) { sampler_ycbcr_conversion_components_ = value; }
  void set_suggested_ycbcr_model(spk::sampler_ycbcr_model_conversion value) { suggested_ycbcr_model_ = value; }
  void set_suggested_ycbcr_range(spk::sampler_ycbcr_range value) { suggested_ycbcr_range_ = value; }
  void set_suggested_x_chroma_offset(spk::chroma_location value) { suggested_x_chroma_offset_ = value; }
  void set_suggested_y_chroma_offset(spk::chroma_location value) { suggested_y_chroma_offset_ = value; }

  // accessors
  spk::format format() const { return format_; }
  uint64_t external_format() const { return external_format_; }
  spk::format_feature_flags format_features() const { return format_features_; }
  spk::component_mapping sampler_ycbcr_conversion_components() const { return sampler_ycbcr_conversion_components_; }
  spk::sampler_ycbcr_model_conversion suggested_ycbcr_model() const { return suggested_ycbcr_model_; }
  spk::sampler_ycbcr_range suggested_ycbcr_range() const { return suggested_ycbcr_range_; }
  spk::chroma_location suggested_x_chroma_offset() const { return suggested_x_chroma_offset_; }
  spk::chroma_location suggested_y_chroma_offset() const { return suggested_y_chroma_offset_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_ANDROID_HARDWARE_BUFFER_FORMAT_PROPERTIES_ANDROID;
  void* p_next_ = nullptr;

  spk::format format_= spk::format(0);
  uint64_t external_format_= 0;
  spk::format_feature_flags format_features_= spk::format_feature_flags(0);
  spk::component_mapping sampler_ycbcr_conversion_components_;
  spk::sampler_ycbcr_model_conversion suggested_ycbcr_model_= spk::sampler_ycbcr_model_conversion(0);
  spk::sampler_ycbcr_range suggested_ycbcr_range_= spk::sampler_ycbcr_range(0);
  spk::chroma_location suggested_x_chroma_offset_= spk::chroma_location(0);
  spk::chroma_location suggested_y_chroma_offset_= spk::chroma_location(0);
};
static_assert(sizeof(android_hardware_buffer_format_properties_android) == sizeof(android_hardware_buffer_format_properties_android::underlying_type));
#endif

class buffer_image_copy {
 public:
  using underlying_type = VkBufferImageCopy;

  // mutators
  void set_buffer_offset(uint64_t value) { buffer_offset_ = value; }
  void set_buffer_row_length(uint32_t value) { buffer_row_length_ = value; }
  void set_buffer_image_height(uint32_t value) { buffer_image_height_ = value; }
  void set_image_subresource(spk::image_subresource_layers value) { image_subresource_ = value; }
  void set_image_offset(spk::offset_3d value) { image_offset_ = value; }
  void set_image_extent(spk::extent_3d value) { image_extent_ = value; }

  // accessors
  uint64_t buffer_offset() const { return buffer_offset_; }
  uint32_t buffer_row_length() const { return buffer_row_length_; }
  uint32_t buffer_image_height() const { return buffer_image_height_; }
  spk::image_subresource_layers image_subresource() const { return image_subresource_; }
  spk::offset_3d image_offset() const { return image_offset_; }
  spk::extent_3d image_extent() const { return image_extent_; }

 private:
  uint64_t buffer_offset_= 0;
  uint32_t buffer_row_length_= 0;
  uint32_t buffer_image_height_= 0;
  spk::image_subresource_layers image_subresource_;
  spk::offset_3d image_offset_;
  spk::extent_3d image_extent_;
};
static_assert(sizeof(buffer_image_copy) == sizeof(buffer_image_copy::underlying_type));

union clear_value {
 public:
  using underlying_type = VkClearValue;

  clear_value() { std::memset(this, 0, sizeof(clear_value)); }

  // mutators
  void set_color(spk::clear_color_value value) { color_ = value; }
  void set_depth_stencil(spk::clear_depth_stencil_value value) { depth_stencil_ = value; }

  // accessors
  spk::clear_color_value color() const { return color_; }
  spk::clear_depth_stencil_value depth_stencil() const { return depth_stencil_; }

 private:
  spk::clear_color_value color_;
  spk::clear_depth_stencil_value depth_stencil_;
};
static_assert(sizeof(clear_value) == sizeof(clear_value::underlying_type));

class compute_pipeline_create_info {
 public:
  using underlying_type = VkComputePipelineCreateInfo;

  // mutators
  void set_flags(spk::pipeline_create_flags value) { flags_ = value; }
  void set_stage(spk::pipeline_shader_stage_create_info value) { stage_ = value; }
  void set_layout(spk::pipeline_layout_ref value) { layout_ = value; }
  void set_base_pipeline_handle(spk::pipeline_ref value) { base_pipeline_handle_ = value; }
  void set_base_pipeline_index(int32_t value) { base_pipeline_index_ = value; }

  // accessors
  spk::pipeline_create_flags flags() const { return flags_; }
  spk::pipeline_shader_stage_create_info stage() const { return stage_; }
  spk::pipeline_layout_ref layout() const { return layout_; }
  spk::pipeline_ref base_pipeline_handle() const { return base_pipeline_handle_; }
  int32_t base_pipeline_index() const { return base_pipeline_index_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::pipeline_create_flags flags_= spk::pipeline_create_flags(0);// optional
  spk::pipeline_shader_stage_create_info stage_;
  spk::pipeline_layout_ref layout_= 0;
  spk::pipeline_ref base_pipeline_handle_= 0;// optional
  int32_t base_pipeline_index_= 0;
};
static_assert(sizeof(compute_pipeline_create_info) == sizeof(compute_pipeline_create_info::underlying_type));

class display_mode_parameters_khr {
 public:
  using underlying_type = VkDisplayModeParametersKHR;

  // mutators
  void set_visible_region(spk::extent_2d value) { visible_region_ = value; }
  void set_refresh_rate(uint32_t value) { refresh_rate_ = value; }

  // accessors
  spk::extent_2d visible_region() const { return visible_region_; }
  uint32_t refresh_rate() const { return refresh_rate_; }

 private:
  spk::extent_2d visible_region_;
  uint32_t refresh_rate_= 0;
};
static_assert(sizeof(display_mode_parameters_khr) == sizeof(display_mode_parameters_khr::underlying_type));

class display_plane_capabilities_khr {
 public:
  using underlying_type = VkDisplayPlaneCapabilitiesKHR;

  // mutators
  void set_supported_alpha(spk::display_plane_alpha_flags_khr value) { supported_alpha_ = value; }
  void set_min_src_position(spk::offset_2d value) { min_src_position_ = value; }
  void set_max_src_position(spk::offset_2d value) { max_src_position_ = value; }
  void set_min_src_extent(spk::extent_2d value) { min_src_extent_ = value; }
  void set_max_src_extent(spk::extent_2d value) { max_src_extent_ = value; }
  void set_min_dst_position(spk::offset_2d value) { min_dst_position_ = value; }
  void set_max_dst_position(spk::offset_2d value) { max_dst_position_ = value; }
  void set_min_dst_extent(spk::extent_2d value) { min_dst_extent_ = value; }
  void set_max_dst_extent(spk::extent_2d value) { max_dst_extent_ = value; }

  // accessors
  spk::display_plane_alpha_flags_khr supported_alpha() const { return supported_alpha_; }
  spk::offset_2d min_src_position() const { return min_src_position_; }
  spk::offset_2d max_src_position() const { return max_src_position_; }
  spk::extent_2d min_src_extent() const { return min_src_extent_; }
  spk::extent_2d max_src_extent() const { return max_src_extent_; }
  spk::offset_2d min_dst_position() const { return min_dst_position_; }
  spk::offset_2d max_dst_position() const { return max_dst_position_; }
  spk::extent_2d min_dst_extent() const { return min_dst_extent_; }
  spk::extent_2d max_dst_extent() const { return max_dst_extent_; }

 private:
  spk::display_plane_alpha_flags_khr supported_alpha_= spk::display_plane_alpha_flags_khr(0);// optional
  spk::offset_2d min_src_position_;
  spk::offset_2d max_src_position_;
  spk::extent_2d min_src_extent_;
  spk::extent_2d max_src_extent_;
  spk::offset_2d min_dst_position_;
  spk::offset_2d max_dst_position_;
  spk::extent_2d min_dst_extent_;
  spk::extent_2d max_dst_extent_;
};
static_assert(sizeof(display_plane_capabilities_khr) == sizeof(display_plane_capabilities_khr::underlying_type));

class display_plane_properties_2khr {
 public:
  using underlying_type = VkDisplayPlaneProperties2KHR;

  // mutators
  void set_display_plane_properties(spk::display_plane_properties_khr value) { display_plane_properties_ = value; }

  // accessors
  spk::display_plane_properties_khr display_plane_properties() const { return display_plane_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR;
  void* p_next_ = nullptr;

  spk::display_plane_properties_khr display_plane_properties_;
};
static_assert(sizeof(display_plane_properties_2khr) == sizeof(display_plane_properties_2khr::underlying_type));

class display_properties_khr {
 public:
  using underlying_type = VkDisplayPropertiesKHR;

  // mutators
  void set_plane_reorder_possible(bool val) { plane_reorder_possible_ = val; }
  void set_persistent_content(bool val) { persistent_content_ = val; }
  void set_display_name(spk::string_ptr str) { display_name_ = str.get(); }
  void set_display(spk::display_khr_ref value) { display_ = value; }
  void set_physical_dimensions(spk::extent_2d value) { physical_dimensions_ = value; }
  void set_physical_resolution(spk::extent_2d value) { physical_resolution_ = value; }
  void set_supported_transforms(spk::surface_transform_flags_khr value) { supported_transforms_ = value; }

  // accessors
  bool plane_reorder_possible() const { return plane_reorder_possible_; }
  bool persistent_content() const { return persistent_content_; }
  std::string_view display_name() const { return display_name_; }
  spk::display_khr_ref display() const { return display_; }
  spk::extent_2d physical_dimensions() const { return physical_dimensions_; }
  spk::extent_2d physical_resolution() const { return physical_resolution_; }
  spk::surface_transform_flags_khr supported_transforms() const { return supported_transforms_; }

 private:
  spk::display_khr_ref display_= 0;
  char const * display_name_= 0;
  spk::extent_2d physical_dimensions_;
  spk::extent_2d physical_resolution_;
  spk::surface_transform_flags_khr supported_transforms_= spk::surface_transform_flags_khr(0);// optional
  spk::bool32_t plane_reorder_possible_= 0;
  spk::bool32_t persistent_content_= 0;
};
static_assert(sizeof(display_properties_khr) == sizeof(display_properties_khr::underlying_type));

class display_surface_create_info_khr {
 public:
  using underlying_type = VkDisplaySurfaceCreateInfoKHR;

  // mutators
  void set_display_mode(spk::display_mode_khr_ref value) { display_mode_ = value; }
  void set_plane_index(uint32_t value) { plane_index_ = value; }
  void set_plane_stack_index(uint32_t value) { plane_stack_index_ = value; }
  void set_transform(spk::surface_transform_flags_khr value) { transform_ = value; }
  void set_global_alpha(float value) { global_alpha_ = value; }
  void set_alpha_mode(spk::display_plane_alpha_flags_khr value) { alpha_mode_ = value; }
  void set_image_extent(spk::extent_2d value) { image_extent_ = value; }

  // accessors
  spk::display_mode_khr_ref display_mode() const { return display_mode_; }
  uint32_t plane_index() const { return plane_index_; }
  uint32_t plane_stack_index() const { return plane_stack_index_; }
  spk::surface_transform_flags_khr transform() const { return transform_; }
  float global_alpha() const { return global_alpha_; }
  spk::display_plane_alpha_flags_khr alpha_mode() const { return alpha_mode_; }
  spk::extent_2d image_extent() const { return image_extent_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::display_mode_khr_ref display_mode_= 0;
  uint32_t plane_index_= 0;
  uint32_t plane_stack_index_= 0;
  spk::surface_transform_flags_khr transform_= spk::surface_transform_flags_khr(0);
  float global_alpha_= 0;
  spk::display_plane_alpha_flags_khr alpha_mode_= spk::display_plane_alpha_flags_khr(0);
  spk::extent_2d image_extent_;
};
static_assert(sizeof(display_surface_create_info_khr) == sizeof(display_surface_create_info_khr::underlying_type));

class external_buffer_properties {
 public:
  using underlying_type = VkExternalBufferProperties;

  // mutators
  void set_external_memory_properties(spk::external_memory_properties value) { external_memory_properties_ = value; }

  // accessors
  spk::external_memory_properties external_memory_properties() const { return external_memory_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES;
  void* p_next_ = nullptr;

  spk::external_memory_properties external_memory_properties_;
};
static_assert(sizeof(external_buffer_properties) == sizeof(external_buffer_properties::underlying_type));
using external_buffer_properties_khr = external_buffer_properties;


class external_image_format_properties {
 public:
  using underlying_type = VkExternalImageFormatProperties;

  // mutators
  void set_external_memory_properties(spk::external_memory_properties value) { external_memory_properties_ = value; }

  // accessors
  spk::external_memory_properties external_memory_properties() const { return external_memory_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES;
  void* p_next_ = nullptr;

  spk::external_memory_properties external_memory_properties_;
};
static_assert(sizeof(external_image_format_properties) == sizeof(external_image_format_properties::underlying_type));
using external_image_format_properties_khr = external_image_format_properties;


class format_properties_2 {
 public:
  using underlying_type = VkFormatProperties2;

  // mutators
  void set_format_properties(spk::format_properties value) { format_properties_ = value; }

  // accessors
  spk::format_properties format_properties() const { return format_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::format_properties format_properties_;
};
static_assert(sizeof(format_properties_2) == sizeof(format_properties_2::underlying_type));
using format_properties_2khr = format_properties_2;


class hdr_metadata_ext {
 public:
  using underlying_type = VkHdrMetadataEXT;

  // mutators
  void set_display_primary_red(spk::xy_color_ext value) { display_primary_red_ = value; }
  void set_display_primary_green(spk::xy_color_ext value) { display_primary_green_ = value; }
  void set_display_primary_blue(spk::xy_color_ext value) { display_primary_blue_ = value; }
  void set_white_point(spk::xy_color_ext value) { white_point_ = value; }
  void set_max_luminance(float value) { max_luminance_ = value; }
  void set_min_luminance(float value) { min_luminance_ = value; }
  void set_max_content_light_level(float value) { max_content_light_level_ = value; }
  void set_max_frame_average_light_level(float value) { max_frame_average_light_level_ = value; }

  // accessors
  spk::xy_color_ext display_primary_red() const { return display_primary_red_; }
  spk::xy_color_ext display_primary_green() const { return display_primary_green_; }
  spk::xy_color_ext display_primary_blue() const { return display_primary_blue_; }
  spk::xy_color_ext white_point() const { return white_point_; }
  float max_luminance() const { return max_luminance_; }
  float min_luminance() const { return min_luminance_; }
  float max_content_light_level() const { return max_content_light_level_; }
  float max_frame_average_light_level() const { return max_frame_average_light_level_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_HDR_METADATA_EXT;
  void* p_next_ = nullptr;

  spk::xy_color_ext display_primary_red_;
  spk::xy_color_ext display_primary_green_;
  spk::xy_color_ext display_primary_blue_;
  spk::xy_color_ext white_point_;
  float max_luminance_= 0;
  float min_luminance_= 0;
  float max_content_light_level_= 0;
  float max_frame_average_light_level_= 0;
};
static_assert(sizeof(hdr_metadata_ext) == sizeof(hdr_metadata_ext::underlying_type));

class image_blit {
 public:
  using underlying_type = VkImageBlit;

  // mutators
  void set_src_subresource(spk::image_subresource_layers value) { src_subresource_ = value; }
  void set_src_offsets(const std::array<spk::offset_3d, 2> & value) { src_offsets_ = value; }
  void set_dst_subresource(spk::image_subresource_layers value) { dst_subresource_ = value; }
  void set_dst_offsets(const std::array<spk::offset_3d, 2> & value) { dst_offsets_ = value; }

  // accessors
  spk::image_subresource_layers src_subresource() const { return src_subresource_; }
  const std::array<spk::offset_3d, 2> & src_offsets() const { return src_offsets_; }
  spk::image_subresource_layers dst_subresource() const { return dst_subresource_; }
  const std::array<spk::offset_3d, 2> & dst_offsets() const { return dst_offsets_; }

 private:
  spk::image_subresource_layers src_subresource_;
  std::array<spk::offset_3d, 2> src_offsets_= {};
  spk::image_subresource_layers dst_subresource_;
  std::array<spk::offset_3d, 2> dst_offsets_= {};
};
static_assert(sizeof(image_blit) == sizeof(image_blit::underlying_type));

class image_copy {
 public:
  using underlying_type = VkImageCopy;

  // mutators
  void set_src_subresource(spk::image_subresource_layers value) { src_subresource_ = value; }
  void set_src_offset(spk::offset_3d value) { src_offset_ = value; }
  void set_dst_subresource(spk::image_subresource_layers value) { dst_subresource_ = value; }
  void set_dst_offset(spk::offset_3d value) { dst_offset_ = value; }
  void set_extent(spk::extent_3d value) { extent_ = value; }

  // accessors
  spk::image_subresource_layers src_subresource() const { return src_subresource_; }
  spk::offset_3d src_offset() const { return src_offset_; }
  spk::image_subresource_layers dst_subresource() const { return dst_subresource_; }
  spk::offset_3d dst_offset() const { return dst_offset_; }
  spk::extent_3d extent() const { return extent_; }

 private:
  spk::image_subresource_layers src_subresource_;
  spk::offset_3d src_offset_;
  spk::image_subresource_layers dst_subresource_;
  spk::offset_3d dst_offset_;
  spk::extent_3d extent_;
};
static_assert(sizeof(image_copy) == sizeof(image_copy::underlying_type));

class image_create_info {
 public:
  using underlying_type = VkImageCreateInfo;

  // mutators
  void set_queue_family_indices(spk::array_view<uint32_t const> value) { p_queue_family_indices_ = value.get(); queue_family_index_count_ = value.size(); }
  void set_flags(spk::image_create_flags value) { flags_ = value; }
  void set_image_type(spk::image_type value) { image_type_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_extent(spk::extent_3d value) { extent_ = value; }
  void set_mip_levels(uint32_t value) { mip_levels_ = value; }
  void set_array_layers(uint32_t value) { array_layers_ = value; }
  void set_samples(spk::sample_count_flags value) { samples_ = value; }
  void set_tiling(spk::image_tiling value) { tiling_ = value; }
  void set_usage(spk::image_usage_flags value) { usage_ = value; }
  void set_sharing_mode(spk::sharing_mode value) { sharing_mode_ = value; }
  void set_initial_layout(spk::image_layout value) { initial_layout_ = value; }

  // accessors
  spk::array_view<uint32_t const> queue_family_indices() const { return {p_queue_family_indices_, queue_family_index_count_};}
  spk::image_create_flags flags() const { return flags_; }
  spk::image_type image_type() const { return image_type_; }
  spk::format format() const { return format_; }
  spk::extent_3d extent() const { return extent_; }
  uint32_t mip_levels() const { return mip_levels_; }
  uint32_t array_layers() const { return array_layers_; }
  spk::sample_count_flags samples() const { return samples_; }
  spk::image_tiling tiling() const { return tiling_; }
  spk::image_usage_flags usage() const { return usage_; }
  spk::sharing_mode sharing_mode() const { return sharing_mode_; }
  spk::image_layout initial_layout() const { return initial_layout_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::image_create_flags flags_= spk::image_create_flags(0);// optional
  spk::image_type image_type_= spk::image_type(0);
  spk::format format_= spk::format(0);
  spk::extent_3d extent_;
  uint32_t mip_levels_= 0;
  uint32_t array_layers_= 0;
  spk::sample_count_flags samples_= spk::sample_count_flags(0);
  spk::image_tiling tiling_= spk::image_tiling(0);
  spk::image_usage_flags usage_= spk::image_usage_flags(0);
  spk::sharing_mode sharing_mode_= spk::sharing_mode(0);
  uint32_t queue_family_index_count_= 0;// optional
  uint32_t const * p_queue_family_indices_= 0;
  spk::image_layout initial_layout_= spk::image_layout(0);
};
static_assert(sizeof(image_create_info) == sizeof(image_create_info::underlying_type));

class image_format_properties {
 public:
  using underlying_type = VkImageFormatProperties;

  // mutators
  void set_max_extent(spk::extent_3d value) { max_extent_ = value; }
  void set_max_mip_levels(uint32_t value) { max_mip_levels_ = value; }
  void set_max_array_layers(uint32_t value) { max_array_layers_ = value; }
  void set_sample_counts(spk::sample_count_flags value) { sample_counts_ = value; }
  void set_max_resource_size(uint64_t value) { max_resource_size_ = value; }

  // accessors
  spk::extent_3d max_extent() const { return max_extent_; }
  uint32_t max_mip_levels() const { return max_mip_levels_; }
  uint32_t max_array_layers() const { return max_array_layers_; }
  spk::sample_count_flags sample_counts() const { return sample_counts_; }
  uint64_t max_resource_size() const { return max_resource_size_; }

 private:
  spk::extent_3d max_extent_;
  uint32_t max_mip_levels_= 0;
  uint32_t max_array_layers_= 0;
  spk::sample_count_flags sample_counts_= spk::sample_count_flags(0);// optional
  uint64_t max_resource_size_= 0;
};
static_assert(sizeof(image_format_properties) == sizeof(image_format_properties::underlying_type));

class image_memory_barrier {
 public:
  using underlying_type = VkImageMemoryBarrier;

  // mutators
  void set_src_access_mask(spk::access_flags value) { src_access_mask_ = value; }
  void set_dst_access_mask(spk::access_flags value) { dst_access_mask_ = value; }
  void set_old_layout(spk::image_layout value) { old_layout_ = value; }
  void set_new_layout(spk::image_layout value) { new_layout_ = value; }
  void set_src_queue_family_index(uint32_t value) { src_queue_family_index_ = value; }
  void set_dst_queue_family_index(uint32_t value) { dst_queue_family_index_ = value; }
  void set_image(spk::image_ref value) { image_ = value; }
  void set_subresource_range(spk::image_subresource_range value) { subresource_range_ = value; }

  // accessors
  spk::access_flags src_access_mask() const { return src_access_mask_; }
  spk::access_flags dst_access_mask() const { return dst_access_mask_; }
  spk::image_layout old_layout() const { return old_layout_; }
  spk::image_layout new_layout() const { return new_layout_; }
  uint32_t src_queue_family_index() const { return src_queue_family_index_; }
  uint32_t dst_queue_family_index() const { return dst_queue_family_index_; }
  spk::image_ref image() const { return image_; }
  spk::image_subresource_range subresource_range() const { return subresource_range_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
  void* p_next_ = nullptr;

  spk::access_flags src_access_mask_= spk::access_flags(0);// optional
  spk::access_flags dst_access_mask_= spk::access_flags(0);// optional
  spk::image_layout old_layout_= spk::image_layout(0);
  spk::image_layout new_layout_= spk::image_layout(0);
  uint32_t src_queue_family_index_= 0;
  uint32_t dst_queue_family_index_= 0;
  spk::image_ref image_= 0;
  spk::image_subresource_range subresource_range_;
};
static_assert(sizeof(image_memory_barrier) == sizeof(image_memory_barrier::underlying_type));

class image_resolve {
 public:
  using underlying_type = VkImageResolve;

  // mutators
  void set_src_subresource(spk::image_subresource_layers value) { src_subresource_ = value; }
  void set_src_offset(spk::offset_3d value) { src_offset_ = value; }
  void set_dst_subresource(spk::image_subresource_layers value) { dst_subresource_ = value; }
  void set_dst_offset(spk::offset_3d value) { dst_offset_ = value; }
  void set_extent(spk::extent_3d value) { extent_ = value; }

  // accessors
  spk::image_subresource_layers src_subresource() const { return src_subresource_; }
  spk::offset_3d src_offset() const { return src_offset_; }
  spk::image_subresource_layers dst_subresource() const { return dst_subresource_; }
  spk::offset_3d dst_offset() const { return dst_offset_; }
  spk::extent_3d extent() const { return extent_; }

 private:
  spk::image_subresource_layers src_subresource_;
  spk::offset_3d src_offset_;
  spk::image_subresource_layers dst_subresource_;
  spk::offset_3d dst_offset_;
  spk::extent_3d extent_;
};
static_assert(sizeof(image_resolve) == sizeof(image_resolve::underlying_type));

class image_view_create_info {
 public:
  using underlying_type = VkImageViewCreateInfo;

  // mutators
  void set_image(spk::image_ref value) { image_ = value; }
  void set_view_type(spk::image_view_type value) { view_type_ = value; }
  void set_format(spk::format value) { format_ = value; }
  void set_components(spk::component_mapping value) { components_ = value; }
  void set_subresource_range(spk::image_subresource_range value) { subresource_range_ = value; }

  // accessors
  spk::image_ref image() const { return image_; }
  spk::image_view_type view_type() const { return view_type_; }
  spk::format format() const { return format_; }
  spk::component_mapping components() const { return components_; }
  spk::image_subresource_range subresource_range() const { return subresource_range_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::image_ref image_= 0;
  spk::image_view_type view_type_= spk::image_view_type(0);
  spk::format format_= spk::format(0);
  spk::component_mapping components_;
  spk::image_subresource_range subresource_range_;
};
static_assert(sizeof(image_view_create_info) == sizeof(image_view_create_info::underlying_type));

class memory_requirements_2 {
 public:
  using underlying_type = VkMemoryRequirements2;

  // mutators
  void set_memory_requirements(spk::memory_requirements value) { memory_requirements_ = value; }

  // accessors
  spk::memory_requirements memory_requirements() const { return memory_requirements_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2;
  void* p_next_ = nullptr;

  spk::memory_requirements memory_requirements_;
};
static_assert(sizeof(memory_requirements_2) == sizeof(memory_requirements_2::underlying_type));
using memory_requirements_2khr = memory_requirements_2;


class multisample_properties_ext {
 public:
  using underlying_type = VkMultisamplePropertiesEXT;

  // mutators
  void set_max_sample_location_grid_size(spk::extent_2d value) { max_sample_location_grid_size_ = value; }

  // accessors
  spk::extent_2d max_sample_location_grid_size() const { return max_sample_location_grid_size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  spk::extent_2d max_sample_location_grid_size_;
};
static_assert(sizeof(multisample_properties_ext) == sizeof(multisample_properties_ext::underlying_type));

class physical_device_features_2 {
 public:
  using underlying_type = VkPhysicalDeviceFeatures2;

  // mutators
  void set_features(spk::physical_device_features value) { features_ = value; }

  // accessors
  spk::physical_device_features features() const { return features_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
  void* p_next_ = nullptr;

  spk::physical_device_features features_;
};
static_assert(sizeof(physical_device_features_2) == sizeof(physical_device_features_2::underlying_type));
using physical_device_features_2khr = physical_device_features_2;


class physical_device_memory_properties {
 public:
  using underlying_type = VkPhysicalDeviceMemoryProperties;

  // mutators
  void set_memory_type_count(uint32_t value) { memory_type_count_ = value; }
  void set_memory_types(const std::array<spk::memory_type, VK_MAX_MEMORY_TYPES> & value) { memory_types_ = value; }
  void set_memory_heap_count(uint32_t value) { memory_heap_count_ = value; }
  void set_memory_heaps(const std::array<spk::memory_heap, VK_MAX_MEMORY_HEAPS> & value) { memory_heaps_ = value; }

  // accessors
  uint32_t memory_type_count() const { return memory_type_count_; }
  const std::array<spk::memory_type, VK_MAX_MEMORY_TYPES> & memory_types() const { return memory_types_; }
  uint32_t memory_heap_count() const { return memory_heap_count_; }
  const std::array<spk::memory_heap, VK_MAX_MEMORY_HEAPS> & memory_heaps() const { return memory_heaps_; }

 private:
  uint32_t memory_type_count_= 0;
  std::array<spk::memory_type, VK_MAX_MEMORY_TYPES> memory_types_= {};
  uint32_t memory_heap_count_= 0;
  std::array<spk::memory_heap, VK_MAX_MEMORY_HEAPS> memory_heaps_= {};
};
static_assert(sizeof(physical_device_memory_properties) == sizeof(physical_device_memory_properties::underlying_type));

class physical_device_properties {
 public:
  using underlying_type = VkPhysicalDeviceProperties;

  // mutators
  void set_api_version(uint32_t value) { api_version_ = value; }
  void set_driver_version(uint32_t value) { driver_version_ = value; }
  void set_vendor_id(uint32_t value) { vendor_id_ = value; }
  void set_device_id(uint32_t value) { device_id_ = value; }
  void set_device_type(spk::physical_device_type value) { device_type_ = value; }
  void set_device_name(const std::array<char, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE> & value) { device_name_ = value; }
  void set_pipeline_cache_uuid(const std::array<uint8_t, VK_UUID_SIZE> & value) { pipeline_cache_uuid_ = value; }
  void set_limits(spk::physical_device_limits value) { limits_ = value; }
  void set_sparse_properties(spk::physical_device_sparse_properties value) { sparse_properties_ = value; }

  // accessors
  uint32_t api_version() const { return api_version_; }
  uint32_t driver_version() const { return driver_version_; }
  uint32_t vendor_id() const { return vendor_id_; }
  uint32_t device_id() const { return device_id_; }
  spk::physical_device_type device_type() const { return device_type_; }
  const std::array<char, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE> & device_name() const { return device_name_; }
  const std::array<uint8_t, VK_UUID_SIZE> & pipeline_cache_uuid() const { return pipeline_cache_uuid_; }
  spk::physical_device_limits limits() const { return limits_; }
  spk::physical_device_sparse_properties sparse_properties() const { return sparse_properties_; }

 private:
  uint32_t api_version_= 0;
  uint32_t driver_version_= 0;
  uint32_t vendor_id_= 0;
  uint32_t device_id_= 0;
  spk::physical_device_type device_type_= spk::physical_device_type(0);
  std::array<char, VK_MAX_PHYSICAL_DEVICE_NAME_SIZE> device_name_= {};
  std::array<uint8_t, VK_UUID_SIZE> pipeline_cache_uuid_= {};
  spk::physical_device_limits limits_;
  spk::physical_device_sparse_properties sparse_properties_;
};
static_assert(sizeof(physical_device_properties) == sizeof(physical_device_properties::underlying_type));

class physical_device_sample_locations_properties_ext {
 public:
  using underlying_type = VkPhysicalDeviceSampleLocationsPropertiesEXT;

  // mutators
  void set_variable_sample_locations(bool val) { variable_sample_locations_ = val; }
  void set_sample_location_sample_counts(spk::sample_count_flags value) { sample_location_sample_counts_ = value; }
  void set_max_sample_location_grid_size(spk::extent_2d value) { max_sample_location_grid_size_ = value; }
  void set_sample_location_coordinate_range(const std::array<float, 2> & value) { sample_location_coordinate_range_ = value; }
  void set_sample_location_sub_pixel_bits(uint32_t value) { sample_location_sub_pixel_bits_ = value; }

  // accessors
  bool variable_sample_locations() const { return variable_sample_locations_; }
  spk::sample_count_flags sample_location_sample_counts() const { return sample_location_sample_counts_; }
  spk::extent_2d max_sample_location_grid_size() const { return max_sample_location_grid_size_; }
  const std::array<float, 2> & sample_location_coordinate_range() const { return sample_location_coordinate_range_; }
  uint32_t sample_location_sub_pixel_bits() const { return sample_location_sub_pixel_bits_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT;
  void* p_next_ = nullptr;

  spk::sample_count_flags sample_location_sample_counts_= spk::sample_count_flags(0);
  spk::extent_2d max_sample_location_grid_size_;
  std::array<float, 2> sample_location_coordinate_range_= {};
  uint32_t sample_location_sub_pixel_bits_= 0;
  spk::bool32_t variable_sample_locations_= 0;
};
static_assert(sizeof(physical_device_sample_locations_properties_ext) == sizeof(physical_device_sample_locations_properties_ext::underlying_type));

class pipeline_depth_stencil_state_create_info {
 public:
  using underlying_type = VkPipelineDepthStencilStateCreateInfo;

  // mutators
  void set_depth_test_enable(bool val) { depth_test_enable_ = val; }
  void set_depth_write_enable(bool val) { depth_write_enable_ = val; }
  void set_depth_bounds_test_enable(bool val) { depth_bounds_test_enable_ = val; }
  void set_stencil_test_enable(bool val) { stencil_test_enable_ = val; }
  void set_depth_compare_op(spk::compare_op value) { depth_compare_op_ = value; }
  void set_front(spk::stencil_op_state value) { front_ = value; }
  void set_back(spk::stencil_op_state value) { back_ = value; }
  void set_min_depth_bounds(float value) { min_depth_bounds_ = value; }
  void set_max_depth_bounds(float value) { max_depth_bounds_ = value; }

  // accessors
  bool depth_test_enable() const { return depth_test_enable_; }
  bool depth_write_enable() const { return depth_write_enable_; }
  bool depth_bounds_test_enable() const { return depth_bounds_test_enable_; }
  bool stencil_test_enable() const { return stencil_test_enable_; }
  spk::compare_op depth_compare_op() const { return depth_compare_op_; }
  spk::stencil_op_state front() const { return front_; }
  spk::stencil_op_state back() const { return back_; }
  float min_depth_bounds() const { return min_depth_bounds_; }
  float max_depth_bounds() const { return max_depth_bounds_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::bool32_t depth_test_enable_= 0;
  spk::bool32_t depth_write_enable_= 0;
  spk::compare_op depth_compare_op_= spk::compare_op(0);
  spk::bool32_t depth_bounds_test_enable_= 0;
  spk::bool32_t stencil_test_enable_= 0;
  spk::stencil_op_state front_;
  spk::stencil_op_state back_;
  float min_depth_bounds_= 0;
  float max_depth_bounds_= 0;
};
static_assert(sizeof(pipeline_depth_stencil_state_create_info) == sizeof(pipeline_depth_stencil_state_create_info::underlying_type));

class queue_family_properties {
 public:
  using underlying_type = VkQueueFamilyProperties;

  // mutators
  void set_queue_flags(spk::queue_flags value) { queue_flags_ = value; }
  void set_queue_count(uint32_t value) { queue_count_ = value; }
  void set_timestamp_valid_bits(uint32_t value) { timestamp_valid_bits_ = value; }
  void set_min_image_transfer_granularity(spk::extent_3d value) { min_image_transfer_granularity_ = value; }

  // accessors
  spk::queue_flags queue_flags() const { return queue_flags_; }
  uint32_t queue_count() const { return queue_count_; }
  uint32_t timestamp_valid_bits() const { return timestamp_valid_bits_; }
  spk::extent_3d min_image_transfer_granularity() const { return min_image_transfer_granularity_; }

 private:
  spk::queue_flags queue_flags_= spk::queue_flags(0);// optional
  uint32_t queue_count_= 0;
  uint32_t timestamp_valid_bits_= 0;
  spk::extent_3d min_image_transfer_granularity_;
};
static_assert(sizeof(queue_family_properties) == sizeof(queue_family_properties::underlying_type));

class rect_2d {
 public:
  using underlying_type = VkRect2D;

  // mutators
  void set_offset(spk::offset_2d value) { offset_ = value; }
  void set_extent(spk::extent_2d value) { extent_ = value; }

  // accessors
  spk::offset_2d offset() const { return offset_; }
  spk::extent_2d extent() const { return extent_; }

 private:
  spk::offset_2d offset_;
  spk::extent_2d extent_;
};
static_assert(sizeof(rect_2d) == sizeof(rect_2d::underlying_type));

class rect_layer_khr {
 public:
  using underlying_type = VkRectLayerKHR;

  // mutators
  void set_offset(spk::offset_2d value) { offset_ = value; }
  void set_extent(spk::extent_2d value) { extent_ = value; }
  void set_layer(uint32_t value) { layer_ = value; }

  // accessors
  spk::offset_2d offset() const { return offset_; }
  spk::extent_2d extent() const { return extent_; }
  uint32_t layer() const { return layer_; }

 private:
  spk::offset_2d offset_;
  spk::extent_2d extent_;
  uint32_t layer_= 0;
};
static_assert(sizeof(rect_layer_khr) == sizeof(rect_layer_khr::underlying_type));

class sample_locations_info_ext {
 public:
  using underlying_type = VkSampleLocationsInfoEXT;

  // mutators
  void set_sample_locations(spk::array_view<spk::sample_location_ext const> value) { p_sample_locations_ = value.get(); sample_locations_count_ = value.size(); }
  void set_sample_locations_per_pixel(spk::sample_count_flags value) { sample_locations_per_pixel_ = value; }
  void set_sample_location_grid_size(spk::extent_2d value) { sample_location_grid_size_ = value; }

  // accessors
  spk::array_view<spk::sample_location_ext const> sample_locations() const { return {p_sample_locations_, sample_locations_count_};}
  spk::sample_count_flags sample_locations_per_pixel() const { return sample_locations_per_pixel_; }
  spk::extent_2d sample_location_grid_size() const { return sample_location_grid_size_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT;
  void* p_next_ = nullptr;

  spk::sample_count_flags sample_locations_per_pixel_= spk::sample_count_flags(0);
  spk::extent_2d sample_location_grid_size_;
  uint32_t sample_locations_count_= 0;
  spk::sample_location_ext const * p_sample_locations_= 0;
};
static_assert(sizeof(sample_locations_info_ext) == sizeof(sample_locations_info_ext::underlying_type));

class sampler_ycbcr_conversion_create_info {
 public:
  using underlying_type = VkSamplerYcbcrConversionCreateInfo;

  // mutators
  void set_force_explicit_reconstruction(bool val) { force_explicit_reconstruction_ = val; }
  void set_format(spk::format value) { format_ = value; }
  void set_ycbcr_model(spk::sampler_ycbcr_model_conversion value) { ycbcr_model_ = value; }
  void set_ycbcr_range(spk::sampler_ycbcr_range value) { ycbcr_range_ = value; }
  void set_components(spk::component_mapping value) { components_ = value; }
  void set_x_chroma_offset(spk::chroma_location value) { x_chroma_offset_ = value; }
  void set_y_chroma_offset(spk::chroma_location value) { y_chroma_offset_ = value; }
  void set_chroma_filter(spk::filter value) { chroma_filter_ = value; }

  // accessors
  bool force_explicit_reconstruction() const { return force_explicit_reconstruction_; }
  spk::format format() const { return format_; }
  spk::sampler_ycbcr_model_conversion ycbcr_model() const { return ycbcr_model_; }
  spk::sampler_ycbcr_range ycbcr_range() const { return ycbcr_range_; }
  spk::component_mapping components() const { return components_; }
  spk::chroma_location x_chroma_offset() const { return x_chroma_offset_; }
  spk::chroma_location y_chroma_offset() const { return y_chroma_offset_; }
  spk::filter chroma_filter() const { return chroma_filter_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO;
  void* p_next_ = nullptr;

  spk::format format_= spk::format(0);
  spk::sampler_ycbcr_model_conversion ycbcr_model_= spk::sampler_ycbcr_model_conversion(0);
  spk::sampler_ycbcr_range ycbcr_range_= spk::sampler_ycbcr_range(0);
  spk::component_mapping components_;
  spk::chroma_location x_chroma_offset_= spk::chroma_location(0);
  spk::chroma_location y_chroma_offset_= spk::chroma_location(0);
  spk::filter chroma_filter_= spk::filter(0);
  spk::bool32_t force_explicit_reconstruction_= 0;
};
static_assert(sizeof(sampler_ycbcr_conversion_create_info) == sizeof(sampler_ycbcr_conversion_create_info::underlying_type));
using sampler_ycbcr_conversion_create_info_khr = sampler_ycbcr_conversion_create_info;


class shader_statistics_info_amd {
 public:
  using underlying_type = VkShaderStatisticsInfoAMD;

  // mutators
  void set_shader_stage_mask(spk::shader_stage_flags value) { shader_stage_mask_ = value; }
  void set_resource_usage(spk::shader_resource_usage_amd value) { resource_usage_ = value; }
  void set_num_physical_vgprs(uint32_t value) { num_physical_vgprs_ = value; }
  void set_num_physical_sgprs(uint32_t value) { num_physical_sgprs_ = value; }
  void set_num_available_vgprs(uint32_t value) { num_available_vgprs_ = value; }
  void set_num_available_sgprs(uint32_t value) { num_available_sgprs_ = value; }
  void set_compute_work_group_size(const std::array<uint32_t, 3> & value) { compute_work_group_size_ = value; }

  // accessors
  spk::shader_stage_flags shader_stage_mask() const { return shader_stage_mask_; }
  spk::shader_resource_usage_amd resource_usage() const { return resource_usage_; }
  uint32_t num_physical_vgprs() const { return num_physical_vgprs_; }
  uint32_t num_physical_sgprs() const { return num_physical_sgprs_; }
  uint32_t num_available_vgprs() const { return num_available_vgprs_; }
  uint32_t num_available_sgprs() const { return num_available_sgprs_; }
  const std::array<uint32_t, 3> & compute_work_group_size() const { return compute_work_group_size_; }

 private:
  spk::shader_stage_flags shader_stage_mask_= spk::shader_stage_flags(0);
  spk::shader_resource_usage_amd resource_usage_;
  uint32_t num_physical_vgprs_= 0;
  uint32_t num_physical_sgprs_= 0;
  uint32_t num_available_vgprs_= 0;
  uint32_t num_available_sgprs_= 0;
  std::array<uint32_t, 3> compute_work_group_size_= {};
};
static_assert(sizeof(shader_statistics_info_amd) == sizeof(shader_statistics_info_amd::underlying_type));

class sparse_image_format_properties {
 public:
  using underlying_type = VkSparseImageFormatProperties;

  // mutators
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }
  void set_image_granularity(spk::extent_3d value) { image_granularity_ = value; }
  void set_flags(spk::sparse_image_format_flags value) { flags_ = value; }

  // accessors
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }
  spk::extent_3d image_granularity() const { return image_granularity_; }
  spk::sparse_image_format_flags flags() const { return flags_; }

 private:
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);// optional
  spk::extent_3d image_granularity_;
  spk::sparse_image_format_flags flags_= spk::sparse_image_format_flags(0);// optional
};
static_assert(sizeof(sparse_image_format_properties) == sizeof(sparse_image_format_properties::underlying_type));

class sparse_image_memory_bind {
 public:
  using underlying_type = VkSparseImageMemoryBind;

  // mutators
  void set_subresource(spk::image_subresource value) { subresource_ = value; }
  void set_offset(spk::offset_3d value) { offset_ = value; }
  void set_extent(spk::extent_3d value) { extent_ = value; }
  void set_memory(spk::device_memory_ref value) { memory_ = value; }
  void set_memory_offset(uint64_t value) { memory_offset_ = value; }
  void set_flags(spk::sparse_memory_bind_flags value) { flags_ = value; }

  // accessors
  spk::image_subresource subresource() const { return subresource_; }
  spk::offset_3d offset() const { return offset_; }
  spk::extent_3d extent() const { return extent_; }
  spk::device_memory_ref memory() const { return memory_; }
  uint64_t memory_offset() const { return memory_offset_; }
  spk::sparse_memory_bind_flags flags() const { return flags_; }

 private:
  spk::image_subresource subresource_;
  spk::offset_3d offset_;
  spk::extent_3d extent_;
  spk::device_memory_ref memory_= 0;// optional
  uint64_t memory_offset_= 0;
  spk::sparse_memory_bind_flags flags_= spk::sparse_memory_bind_flags(0);// optional
};
static_assert(sizeof(sparse_image_memory_bind) == sizeof(sparse_image_memory_bind::underlying_type));

class surface_capabilities_2ext {
 public:
  using underlying_type = VkSurfaceCapabilities2EXT;

  // mutators
  void set_min_image_count(uint32_t value) { min_image_count_ = value; }
  void set_max_image_count(uint32_t value) { max_image_count_ = value; }
  void set_current_extent(spk::extent_2d value) { current_extent_ = value; }
  void set_min_image_extent(spk::extent_2d value) { min_image_extent_ = value; }
  void set_max_image_extent(spk::extent_2d value) { max_image_extent_ = value; }
  void set_max_image_array_layers(uint32_t value) { max_image_array_layers_ = value; }
  void set_supported_transforms(spk::surface_transform_flags_khr value) { supported_transforms_ = value; }
  void set_current_transform(spk::surface_transform_flags_khr value) { current_transform_ = value; }
  void set_supported_composite_alpha(spk::composite_alpha_flags_khr value) { supported_composite_alpha_ = value; }
  void set_supported_usage_flags(spk::image_usage_flags value) { supported_usage_flags_ = value; }
  void set_supported_surface_counters(spk::surface_counter_flags_ext value) { supported_surface_counters_ = value; }

  // accessors
  uint32_t min_image_count() const { return min_image_count_; }
  uint32_t max_image_count() const { return max_image_count_; }
  spk::extent_2d current_extent() const { return current_extent_; }
  spk::extent_2d min_image_extent() const { return min_image_extent_; }
  spk::extent_2d max_image_extent() const { return max_image_extent_; }
  uint32_t max_image_array_layers() const { return max_image_array_layers_; }
  spk::surface_transform_flags_khr supported_transforms() const { return supported_transforms_; }
  spk::surface_transform_flags_khr current_transform() const { return current_transform_; }
  spk::composite_alpha_flags_khr supported_composite_alpha() const { return supported_composite_alpha_; }
  spk::image_usage_flags supported_usage_flags() const { return supported_usage_flags_; }
  spk::surface_counter_flags_ext supported_surface_counters() const { return supported_surface_counters_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT;
  void* p_next_ = nullptr;

  uint32_t min_image_count_= 0;
  uint32_t max_image_count_= 0;
  spk::extent_2d current_extent_;
  spk::extent_2d min_image_extent_;
  spk::extent_2d max_image_extent_;
  uint32_t max_image_array_layers_= 0;
  spk::surface_transform_flags_khr supported_transforms_= spk::surface_transform_flags_khr(0);// optional
  spk::surface_transform_flags_khr current_transform_= spk::surface_transform_flags_khr(0);
  spk::composite_alpha_flags_khr supported_composite_alpha_= spk::composite_alpha_flags_khr(0);// optional
  spk::image_usage_flags supported_usage_flags_= spk::image_usage_flags(0);// optional
  spk::surface_counter_flags_ext supported_surface_counters_= spk::surface_counter_flags_ext(0);// optional
};
static_assert(sizeof(surface_capabilities_2ext) == sizeof(surface_capabilities_2ext::underlying_type));

class surface_capabilities_khr {
 public:
  using underlying_type = VkSurfaceCapabilitiesKHR;

  // mutators
  void set_min_image_count(uint32_t value) { min_image_count_ = value; }
  void set_max_image_count(uint32_t value) { max_image_count_ = value; }
  void set_current_extent(spk::extent_2d value) { current_extent_ = value; }
  void set_min_image_extent(spk::extent_2d value) { min_image_extent_ = value; }
  void set_max_image_extent(spk::extent_2d value) { max_image_extent_ = value; }
  void set_max_image_array_layers(uint32_t value) { max_image_array_layers_ = value; }
  void set_supported_transforms(spk::surface_transform_flags_khr value) { supported_transforms_ = value; }
  void set_current_transform(spk::surface_transform_flags_khr value) { current_transform_ = value; }
  void set_supported_composite_alpha(spk::composite_alpha_flags_khr value) { supported_composite_alpha_ = value; }
  void set_supported_usage_flags(spk::image_usage_flags value) { supported_usage_flags_ = value; }

  // accessors
  uint32_t min_image_count() const { return min_image_count_; }
  uint32_t max_image_count() const { return max_image_count_; }
  spk::extent_2d current_extent() const { return current_extent_; }
  spk::extent_2d min_image_extent() const { return min_image_extent_; }
  spk::extent_2d max_image_extent() const { return max_image_extent_; }
  uint32_t max_image_array_layers() const { return max_image_array_layers_; }
  spk::surface_transform_flags_khr supported_transforms() const { return supported_transforms_; }
  spk::surface_transform_flags_khr current_transform() const { return current_transform_; }
  spk::composite_alpha_flags_khr supported_composite_alpha() const { return supported_composite_alpha_; }
  spk::image_usage_flags supported_usage_flags() const { return supported_usage_flags_; }

 private:
  uint32_t min_image_count_= 0;
  uint32_t max_image_count_= 0;
  spk::extent_2d current_extent_;
  spk::extent_2d min_image_extent_;
  spk::extent_2d max_image_extent_;
  uint32_t max_image_array_layers_= 0;
  spk::surface_transform_flags_khr supported_transforms_= spk::surface_transform_flags_khr(0);// optional
  spk::surface_transform_flags_khr current_transform_= spk::surface_transform_flags_khr(0);
  spk::composite_alpha_flags_khr supported_composite_alpha_= spk::composite_alpha_flags_khr(0);// optional
  spk::image_usage_flags supported_usage_flags_= spk::image_usage_flags(0);// optional
};
static_assert(sizeof(surface_capabilities_khr) == sizeof(surface_capabilities_khr::underlying_type));

class surface_format_2khr {
 public:
  using underlying_type = VkSurfaceFormat2KHR;

  // mutators
  void set_surface_format(spk::surface_format_khr value) { surface_format_ = value; }

  // accessors
  spk::surface_format_khr surface_format() const { return surface_format_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR;
  void* p_next_ = nullptr;

  spk::surface_format_khr surface_format_;
};
static_assert(sizeof(surface_format_2khr) == sizeof(surface_format_2khr::underlying_type));

class swapchain_create_info_khr {
 public:
  using underlying_type = VkSwapchainCreateInfoKHR;

  // mutators
  void set_clipped(bool val) { clipped_ = val; }
  void set_queue_family_indices(spk::array_view<uint32_t const> value) { p_queue_family_indices_ = value.get(); queue_family_index_count_ = value.size(); }
  void set_flags(spk::swapchain_create_flags_khr value) { flags_ = value; }
  void set_surface(spk::surface_khr_ref value) { surface_ = value; }
  void set_min_image_count(uint32_t value) { min_image_count_ = value; }
  void set_image_format(spk::format value) { image_format_ = value; }
  void set_image_color_space(spk::color_space_khr value) { image_color_space_ = value; }
  void set_image_extent(spk::extent_2d value) { image_extent_ = value; }
  void set_image_array_layers(uint32_t value) { image_array_layers_ = value; }
  void set_image_usage(spk::image_usage_flags value) { image_usage_ = value; }
  void set_image_sharing_mode(spk::sharing_mode value) { image_sharing_mode_ = value; }
  void set_pre_transform(spk::surface_transform_flags_khr value) { pre_transform_ = value; }
  void set_composite_alpha(spk::composite_alpha_flags_khr value) { composite_alpha_ = value; }
  void set_present_mode(spk::present_mode_khr value) { present_mode_ = value; }
  void set_old_swapchain(spk::swapchain_khr_ref value) { old_swapchain_ = value; }

  // accessors
  bool clipped() const { return clipped_; }
  spk::array_view<uint32_t const> queue_family_indices() const { return {p_queue_family_indices_, queue_family_index_count_};}
  spk::swapchain_create_flags_khr flags() const { return flags_; }
  spk::surface_khr_ref surface() const { return surface_; }
  uint32_t min_image_count() const { return min_image_count_; }
  spk::format image_format() const { return image_format_; }
  spk::color_space_khr image_color_space() const { return image_color_space_; }
  spk::extent_2d image_extent() const { return image_extent_; }
  uint32_t image_array_layers() const { return image_array_layers_; }
  spk::image_usage_flags image_usage() const { return image_usage_; }
  spk::sharing_mode image_sharing_mode() const { return image_sharing_mode_; }
  spk::surface_transform_flags_khr pre_transform() const { return pre_transform_; }
  spk::composite_alpha_flags_khr composite_alpha() const { return composite_alpha_; }
  spk::present_mode_khr present_mode() const { return present_mode_; }
  spk::swapchain_khr_ref old_swapchain() const { return old_swapchain_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  spk::swapchain_create_flags_khr flags_= spk::swapchain_create_flags_khr(0);// optional
  spk::surface_khr_ref surface_= 0;
  uint32_t min_image_count_= 0;
  spk::format image_format_= spk::format(0);
  spk::color_space_khr image_color_space_= spk::color_space_khr(0);
  spk::extent_2d image_extent_;
  uint32_t image_array_layers_= 0;
  spk::image_usage_flags image_usage_= spk::image_usage_flags(0);
  spk::sharing_mode image_sharing_mode_= spk::sharing_mode(0);
  uint32_t queue_family_index_count_= 0;// optional
  uint32_t const * p_queue_family_indices_= 0;
  spk::surface_transform_flags_khr pre_transform_= spk::surface_transform_flags_khr(0);
  spk::composite_alpha_flags_khr composite_alpha_= spk::composite_alpha_flags_khr(0);
  spk::present_mode_khr present_mode_= spk::present_mode_khr(0);
  spk::bool32_t clipped_= 0;
  spk::swapchain_khr_ref old_swapchain_= 0;// optional
};
static_assert(sizeof(swapchain_create_info_khr) == sizeof(swapchain_create_info_khr::underlying_type));

class attachment_sample_locations_ext {
 public:
  using underlying_type = VkAttachmentSampleLocationsEXT;

  // mutators
  void set_attachment_index(uint32_t value) { attachment_index_ = value; }
  void set_sample_locations_info(spk::sample_locations_info_ext value) { sample_locations_info_ = value; }

  // accessors
  uint32_t attachment_index() const { return attachment_index_; }
  spk::sample_locations_info_ext sample_locations_info() const { return sample_locations_info_; }

 private:
  uint32_t attachment_index_= 0;
  spk::sample_locations_info_ext sample_locations_info_;
};
static_assert(sizeof(attachment_sample_locations_ext) == sizeof(attachment_sample_locations_ext::underlying_type));

class clear_attachment {
 public:
  using underlying_type = VkClearAttachment;

  // mutators
  void set_aspect_mask(spk::image_aspect_flags value) { aspect_mask_ = value; }
  void set_color_attachment(uint32_t value) { color_attachment_ = value; }
  void set_clear_value(spk::clear_value value) { clear_value_ = value; }

  // accessors
  spk::image_aspect_flags aspect_mask() const { return aspect_mask_; }
  uint32_t color_attachment() const { return color_attachment_; }
  spk::clear_value clear_value() const { return clear_value_; }

 private:
  spk::image_aspect_flags aspect_mask_= spk::image_aspect_flags(0);
  uint32_t color_attachment_= 0;
  spk::clear_value clear_value_;
};
static_assert(sizeof(clear_attachment) == sizeof(clear_attachment::underlying_type));

class clear_rect {
 public:
  using underlying_type = VkClearRect;

  // mutators
  void set_rect(spk::rect_2d value) { rect_ = value; }
  void set_base_array_layer(uint32_t value) { base_array_layer_ = value; }
  void set_layer_count(uint32_t value) { layer_count_ = value; }

  // accessors
  spk::rect_2d rect() const { return rect_; }
  uint32_t base_array_layer() const { return base_array_layer_; }
  uint32_t layer_count() const { return layer_count_; }

 private:
  spk::rect_2d rect_;
  uint32_t base_array_layer_= 0;
  uint32_t layer_count_= 0;
};
static_assert(sizeof(clear_rect) == sizeof(clear_rect::underlying_type));

class display_mode_create_info_khr {
 public:
  using underlying_type = VkDisplayModeCreateInfoKHR;

  // mutators
  void set_parameters(spk::display_mode_parameters_khr value) { parameters_ = value; }

  // accessors
  spk::display_mode_parameters_khr parameters() const { return parameters_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR;
  void* p_next_ = nullptr;

  VkFlags flags_; // reserved
  spk::display_mode_parameters_khr parameters_;
};
static_assert(sizeof(display_mode_create_info_khr) == sizeof(display_mode_create_info_khr::underlying_type));

class display_mode_properties_khr {
 public:
  using underlying_type = VkDisplayModePropertiesKHR;

  // mutators
  void set_display_mode(spk::display_mode_khr_ref value) { display_mode_ = value; }
  void set_parameters(spk::display_mode_parameters_khr value) { parameters_ = value; }

  // accessors
  spk::display_mode_khr_ref display_mode() const { return display_mode_; }
  spk::display_mode_parameters_khr parameters() const { return parameters_; }

 private:
  spk::display_mode_khr_ref display_mode_= 0;
  spk::display_mode_parameters_khr parameters_;
};
static_assert(sizeof(display_mode_properties_khr) == sizeof(display_mode_properties_khr::underlying_type));

class display_plane_capabilities_2khr {
 public:
  using underlying_type = VkDisplayPlaneCapabilities2KHR;

  // mutators
  void set_capabilities(spk::display_plane_capabilities_khr value) { capabilities_ = value; }

  // accessors
  spk::display_plane_capabilities_khr capabilities() const { return capabilities_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR;
  void* p_next_ = nullptr;

  spk::display_plane_capabilities_khr capabilities_;
};
static_assert(sizeof(display_plane_capabilities_2khr) == sizeof(display_plane_capabilities_2khr::underlying_type));

class display_present_info_khr {
 public:
  using underlying_type = VkDisplayPresentInfoKHR;

  // mutators
  void set_persistent(bool val) { persistent_ = val; }
  void set_src_rect(spk::rect_2d value) { src_rect_ = value; }
  void set_dst_rect(spk::rect_2d value) { dst_rect_ = value; }

  // accessors
  bool persistent() const { return persistent_; }
  spk::rect_2d src_rect() const { return src_rect_; }
  spk::rect_2d dst_rect() const { return dst_rect_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
  void* p_next_ = nullptr;

  spk::rect_2d src_rect_;
  spk::rect_2d dst_rect_;
  spk::bool32_t persistent_= 0;
};
static_assert(sizeof(display_present_info_khr) == sizeof(display_present_info_khr::underlying_type));

class display_properties_2khr {
 public:
  using underlying_type = VkDisplayProperties2KHR;

  // mutators
  void set_display_properties(spk::display_properties_khr value) { display_properties_ = value; }

  // accessors
  spk::display_properties_khr display_properties() const { return display_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR;
  void* p_next_ = nullptr;

  spk::display_properties_khr display_properties_;
};
static_assert(sizeof(display_properties_2khr) == sizeof(display_properties_2khr::underlying_type));

class external_image_format_properties_nv {
 public:
  using underlying_type = VkExternalImageFormatPropertiesNV;

  // mutators
  void set_image_format_properties(spk::image_format_properties value) { image_format_properties_ = value; }
  void set_external_memory_features(spk::external_memory_feature_flags_nv value) { external_memory_features_ = value; }
  void set_export_from_imported_handle_types(spk::external_memory_handle_type_flags_nv value) { export_from_imported_handle_types_ = value; }
  void set_compatible_handle_types(spk::external_memory_handle_type_flags_nv value) { compatible_handle_types_ = value; }

  // accessors
  spk::image_format_properties image_format_properties() const { return image_format_properties_; }
  spk::external_memory_feature_flags_nv external_memory_features() const { return external_memory_features_; }
  spk::external_memory_handle_type_flags_nv export_from_imported_handle_types() const { return export_from_imported_handle_types_; }
  spk::external_memory_handle_type_flags_nv compatible_handle_types() const { return compatible_handle_types_; }

 private:
  spk::image_format_properties image_format_properties_;
  spk::external_memory_feature_flags_nv external_memory_features_= spk::external_memory_feature_flags_nv(0);// optional
  spk::external_memory_handle_type_flags_nv export_from_imported_handle_types_= spk::external_memory_handle_type_flags_nv(0);// optional
  spk::external_memory_handle_type_flags_nv compatible_handle_types_= spk::external_memory_handle_type_flags_nv(0);// optional
};
static_assert(sizeof(external_image_format_properties_nv) == sizeof(external_image_format_properties_nv::underlying_type));

class image_format_properties_2 {
 public:
  using underlying_type = VkImageFormatProperties2;

  // mutators
  void set_image_format_properties(spk::image_format_properties value) { image_format_properties_ = value; }

  // accessors
  spk::image_format_properties image_format_properties() const { return image_format_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::image_format_properties image_format_properties_;
};
static_assert(sizeof(image_format_properties_2) == sizeof(image_format_properties_2::underlying_type));
using image_format_properties_2khr = image_format_properties_2;


class physical_device_memory_properties_2 {
 public:
  using underlying_type = VkPhysicalDeviceMemoryProperties2;

  // mutators
  void set_memory_properties(spk::physical_device_memory_properties value) { memory_properties_ = value; }

  // accessors
  spk::physical_device_memory_properties memory_properties() const { return memory_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::physical_device_memory_properties memory_properties_;
};
static_assert(sizeof(physical_device_memory_properties_2) == sizeof(physical_device_memory_properties_2::underlying_type));
using physical_device_memory_properties_2khr = physical_device_memory_properties_2;


class physical_device_properties_2 {
 public:
  using underlying_type = VkPhysicalDeviceProperties2;

  // mutators
  void set_properties(spk::physical_device_properties value) { properties_ = value; }

  // accessors
  spk::physical_device_properties properties() const { return properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::physical_device_properties properties_;
};
static_assert(sizeof(physical_device_properties_2) == sizeof(physical_device_properties_2::underlying_type));
using physical_device_properties_2khr = physical_device_properties_2;


class pipeline_sample_locations_state_create_info_ext {
 public:
  using underlying_type = VkPipelineSampleLocationsStateCreateInfoEXT;

  // mutators
  void set_sample_locations_enable(bool val) { sample_locations_enable_ = val; }
  void set_sample_locations_info(spk::sample_locations_info_ext value) { sample_locations_info_ = value; }

  // accessors
  bool sample_locations_enable() const { return sample_locations_enable_; }
  spk::sample_locations_info_ext sample_locations_info() const { return sample_locations_info_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT;
  void* p_next_ = nullptr;

  spk::bool32_t sample_locations_enable_= 0;
  spk::sample_locations_info_ext sample_locations_info_;
};
static_assert(sizeof(pipeline_sample_locations_state_create_info_ext) == sizeof(pipeline_sample_locations_state_create_info_ext::underlying_type));

class queue_family_properties_2 {
 public:
  using underlying_type = VkQueueFamilyProperties2;

  // mutators
  void set_queue_family_properties(spk::queue_family_properties value) { queue_family_properties_ = value; }

  // accessors
  spk::queue_family_properties queue_family_properties() const { return queue_family_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::queue_family_properties queue_family_properties_;
};
static_assert(sizeof(queue_family_properties_2) == sizeof(queue_family_properties_2::underlying_type));
using queue_family_properties_2khr = queue_family_properties_2;


class render_pass_begin_info {
 public:
  using underlying_type = VkRenderPassBeginInfo;

  // mutators
  void set_clear_values(spk::array_view<spk::clear_value const> value) { p_clear_values_ = value.get(); clear_value_count_ = value.size(); }
  void set_render_pass(spk::render_pass_ref value) { render_pass_ = value; }
  void set_framebuffer(spk::framebuffer_ref value) { framebuffer_ = value; }
  void set_render_area(spk::rect_2d value) { render_area_ = value; }

  // accessors
  spk::array_view<spk::clear_value const> clear_values() const { return {p_clear_values_, clear_value_count_};}
  spk::render_pass_ref render_pass() const { return render_pass_; }
  spk::framebuffer_ref framebuffer() const { return framebuffer_; }
  spk::rect_2d render_area() const { return render_area_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
  void* p_next_ = nullptr;

  spk::render_pass_ref render_pass_= 0;
  spk::framebuffer_ref framebuffer_= 0;
  spk::rect_2d render_area_;
  uint32_t clear_value_count_= 0;// optional
  spk::clear_value const * p_clear_values_= 0;
};
static_assert(sizeof(render_pass_begin_info) == sizeof(render_pass_begin_info::underlying_type));

class sparse_image_format_properties_2 {
 public:
  using underlying_type = VkSparseImageFormatProperties2;

  // mutators
  void set_properties(spk::sparse_image_format_properties value) { properties_ = value; }

  // accessors
  spk::sparse_image_format_properties properties() const { return properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
  void* p_next_ = nullptr;

  spk::sparse_image_format_properties properties_;
};
static_assert(sizeof(sparse_image_format_properties_2) == sizeof(sparse_image_format_properties_2::underlying_type));
using sparse_image_format_properties_2khr = sparse_image_format_properties_2;


class sparse_image_memory_requirements {
 public:
  using underlying_type = VkSparseImageMemoryRequirements;

  // mutators
  void set_format_properties(spk::sparse_image_format_properties value) { format_properties_ = value; }
  void set_image_mip_tail_first_lod(uint32_t value) { image_mip_tail_first_lod_ = value; }
  void set_image_mip_tail_size(uint64_t value) { image_mip_tail_size_ = value; }
  void set_image_mip_tail_offset(uint64_t value) { image_mip_tail_offset_ = value; }
  void set_image_mip_tail_stride(uint64_t value) { image_mip_tail_stride_ = value; }

  // accessors
  spk::sparse_image_format_properties format_properties() const { return format_properties_; }
  uint32_t image_mip_tail_first_lod() const { return image_mip_tail_first_lod_; }
  uint64_t image_mip_tail_size() const { return image_mip_tail_size_; }
  uint64_t image_mip_tail_offset() const { return image_mip_tail_offset_; }
  uint64_t image_mip_tail_stride() const { return image_mip_tail_stride_; }

 private:
  spk::sparse_image_format_properties format_properties_;
  uint32_t image_mip_tail_first_lod_= 0;
  uint64_t image_mip_tail_size_= 0;
  uint64_t image_mip_tail_offset_= 0;
  uint64_t image_mip_tail_stride_= 0;
};
static_assert(sizeof(sparse_image_memory_requirements) == sizeof(sparse_image_memory_requirements::underlying_type));

class subpass_sample_locations_ext {
 public:
  using underlying_type = VkSubpassSampleLocationsEXT;

  // mutators
  void set_subpass_index(uint32_t value) { subpass_index_ = value; }
  void set_sample_locations_info(spk::sample_locations_info_ext value) { sample_locations_info_ = value; }

  // accessors
  uint32_t subpass_index() const { return subpass_index_; }
  spk::sample_locations_info_ext sample_locations_info() const { return sample_locations_info_; }

 private:
  uint32_t subpass_index_= 0;
  spk::sample_locations_info_ext sample_locations_info_;
};
static_assert(sizeof(subpass_sample_locations_ext) == sizeof(subpass_sample_locations_ext::underlying_type));

class surface_capabilities_2khr {
 public:
  using underlying_type = VkSurfaceCapabilities2KHR;

  // mutators
  void set_surface_capabilities(spk::surface_capabilities_khr value) { surface_capabilities_ = value; }

  // accessors
  spk::surface_capabilities_khr surface_capabilities() const { return surface_capabilities_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR;
  void* p_next_ = nullptr;

  spk::surface_capabilities_khr surface_capabilities_;
};
static_assert(sizeof(surface_capabilities_2khr) == sizeof(surface_capabilities_2khr::underlying_type));

class display_mode_properties_2khr {
 public:
  using underlying_type = VkDisplayModeProperties2KHR;

  // mutators
  void set_display_mode_properties(spk::display_mode_properties_khr value) { display_mode_properties_ = value; }

  // accessors
  spk::display_mode_properties_khr display_mode_properties() const { return display_mode_properties_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR;
  void* p_next_ = nullptr;

  spk::display_mode_properties_khr display_mode_properties_;
};
static_assert(sizeof(display_mode_properties_2khr) == sizeof(display_mode_properties_2khr::underlying_type));

class sparse_image_memory_requirements_2 {
 public:
  using underlying_type = VkSparseImageMemoryRequirements2;

  // mutators
  void set_memory_requirements(spk::sparse_image_memory_requirements value) { memory_requirements_ = value; }

  // accessors
  spk::sparse_image_memory_requirements memory_requirements() const { return memory_requirements_; }

  void set_next(void* next) { p_next_ = next; }
 private:
  VkStructureType s_type_ = VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2;
  void* p_next_ = nullptr;

  spk::sparse_image_memory_requirements memory_requirements_;
};
static_assert(sizeof(sparse_image_memory_requirements_2) == sizeof(sparse_image_memory_requirements_2::underlying_type));
using sparse_image_memory_requirements_2khr = sparse_image_memory_requirements_2;


struct global_dispatch_table {
  // spock commands
  [[nodiscard]] spk::result enumerate_instance_layer_properties(
    uint32_t * pPropertyCount,
    spk::layer_properties * pProperties
  ) const {
    const VkResult res = 
    vkEnumerateInstanceLayerProperties(
      (uint32_t *) pPropertyCount,
      (VkLayerProperties *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumerateInstanceLayerProperties");
    }
  }

  std::vector<spk::layer_properties> enumerate_instance_layer_properties(

  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_instance_layer_properties(&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateInstanceLayerProperties");
    std::vector<spk::layer_properties> rt_(sz_);
    rz_ = enumerate_instance_layer_properties(&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateInstanceLayerProperties");
    return rt_;
  }

  void  create_instance(
    spk::instance_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::instance_ref * pInstance
  ) const {
    const VkResult res = 
    vkCreateInstance(
      (VkInstanceCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkInstance *) pInstance
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      case VK_ERROR_LAYER_NOT_PRESENT: throw spk::error_layer_not_present();
      case VK_ERROR_EXTENSION_NOT_PRESENT: throw spk::error_extension_not_present();
      case VK_ERROR_INCOMPATIBLE_DRIVER: throw spk::error_incompatible_driver();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateInstance");
    }
  }

  [[nodiscard]] spk::result enumerate_instance_extension_properties(
    char const * pLayerName,
    uint32_t * pPropertyCount,
    spk::extension_properties * pProperties
  ) const {
    const VkResult res = 
    vkEnumerateInstanceExtensionProperties(
      (char const *) pLayerName,
      (uint32_t *) pPropertyCount,
      (VkExtensionProperties *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_LAYER_NOT_PRESENT: throw spk::error_layer_not_present();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumerateInstanceExtensionProperties");
    }
  }

  std::vector<spk::extension_properties> enumerate_instance_extension_properties(
    char const * pLayerName
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_instance_extension_properties(pLayerName,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateInstanceExtensionProperties");
    std::vector<spk::extension_properties> rt_(sz_);
    rz_ = enumerate_instance_extension_properties(pLayerName,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateInstanceExtensionProperties");
    return rt_;
  }

  void  enumerate_instance_version(
    uint32_t * pApiVersion
  ) const {
    const VkResult res = 
    vkEnumerateInstanceVersion(
      (uint32_t *) pApiVersion
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumerateInstanceVersion");
    }
  }

  // vulkan commands
  PFN_vkEnumerateInstanceLayerProperties vkEnumerateInstanceLayerProperties = nullptr;
  PFN_vkCreateInstance vkCreateInstance = nullptr;
  PFN_vkEnumerateInstanceExtensionProperties vkEnumerateInstanceExtensionProperties = nullptr;
  PFN_vkEnumerateInstanceVersion vkEnumerateInstanceVersion = nullptr;
};

template<class Visitor> void visit_dispatch_table(global_dispatch_table& dispatch_table, const Visitor& V) {
  V(dispatch_table, &global_dispatch_table::vkEnumerateInstanceLayerProperties, "vkEnumerateInstanceLayerProperties");
  V(dispatch_table, &global_dispatch_table::vkCreateInstance, "vkCreateInstance");
  V(dispatch_table, &global_dispatch_table::vkEnumerateInstanceExtensionProperties, "vkEnumerateInstanceExtensionProperties");
  V(dispatch_table, &global_dispatch_table::vkEnumerateInstanceVersion, "vkEnumerateInstanceVersion");
}

struct instance_dispatch_table {
  // spock commands
  void submit_debug_utils_message_ext(
    spk::instance_ref instance,
    spk::debug_utils_message_severity_flags_ext messageSeverity,
    spk::debug_utils_message_type_flags_ext messageTypes,
    spk::debug_utils_messenger_callback_data_ext const * pCallbackData
  ) const {
    vkSubmitDebugUtilsMessageEXT(
      (VkInstance) instance,
      (VkDebugUtilsMessageSeverityFlagBitsEXT) messageSeverity,
      (VkDebugUtilsMessageTypeFlagsEXT) messageTypes,
      (VkDebugUtilsMessengerCallbackDataEXT const *) pCallbackData
    );
  }

  void destroy_debug_utils_messenger_ext(
    spk::instance_ref instance,
    spk::debug_utils_messenger_ext_ref messenger,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDebugUtilsMessengerEXT(
      (VkInstance) instance,
      (VkDebugUtilsMessengerEXT) messenger,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  [[nodiscard]] spk::result get_display_mode_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display,
    uint32_t * pPropertyCount,
    spk::display_mode_properties_2khr * pProperties
  ) const {
    const VkResult res = 
    vkGetDisplayModeProperties2KHR(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayKHR) display,
      (uint32_t *) pPropertyCount,
      (VkDisplayModeProperties2KHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDisplayModeProperties2KHR");
    }
  }

  std::vector<spk::display_mode_properties_2khr> get_display_mode_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_display_mode_properties_2khr(physicalDevice,display,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayModeProperties2KHR");
    std::vector<spk::display_mode_properties_2khr> rt_(sz_);
    rz_ = get_display_mode_properties_2khr(physicalDevice,display,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayModeProperties2KHR");
    return rt_;
  }

  void  get_physical_device_surface_capabilities_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_surface_info_2khr const * pSurfaceInfo,
    spk::surface_capabilities_2khr * pSurfaceCapabilities
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceCapabilities2KHR(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceSurfaceInfo2KHR const *) pSurfaceInfo,
      (VkSurfaceCapabilities2KHR *) pSurfaceCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    }
  }

  void get_physical_device_multisample_properties_ext(
    spk::physical_device_ref physicalDevice,
    spk::sample_count_flags samples,
    spk::multisample_properties_ext * pMultisampleProperties
  ) const {
    vkGetPhysicalDeviceMultisamplePropertiesEXT(
      (VkPhysicalDevice) physicalDevice,
      (VkSampleCountFlagBits) samples,
      (VkMultisamplePropertiesEXT *) pMultisampleProperties
    );
  }

  [[nodiscard]] spk::result get_physical_device_display_properties_2khr(
    spk::physical_device_ref physicalDevice,
    uint32_t * pPropertyCount,
    spk::display_properties_2khr * pProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceDisplayProperties2KHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pPropertyCount,
      (VkDisplayProperties2KHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceDisplayProperties2KHR");
    }
  }

  std::vector<spk::display_properties_2khr> get_physical_device_display_properties_2khr(
    spk::physical_device_ref physicalDevice
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_display_properties_2khr(physicalDevice,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayProperties2KHR");
    std::vector<spk::display_properties_2khr> rt_(sz_);
    rz_ = get_physical_device_display_properties_2khr(physicalDevice,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayProperties2KHR");
    return rt_;
  }

#ifdef VK_USE_PLATFORM_IOS_MVK
  void  create_ios_surface_mvk(
    spk::instance_ref instance,
    spk::ios_surface_create_info_mvk const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateIOSSurfaceMVK(
      (VkInstance) instance,
      (VkIOSSurfaceCreateInfoMVK const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: throw spk::error_native_window_in_use_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateIOSSurfaceMVK");
    }
  }
#endif

  [[nodiscard]] spk::result get_physical_device_surface_formats_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_surface_info_2khr const * pSurfaceInfo,
    uint32_t * pSurfaceFormatCount,
    spk::surface_format_2khr * pSurfaceFormats
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceFormats2KHR(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceSurfaceInfo2KHR const *) pSurfaceInfo,
      (uint32_t *) pSurfaceFormatCount,
      (VkSurfaceFormat2KHR *) pSurfaceFormats
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    }
  }

  std::vector<spk::surface_format_2khr> get_physical_device_surface_formats_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_surface_info_2khr const * pSurfaceInfo
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_surface_formats_2khr(physicalDevice,pSurfaceInfo,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    std::vector<spk::surface_format_2khr> rt_(sz_);
    rz_ = get_physical_device_surface_formats_2khr(physicalDevice,pSurfaceInfo,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfaceFormats2KHR");
    return rt_;
  }

  void  create_debug_utils_messenger_ext(
    spk::instance_ref instance,
    spk::debug_utils_messenger_create_info_ext const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::debug_utils_messenger_ext_ref * pMessenger
  ) const {
    const VkResult res = 
    vkCreateDebugUtilsMessengerEXT(
      (VkInstance) instance,
      (VkDebugUtilsMessengerCreateInfoEXT const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDebugUtilsMessengerEXT *) pMessenger
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDebugUtilsMessengerEXT");
    }
  }

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  void  get_rand_r_output_display_ext(
    spk::physical_device_ref physicalDevice,
    Display * dpy,
    RROutput rrOutput,
    spk::display_khr_ref * pDisplay
  ) const {
    const VkResult res = 
    vkGetRandROutputDisplayEXT(
      (VkPhysicalDevice) physicalDevice,
      (Display *) dpy,
      (RROutput) rrOutput,
      (VkDisplayKHR *) pDisplay
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetRandROutputDisplayEXT");
    }
  }
#endif

#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  void  acquire_xlib_display_ext(
    spk::physical_device_ref physicalDevice,
    Display * dpy,
    spk::display_khr_ref display
  ) const {
    const VkResult res = 
    vkAcquireXlibDisplayEXT(
      (VkPhysicalDevice) physicalDevice,
      (Display *) dpy,
      (VkDisplayKHR) display
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAcquireXlibDisplayEXT");
    }
  }
#endif

  void get_physical_device_external_fence_properties_khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_fence_info const * pExternalFenceInfo,
    spk::external_fence_properties * pExternalFenceProperties
  ) const {
    vkGetPhysicalDeviceExternalFenceProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalFenceInfo const *) pExternalFenceInfo,
      (VkExternalFenceProperties *) pExternalFenceProperties
    );
  }

  void get_physical_device_external_fence_properties(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_fence_info const * pExternalFenceInfo,
    spk::external_fence_properties * pExternalFenceProperties
  ) const {
    vkGetPhysicalDeviceExternalFenceProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalFenceInfo const *) pExternalFenceInfo,
      (VkExternalFenceProperties *) pExternalFenceProperties
    );
  }

  void get_physical_device_external_semaphore_properties(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_semaphore_info const * pExternalSemaphoreInfo,
    spk::external_semaphore_properties * pExternalSemaphoreProperties
  ) const {
    vkGetPhysicalDeviceExternalSemaphoreProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalSemaphoreInfo const *) pExternalSemaphoreInfo,
      (VkExternalSemaphoreProperties *) pExternalSemaphoreProperties
    );
  }

  void get_physical_device_external_semaphore_properties_khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_semaphore_info const * pExternalSemaphoreInfo,
    spk::external_semaphore_properties * pExternalSemaphoreProperties
  ) const {
    vkGetPhysicalDeviceExternalSemaphoreProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalSemaphoreInfo const *) pExternalSemaphoreInfo,
      (VkExternalSemaphoreProperties *) pExternalSemaphoreProperties
    );
  }

  void get_physical_device_external_buffer_properties_khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_buffer_info const * pExternalBufferInfo,
    spk::external_buffer_properties * pExternalBufferProperties
  ) const {
    vkGetPhysicalDeviceExternalBufferProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalBufferInfo const *) pExternalBufferInfo,
      (VkExternalBufferProperties *) pExternalBufferProperties
    );
  }

  void get_physical_device_external_buffer_properties(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_external_buffer_info const * pExternalBufferInfo,
    spk::external_buffer_properties * pExternalBufferProperties
  ) const {
    vkGetPhysicalDeviceExternalBufferProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceExternalBufferInfo const *) pExternalBufferInfo,
      (VkExternalBufferProperties *) pExternalBufferProperties
    );
  }

  void get_physical_device_sparse_image_format_properties_2(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_sparse_image_format_info_2 const * pFormatInfo,
    uint32_t * pPropertyCount,
    spk::sparse_image_format_properties_2 * pProperties
  ) const {
    vkGetPhysicalDeviceSparseImageFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceSparseImageFormatInfo2 const *) pFormatInfo,
      (uint32_t *) pPropertyCount,
      (VkSparseImageFormatProperties2 *) pProperties
    );
  }

  void get_physical_device_sparse_image_format_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_sparse_image_format_info_2 const * pFormatInfo,
    uint32_t * pPropertyCount,
    spk::sparse_image_format_properties_2 * pProperties
  ) const {
    vkGetPhysicalDeviceSparseImageFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceSparseImageFormatInfo2 const *) pFormatInfo,
      (uint32_t *) pPropertyCount,
      (VkSparseImageFormatProperties2 *) pProperties
    );
  }

#ifdef VK_USE_PLATFORM_MACOS_MVK
  void  create_mac_os_surface_mvk(
    spk::instance_ref instance,
    spk::mac_os_surface_create_info_mvk const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateMacOSSurfaceMVK(
      (VkInstance) instance,
      (VkMacOSSurfaceCreateInfoMVK const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: throw spk::error_native_window_in_use_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateMacOSSurfaceMVK");
    }
  }
#endif

  void get_physical_device_format_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::format_properties_2 * pFormatProperties
  ) const {
    vkGetPhysicalDeviceFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkFormatProperties2 *) pFormatProperties
    );
  }

  void get_physical_device_format_properties_2(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::format_properties_2 * pFormatProperties
  ) const {
    vkGetPhysicalDeviceFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkFormatProperties2 *) pFormatProperties
    );
  }

  void get_physical_device_properties_2(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_properties_2 * pProperties
  ) const {
    vkGetPhysicalDeviceProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceProperties2 *) pProperties
    );
  }

  void get_physical_device_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_properties_2 * pProperties
  ) const {
    vkGetPhysicalDeviceProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceProperties2 *) pProperties
    );
  }

  void get_physical_device_generated_commands_properties_nvx(
    spk::physical_device_ref physicalDevice,
    spk::device_generated_commands_features_nvx * pFeatures,
    spk::device_generated_commands_limits_nvx * pLimits
  ) const {
    vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
      (VkPhysicalDevice) physicalDevice,
      (VkDeviceGeneratedCommandsFeaturesNVX *) pFeatures,
      (VkDeviceGeneratedCommandsLimitsNVX *) pLimits
    );
  }

  [[nodiscard]] spk::result get_physical_device_display_plane_properties_2khr(
    spk::physical_device_ref physicalDevice,
    uint32_t * pPropertyCount,
    spk::display_plane_properties_2khr * pProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceDisplayPlaneProperties2KHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pPropertyCount,
      (VkDisplayPlaneProperties2KHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    }
  }

  std::vector<spk::display_plane_properties_2khr> get_physical_device_display_plane_properties_2khr(
    spk::physical_device_ref physicalDevice
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_display_plane_properties_2khr(physicalDevice,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    std::vector<spk::display_plane_properties_2khr> rt_(sz_);
    rz_ = get_physical_device_display_plane_properties_2khr(physicalDevice,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    return rt_;
  }

  void  get_physical_device_external_image_format_properties_nv(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::image_type type,
    spk::image_tiling tiling,
    spk::image_usage_flags usage,
    spk::image_create_flags flags,
    spk::external_memory_handle_type_flags_nv externalHandleType,
    spk::external_image_format_properties_nv * pExternalImageFormatProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceExternalImageFormatPropertiesNV(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkImageType) type,
      (VkImageTiling) tiling,
      (VkImageUsageFlags) usage,
      (VkImageCreateFlags) flags,
      (VkExternalMemoryHandleTypeFlagsNV) externalHandleType,
      (VkExternalImageFormatPropertiesNV *) pExternalImageFormatProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FORMAT_NOT_SUPPORTED: throw spk::error_format_not_supported();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
    }
  }

  void debug_report_message_ext(
    spk::instance_ref instance,
    spk::debug_report_flags_ext flags,
    spk::debug_report_object_type_ext objectType,
    uint64_t object,
    size_t location,
    int32_t messageCode,
    char const * pLayerPrefix,
    char const * pMessage
  ) const {
    vkDebugReportMessageEXT(
      (VkInstance) instance,
      (VkDebugReportFlagsEXT) flags,
      (VkDebugReportObjectTypeEXT) objectType,
      (uint64_t) object,
      (size_t) location,
      (int32_t) messageCode,
      (char const *) pLayerPrefix,
      (char const *) pMessage
    );
  }

  void destroy_debug_report_callback_ext(
    spk::instance_ref instance,
    spk::debug_report_callback_ext_ref callback,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDebugReportCallbackEXT(
      (VkInstance) instance,
      (VkDebugReportCallbackEXT) callback,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

#ifdef VK_USE_PLATFORM_XCB_KHR
  spk::bool32_t get_physical_device_xcb_presentation_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex,
    xcb_connection_t * connection,
    xcb_visualid_t visual_id
  ) const {
    return (spk::bool32_t)(
    vkGetPhysicalDeviceXcbPresentationSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex,
      (xcb_connection_t *) connection,
      (xcb_visualid_t) visual_id
    ));
  }
#endif

  void get_physical_device_format_properties(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::format_properties * pFormatProperties
  ) const {
    vkGetPhysicalDeviceFormatProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkFormatProperties *) pFormatProperties
    );
  }

#ifdef VK_USE_PLATFORM_XCB_KHR
  void  create_xcb_surface_khr(
    spk::instance_ref instance,
    spk::xcb_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateXcbSurfaceKHR(
      (VkInstance) instance,
      (VkXcbSurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateXcbSurfaceKHR");
    }
  }
#endif

  void  release_display_ext(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display
  ) const {
    const VkResult res = 
    vkReleaseDisplayEXT(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayKHR) display
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkReleaseDisplayEXT");
    }
  }

  void  get_physical_device_image_format_properties(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::image_type type,
    spk::image_tiling tiling,
    spk::image_usage_flags usage,
    spk::image_create_flags flags,
    spk::image_format_properties * pImageFormatProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceImageFormatProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkImageType) type,
      (VkImageTiling) tiling,
      (VkImageUsageFlags) usage,
      (VkImageCreateFlags) flags,
      (VkImageFormatProperties *) pImageFormatProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FORMAT_NOT_SUPPORTED: throw spk::error_format_not_supported();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceImageFormatProperties");
    }
  }

  void get_physical_device_properties(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_properties * pProperties
  ) const {
    vkGetPhysicalDeviceProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceProperties *) pProperties
    );
  }

  [[nodiscard]] spk::result enumerate_device_extension_properties(
    spk::physical_device_ref physicalDevice,
    char const * pLayerName,
    uint32_t * pPropertyCount,
    spk::extension_properties * pProperties
  ) const {
    const VkResult res = 
    vkEnumerateDeviceExtensionProperties(
      (VkPhysicalDevice) physicalDevice,
      (char const *) pLayerName,
      (uint32_t *) pPropertyCount,
      (VkExtensionProperties *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_LAYER_NOT_PRESENT: throw spk::error_layer_not_present();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumerateDeviceExtensionProperties");
    }
  }

  std::vector<spk::extension_properties> enumerate_device_extension_properties(
    spk::physical_device_ref physicalDevice,
    char const * pLayerName
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_device_extension_properties(physicalDevice,pLayerName,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateDeviceExtensionProperties");
    std::vector<spk::extension_properties> rt_(sz_);
    rz_ = enumerate_device_extension_properties(physicalDevice,pLayerName,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateDeviceExtensionProperties");
    return rt_;
  }

  void get_physical_device_queue_family_properties_2khr(
    spk::physical_device_ref physicalDevice,
    uint32_t * pQueueFamilyPropertyCount,
    spk::queue_family_properties_2 * pQueueFamilyProperties
  ) const {
    vkGetPhysicalDeviceQueueFamilyProperties2(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pQueueFamilyPropertyCount,
      (VkQueueFamilyProperties2 *) pQueueFamilyProperties
    );
  }

  void get_physical_device_queue_family_properties_2(
    spk::physical_device_ref physicalDevice,
    uint32_t * pQueueFamilyPropertyCount,
    spk::queue_family_properties_2 * pQueueFamilyProperties
  ) const {
    vkGetPhysicalDeviceQueueFamilyProperties2(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pQueueFamilyPropertyCount,
      (VkQueueFamilyProperties2 *) pQueueFamilyProperties
    );
  }

  void  get_display_plane_capabilities_2khr(
    spk::physical_device_ref physicalDevice,
    spk::display_plane_info_2khr const * pDisplayPlaneInfo,
    spk::display_plane_capabilities_2khr * pCapabilities
  ) const {
    const VkResult res = 
    vkGetDisplayPlaneCapabilities2KHR(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayPlaneInfo2KHR const *) pDisplayPlaneInfo,
      (VkDisplayPlaneCapabilities2KHR *) pCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDisplayPlaneCapabilities2KHR");
    }
  }

  void get_physical_device_memory_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_memory_properties_2 * pMemoryProperties
  ) const {
    vkGetPhysicalDeviceMemoryProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceMemoryProperties2 *) pMemoryProperties
    );
  }

  void get_physical_device_memory_properties_2(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_memory_properties_2 * pMemoryProperties
  ) const {
    vkGetPhysicalDeviceMemoryProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceMemoryProperties2 *) pMemoryProperties
    );
  }

#ifdef VK_USE_PLATFORM_XLIB_KHR
  spk::bool32_t get_physical_device_xlib_presentation_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex,
    Display * dpy,
    VisualID visualID
  ) const {
    return (spk::bool32_t)(
    vkGetPhysicalDeviceXlibPresentationSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex,
      (Display *) dpy,
      (VisualID) visualID
    ));
  }
#endif

  [[nodiscard]] spk::result enumerate_physical_devices(
    spk::instance_ref instance,
    uint32_t * pPhysicalDeviceCount,
    spk::physical_device_ref * pPhysicalDevices
  ) const {
    const VkResult res = 
    vkEnumeratePhysicalDevices(
      (VkInstance) instance,
      (uint32_t *) pPhysicalDeviceCount,
      (VkPhysicalDevice *) pPhysicalDevices
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumeratePhysicalDevices");
    }
  }

  std::vector<spk::physical_device_ref> enumerate_physical_devices(
    spk::instance_ref instance
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_physical_devices(instance,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDevices");
    std::vector<spk::physical_device_ref> rt_(sz_);
    rz_ = enumerate_physical_devices(instance,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDevices");
    return rt_;
  }

  PFN_vkVoidFunction get_instance_proc_addr(
    spk::instance_ref instance,
    char const * pName
  ) const {
    return (PFN_vkVoidFunction)(
    vkGetInstanceProcAddr(
      (VkInstance) instance,
      (char const *) pName
    ));
  }

  void get_physical_device_features(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_features * pFeatures
  ) const {
    vkGetPhysicalDeviceFeatures(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceFeatures *) pFeatures
    );
  }

  void get_physical_device_memory_properties(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_memory_properties * pMemoryProperties
  ) const {
    vkGetPhysicalDeviceMemoryProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceMemoryProperties *) pMemoryProperties
    );
  }

  void destroy_instance(
    spk::instance_ref instance,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyInstance(
      (VkInstance) instance,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void get_physical_device_sparse_image_format_properties(
    spk::physical_device_ref physicalDevice,
    spk::format format,
    spk::image_type type,
    spk::sample_count_flags samples,
    spk::image_usage_flags usage,
    spk::image_tiling tiling,
    uint32_t * pPropertyCount,
    spk::sparse_image_format_properties * pProperties
  ) const {
    vkGetPhysicalDeviceSparseImageFormatProperties(
      (VkPhysicalDevice) physicalDevice,
      (VkFormat) format,
      (VkImageType) type,
      (VkSampleCountFlagBits) samples,
      (VkImageUsageFlags) usage,
      (VkImageTiling) tiling,
      (uint32_t *) pPropertyCount,
      (VkSparseImageFormatProperties *) pProperties
    );
  }

  [[nodiscard]] spk::result get_physical_device_present_rectangles_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface,
    uint32_t * pRectCount,
    spk::rect_2d * pRects
  ) const {
    const VkResult res = 
    vkGetPhysicalDevicePresentRectanglesKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkSurfaceKHR) surface,
      (uint32_t *) pRectCount,
      (VkRect2D *) pRects
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDevicePresentRectanglesKHR");
    }
  }

  std::vector<spk::rect_2d> get_physical_device_present_rectangles_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_present_rectangles_khr(physicalDevice,surface,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDevicePresentRectanglesKHR");
    std::vector<spk::rect_2d> rt_(sz_);
    rz_ = get_physical_device_present_rectangles_khr(physicalDevice,surface,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDevicePresentRectanglesKHR");
    return rt_;
  }

  void get_physical_device_queue_family_properties(
    spk::physical_device_ref physicalDevice,
    uint32_t * pQueueFamilyPropertyCount,
    spk::queue_family_properties * pQueueFamilyProperties
  ) const {
    vkGetPhysicalDeviceQueueFamilyProperties(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pQueueFamilyPropertyCount,
      (VkQueueFamilyProperties *) pQueueFamilyProperties
    );
  }

  [[nodiscard]] spk::result enumerate_physical_device_groups_khr(
    spk::instance_ref instance,
    uint32_t * pPhysicalDeviceGroupCount,
    spk::physical_device_group_properties * pPhysicalDeviceGroupProperties
  ) const {
    const VkResult res = 
    vkEnumeratePhysicalDeviceGroups(
      (VkInstance) instance,
      (uint32_t *) pPhysicalDeviceGroupCount,
      (VkPhysicalDeviceGroupProperties *) pPhysicalDeviceGroupProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumeratePhysicalDeviceGroups");
    }
  }

  std::vector<spk::physical_device_group_properties> enumerate_physical_device_groups_khr(
    spk::instance_ref instance
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_physical_device_groups_khr(instance,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDeviceGroups");
    std::vector<spk::physical_device_group_properties> rt_(sz_);
    rz_ = enumerate_physical_device_groups_khr(instance,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDeviceGroups");
    return rt_;
  }

  [[nodiscard]] spk::result enumerate_physical_device_groups(
    spk::instance_ref instance,
    uint32_t * pPhysicalDeviceGroupCount,
    spk::physical_device_group_properties * pPhysicalDeviceGroupProperties
  ) const {
    const VkResult res = 
    vkEnumeratePhysicalDeviceGroups(
      (VkInstance) instance,
      (uint32_t *) pPhysicalDeviceGroupCount,
      (VkPhysicalDeviceGroupProperties *) pPhysicalDeviceGroupProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumeratePhysicalDeviceGroups");
    }
  }

  std::vector<spk::physical_device_group_properties> enumerate_physical_device_groups(
    spk::instance_ref instance
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_physical_device_groups(instance,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDeviceGroups");
    std::vector<spk::physical_device_group_properties> rt_(sz_);
    rz_ = enumerate_physical_device_groups(instance,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumeratePhysicalDeviceGroups");
    return rt_;
  }

  [[nodiscard]] spk::result get_display_mode_properties_khr(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display,
    uint32_t * pPropertyCount,
    spk::display_mode_properties_khr * pProperties
  ) const {
    const VkResult res = 
    vkGetDisplayModePropertiesKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayKHR) display,
      (uint32_t *) pPropertyCount,
      (VkDisplayModePropertiesKHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDisplayModePropertiesKHR");
    }
  }

  std::vector<spk::display_mode_properties_khr> get_display_mode_properties_khr(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_display_mode_properties_khr(physicalDevice,display,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayModePropertiesKHR");
    std::vector<spk::display_mode_properties_khr> rt_(sz_);
    rz_ = get_display_mode_properties_khr(physicalDevice,display,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayModePropertiesKHR");
    return rt_;
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  spk::bool32_t get_physical_device_win_32presentation_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex
  ) const {
    return (spk::bool32_t)(
    vkGetPhysicalDeviceWin32PresentationSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex
    ));
  }
#endif

  void  get_physical_device_surface_capabilities_2ext(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface,
    spk::surface_capabilities_2ext * pSurfaceCapabilities
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceCapabilities2EXT(
      (VkPhysicalDevice) physicalDevice,
      (VkSurfaceKHR) surface,
      (VkSurfaceCapabilities2EXT *) pSurfaceCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
    }
  }

  void  create_device(
    spk::physical_device_ref physicalDevice,
    spk::device_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::device_ref * pDevice
  ) const {
    const VkResult res = 
    vkCreateDevice(
      (VkPhysicalDevice) physicalDevice,
      (VkDeviceCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDevice *) pDevice
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      case VK_ERROR_EXTENSION_NOT_PRESENT: throw spk::error_extension_not_present();
      case VK_ERROR_FEATURE_NOT_PRESENT: throw spk::error_feature_not_present();
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDevice");
    }
  }

  void  get_physical_device_image_format_properties_2(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_image_format_info_2 const * pImageFormatInfo,
    spk::image_format_properties_2 * pImageFormatProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceImageFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceImageFormatInfo2 const *) pImageFormatInfo,
      (VkImageFormatProperties2 *) pImageFormatProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FORMAT_NOT_SUPPORTED: throw spk::error_format_not_supported();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceImageFormatProperties2");
    }
  }

  void  get_physical_device_image_format_properties_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_image_format_info_2 const * pImageFormatInfo,
    spk::image_format_properties_2 * pImageFormatProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceImageFormatProperties2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceImageFormatInfo2 const *) pImageFormatInfo,
      (VkImageFormatProperties2 *) pImageFormatProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FORMAT_NOT_SUPPORTED: throw spk::error_format_not_supported();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceImageFormatProperties2");
    }
  }

#ifdef VK_USE_PLATFORM_ANDROID_KHR
  void  create_android_surface_khr(
    spk::instance_ref instance,
    spk::android_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateAndroidSurfaceKHR(
      (VkInstance) instance,
      (VkAndroidSurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: throw spk::error_native_window_in_use_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateAndroidSurfaceKHR");
    }
  }
#endif

  void destroy_surface_khr(
    spk::instance_ref instance,
    spk::surface_khr_ref surface,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySurfaceKHR(
      (VkInstance) instance,
      (VkSurfaceKHR) surface,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  create_debug_report_callback_ext(
    spk::instance_ref instance,
    spk::debug_report_callback_create_info_ext const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::debug_report_callback_ext_ref * pCallback
  ) const {
    const VkResult res = 
    vkCreateDebugReportCallbackEXT(
      (VkInstance) instance,
      (VkDebugReportCallbackCreateInfoEXT const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDebugReportCallbackEXT *) pCallback
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDebugReportCallbackEXT");
    }
  }

  [[nodiscard]] spk::result enumerate_device_layer_properties(
    spk::physical_device_ref physicalDevice,
    uint32_t * pPropertyCount,
    spk::layer_properties * pProperties
  ) const {
    const VkResult res = 
    vkEnumerateDeviceLayerProperties(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pPropertyCount,
      (VkLayerProperties *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEnumerateDeviceLayerProperties");
    }
  }

  std::vector<spk::layer_properties> enumerate_device_layer_properties(
    spk::physical_device_ref physicalDevice
  ) const {
    uint32_t sz_;
    spk::result rz_ = enumerate_device_layer_properties(physicalDevice,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateDeviceLayerProperties");
    std::vector<spk::layer_properties> rt_(sz_);
    rz_ = enumerate_device_layer_properties(physicalDevice,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkEnumerateDeviceLayerProperties");
    return rt_;
  }

  void  get_physical_device_surface_capabilities_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface,
    spk::surface_capabilities_khr * pSurfaceCapabilities
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkSurfaceKHR) surface,
      (VkSurfaceCapabilitiesKHR *) pSurfaceCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    }
  }

  void  create_display_mode_khr(
    spk::physical_device_ref physicalDevice,
    spk::display_khr_ref display,
    spk::display_mode_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::display_mode_khr_ref * pMode
  ) const {
    const VkResult res = 
    vkCreateDisplayModeKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayKHR) display,
      (VkDisplayModeCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDisplayModeKHR *) pMode
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INITIALIZATION_FAILED: throw spk::error_initialization_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDisplayModeKHR");
    }
  }

  void  get_physical_device_surface_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex,
    spk::surface_khr_ref surface,
    spk::bool32_t * pSupported
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex,
      (VkSurfaceKHR) surface,
      (VkBool32 *) pSupported
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceSupportKHR");
    }
  }

  [[nodiscard]] spk::result get_physical_device_display_properties_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t * pPropertyCount,
    spk::display_properties_khr * pProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceDisplayPropertiesKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pPropertyCount,
      (VkDisplayPropertiesKHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    }
  }

  std::vector<spk::display_properties_khr> get_physical_device_display_properties_khr(
    spk::physical_device_ref physicalDevice
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_display_properties_khr(physicalDevice,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    std::vector<spk::display_properties_khr> rt_(sz_);
    rz_ = get_physical_device_display_properties_khr(physicalDevice,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPropertiesKHR");
    return rt_;
  }

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  spk::bool32_t get_physical_device_wayland_presentation_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex,
    wl_display * display
  ) const {
    return (spk::bool32_t)(
    vkGetPhysicalDeviceWaylandPresentationSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex,
      (wl_display *) display
    ));
  }
#endif

  [[nodiscard]] spk::result get_physical_device_display_plane_properties_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t * pPropertyCount,
    spk::display_plane_properties_khr * pProperties
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceDisplayPlanePropertiesKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t *) pPropertyCount,
      (VkDisplayPlanePropertiesKHR *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    }
  }

  std::vector<spk::display_plane_properties_khr> get_physical_device_display_plane_properties_khr(
    spk::physical_device_ref physicalDevice
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_display_plane_properties_khr(physicalDevice,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    std::vector<spk::display_plane_properties_khr> rt_(sz_);
    rz_ = get_physical_device_display_plane_properties_khr(physicalDevice,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    return rt_;
  }

  [[nodiscard]] spk::result get_physical_device_surface_present_modes_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface,
    uint32_t * pPresentModeCount,
    spk::present_mode_khr * pPresentModes
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfacePresentModesKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkSurfaceKHR) surface,
      (uint32_t *) pPresentModeCount,
      (VkPresentModeKHR *) pPresentModes
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    }
  }

  std::vector<spk::present_mode_khr> get_physical_device_surface_present_modes_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_surface_present_modes_khr(physicalDevice,surface,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    std::vector<spk::present_mode_khr> rt_(sz_);
    rz_ = get_physical_device_surface_present_modes_khr(physicalDevice,surface,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    return rt_;
  }

  [[nodiscard]] spk::result get_display_plane_supported_displays_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t planeIndex,
    uint32_t * pDisplayCount,
    spk::display_khr_ref * pDisplays
  ) const {
    const VkResult res = 
    vkGetDisplayPlaneSupportedDisplaysKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) planeIndex,
      (uint32_t *) pDisplayCount,
      (VkDisplayKHR *) pDisplays
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDisplayPlaneSupportedDisplaysKHR");
    }
  }

  std::vector<spk::display_khr_ref> get_display_plane_supported_displays_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t planeIndex
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_display_plane_supported_displays_khr(physicalDevice,planeIndex,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayPlaneSupportedDisplaysKHR");
    std::vector<spk::display_khr_ref> rt_(sz_);
    rz_ = get_display_plane_supported_displays_khr(physicalDevice,planeIndex,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetDisplayPlaneSupportedDisplaysKHR");
    return rt_;
  }

  void  create_display_plane_surface_khr(
    spk::instance_ref instance,
    spk::display_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateDisplayPlaneSurfaceKHR(
      (VkInstance) instance,
      (VkDisplaySurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDisplayPlaneSurfaceKHR");
    }
  }

#ifdef VK_USE_PLATFORM_VI_NN
  void  create_vi_surface_nn(
    spk::instance_ref instance,
    spk::vi_surface_create_info_nn const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateViSurfaceNN(
      (VkInstance) instance,
      (VkViSurfaceCreateInfoNN const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: throw spk::error_native_window_in_use_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateViSurfaceNN");
    }
  }
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
  void  create_mir_surface_khr(
    spk::instance_ref instance,
    spk::mir_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateMirSurfaceKHR(
      (VkInstance) instance,
      (VkMirSurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateMirSurfaceKHR");
    }
  }
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
  spk::bool32_t get_physical_device_mir_presentation_support_khr(
    spk::physical_device_ref physicalDevice,
    uint32_t queueFamilyIndex,
    MirConnection * connection
  ) const {
    return (spk::bool32_t)(
    vkGetPhysicalDeviceMirPresentationSupportKHR(
      (VkPhysicalDevice) physicalDevice,
      (uint32_t) queueFamilyIndex,
      (MirConnection *) connection
    ));
  }
#endif

  [[nodiscard]] spk::result get_physical_device_surface_formats_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface,
    uint32_t * pSurfaceFormatCount,
    spk::surface_format_khr * pSurfaceFormats
  ) const {
    const VkResult res = 
    vkGetPhysicalDeviceSurfaceFormatsKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkSurfaceKHR) surface,
      (uint32_t *) pSurfaceFormatCount,
      (VkSurfaceFormatKHR *) pSurfaceFormats
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    }
  }

  std::vector<spk::surface_format_khr> get_physical_device_surface_formats_khr(
    spk::physical_device_ref physicalDevice,
    spk::surface_khr_ref surface
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_physical_device_surface_formats_khr(physicalDevice,surface,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    std::vector<spk::surface_format_khr> rt_(sz_);
    rz_ = get_physical_device_surface_formats_khr(physicalDevice,surface,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    return rt_;
  }

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  void  create_wayland_surface_khr(
    spk::instance_ref instance,
    spk::wayland_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateWaylandSurfaceKHR(
      (VkInstance) instance,
      (VkWaylandSurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateWaylandSurfaceKHR");
    }
  }
#endif

  void get_physical_device_features_2khr(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_features_2 * pFeatures
  ) const {
    vkGetPhysicalDeviceFeatures2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceFeatures2 *) pFeatures
    );
  }

  void get_physical_device_features_2(
    spk::physical_device_ref physicalDevice,
    spk::physical_device_features_2 * pFeatures
  ) const {
    vkGetPhysicalDeviceFeatures2(
      (VkPhysicalDevice) physicalDevice,
      (VkPhysicalDeviceFeatures2 *) pFeatures
    );
  }

#ifdef VK_USE_PLATFORM_XLIB_KHR
  void  create_xlib_surface_khr(
    spk::instance_ref instance,
    spk::xlib_surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateXlibSurfaceKHR(
      (VkInstance) instance,
      (VkXlibSurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateXlibSurfaceKHR");
    }
  }
#endif

  void  get_display_plane_capabilities_khr(
    spk::physical_device_ref physicalDevice,
    spk::display_mode_khr_ref mode,
    uint32_t planeIndex,
    spk::display_plane_capabilities_khr * pCapabilities
  ) const {
    const VkResult res = 
    vkGetDisplayPlaneCapabilitiesKHR(
      (VkPhysicalDevice) physicalDevice,
      (VkDisplayModeKHR) mode,
      (uint32_t) planeIndex,
      (VkDisplayPlaneCapabilitiesKHR *) pCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDisplayPlaneCapabilitiesKHR");
    }
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  create_win_32surface_khr(
    spk::instance_ref instance,
    spk::win_32surface_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::surface_khr_ref * pSurface
  ) const {
    const VkResult res = 
    vkCreateWin32SurfaceKHR(
      (VkInstance) instance,
      (VkWin32SurfaceCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSurfaceKHR *) pSurface
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateWin32SurfaceKHR");
    }
  }
#endif

  // vulkan commands
  PFN_vkSubmitDebugUtilsMessageEXT vkSubmitDebugUtilsMessageEXT = nullptr;
  PFN_vkDestroyDebugUtilsMessengerEXT vkDestroyDebugUtilsMessengerEXT = nullptr;
  PFN_vkGetDisplayModeProperties2KHR vkGetDisplayModeProperties2KHR = nullptr;
  PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR vkGetPhysicalDeviceSurfaceCapabilities2KHR = nullptr;
  PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT vkGetPhysicalDeviceMultisamplePropertiesEXT = nullptr;
  PFN_vkGetPhysicalDeviceDisplayProperties2KHR vkGetPhysicalDeviceDisplayProperties2KHR = nullptr;
#ifdef VK_USE_PLATFORM_IOS_MVK
  PFN_vkCreateIOSSurfaceMVK vkCreateIOSSurfaceMVK = nullptr;
#endif
  PFN_vkGetPhysicalDeviceSurfaceFormats2KHR vkGetPhysicalDeviceSurfaceFormats2KHR = nullptr;
  PFN_vkCreateDebugUtilsMessengerEXT vkCreateDebugUtilsMessengerEXT = nullptr;
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  PFN_vkGetRandROutputDisplayEXT vkGetRandROutputDisplayEXT = nullptr;
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  PFN_vkAcquireXlibDisplayEXT vkAcquireXlibDisplayEXT = nullptr;
#endif
  PFN_vkGetPhysicalDeviceExternalFenceProperties vkGetPhysicalDeviceExternalFenceProperties = nullptr;
  PFN_vkGetPhysicalDeviceExternalSemaphoreProperties vkGetPhysicalDeviceExternalSemaphoreProperties = nullptr;
  PFN_vkGetPhysicalDeviceExternalBufferProperties vkGetPhysicalDeviceExternalBufferProperties = nullptr;
  PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 vkGetPhysicalDeviceSparseImageFormatProperties2 = nullptr;
#ifdef VK_USE_PLATFORM_MACOS_MVK
  PFN_vkCreateMacOSSurfaceMVK vkCreateMacOSSurfaceMVK = nullptr;
#endif
  PFN_vkGetPhysicalDeviceFormatProperties2 vkGetPhysicalDeviceFormatProperties2 = nullptr;
  PFN_vkGetPhysicalDeviceProperties2 vkGetPhysicalDeviceProperties2 = nullptr;
  PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = nullptr;
  PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR vkGetPhysicalDeviceDisplayPlaneProperties2KHR = nullptr;
  PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV vkGetPhysicalDeviceExternalImageFormatPropertiesNV = nullptr;
  PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT = nullptr;
  PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT = nullptr;
#ifdef VK_USE_PLATFORM_XCB_KHR
  PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR = nullptr;
#endif
  PFN_vkGetPhysicalDeviceFormatProperties vkGetPhysicalDeviceFormatProperties = nullptr;
#ifdef VK_USE_PLATFORM_XCB_KHR
  PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR = nullptr;
#endif
  PFN_vkReleaseDisplayEXT vkReleaseDisplayEXT = nullptr;
  PFN_vkGetPhysicalDeviceImageFormatProperties vkGetPhysicalDeviceImageFormatProperties = nullptr;
  PFN_vkGetPhysicalDeviceProperties vkGetPhysicalDeviceProperties = nullptr;
  PFN_vkEnumerateDeviceExtensionProperties vkEnumerateDeviceExtensionProperties = nullptr;
  PFN_vkGetPhysicalDeviceQueueFamilyProperties2 vkGetPhysicalDeviceQueueFamilyProperties2 = nullptr;
  PFN_vkGetDisplayPlaneCapabilities2KHR vkGetDisplayPlaneCapabilities2KHR = nullptr;
  PFN_vkGetPhysicalDeviceMemoryProperties2 vkGetPhysicalDeviceMemoryProperties2 = nullptr;
#ifdef VK_USE_PLATFORM_XLIB_KHR
  PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR = nullptr;
#endif
  PFN_vkEnumeratePhysicalDevices vkEnumeratePhysicalDevices = nullptr;
  PFN_vkGetInstanceProcAddr vkGetInstanceProcAddr = nullptr;
  PFN_vkGetPhysicalDeviceFeatures vkGetPhysicalDeviceFeatures = nullptr;
  PFN_vkGetPhysicalDeviceMemoryProperties vkGetPhysicalDeviceMemoryProperties = nullptr;
  PFN_vkDestroyInstance vkDestroyInstance = nullptr;
  PFN_vkGetPhysicalDeviceSparseImageFormatProperties vkGetPhysicalDeviceSparseImageFormatProperties = nullptr;
  PFN_vkGetPhysicalDevicePresentRectanglesKHR vkGetPhysicalDevicePresentRectanglesKHR = nullptr;
  PFN_vkGetPhysicalDeviceQueueFamilyProperties vkGetPhysicalDeviceQueueFamilyProperties = nullptr;
  PFN_vkEnumeratePhysicalDeviceGroups vkEnumeratePhysicalDeviceGroups = nullptr;
  PFN_vkGetDisplayModePropertiesKHR vkGetDisplayModePropertiesKHR = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR = nullptr;
#endif
  PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT vkGetPhysicalDeviceSurfaceCapabilities2EXT = nullptr;
  PFN_vkCreateDevice vkCreateDevice = nullptr;
  PFN_vkGetPhysicalDeviceImageFormatProperties2 vkGetPhysicalDeviceImageFormatProperties2 = nullptr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  PFN_vkCreateAndroidSurfaceKHR vkCreateAndroidSurfaceKHR = nullptr;
#endif
  PFN_vkDestroySurfaceKHR vkDestroySurfaceKHR = nullptr;
  PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT = nullptr;
  PFN_vkEnumerateDeviceLayerProperties vkEnumerateDeviceLayerProperties = nullptr;
  PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR vkGetPhysicalDeviceSurfaceCapabilitiesKHR = nullptr;
  PFN_vkCreateDisplayModeKHR vkCreateDisplayModeKHR = nullptr;
  PFN_vkGetPhysicalDeviceSurfaceSupportKHR vkGetPhysicalDeviceSurfaceSupportKHR = nullptr;
  PFN_vkGetPhysicalDeviceDisplayPropertiesKHR vkGetPhysicalDeviceDisplayPropertiesKHR = nullptr;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR = nullptr;
#endif
  PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR vkGetPhysicalDeviceDisplayPlanePropertiesKHR = nullptr;
  PFN_vkGetPhysicalDeviceSurfacePresentModesKHR vkGetPhysicalDeviceSurfacePresentModesKHR = nullptr;
  PFN_vkGetDisplayPlaneSupportedDisplaysKHR vkGetDisplayPlaneSupportedDisplaysKHR = nullptr;
  PFN_vkCreateDisplayPlaneSurfaceKHR vkCreateDisplayPlaneSurfaceKHR = nullptr;
#ifdef VK_USE_PLATFORM_VI_NN
  PFN_vkCreateViSurfaceNN vkCreateViSurfaceNN = nullptr;
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
  PFN_vkCreateMirSurfaceKHR vkCreateMirSurfaceKHR = nullptr;
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
  PFN_vkGetPhysicalDeviceMirPresentationSupportKHR vkGetPhysicalDeviceMirPresentationSupportKHR = nullptr;
#endif
  PFN_vkGetPhysicalDeviceSurfaceFormatsKHR vkGetPhysicalDeviceSurfaceFormatsKHR = nullptr;
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR = nullptr;
#endif
  PFN_vkGetPhysicalDeviceFeatures2 vkGetPhysicalDeviceFeatures2 = nullptr;
#ifdef VK_USE_PLATFORM_XLIB_KHR
  PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR = nullptr;
#endif
  PFN_vkGetDisplayPlaneCapabilitiesKHR vkGetDisplayPlaneCapabilitiesKHR = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR = nullptr;
#endif
};

template<class Visitor> void visit_dispatch_table(instance_dispatch_table& dispatch_table, const Visitor& V) {
  V(dispatch_table, &instance_dispatch_table::vkSubmitDebugUtilsMessageEXT, "vkSubmitDebugUtilsMessageEXT");
  V(dispatch_table, &instance_dispatch_table::vkDestroyDebugUtilsMessengerEXT, "vkDestroyDebugUtilsMessengerEXT");
  V(dispatch_table, &instance_dispatch_table::vkGetDisplayModeProperties2KHR, "vkGetDisplayModeProperties2KHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceCapabilities2KHR, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceMultisamplePropertiesEXT, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceDisplayProperties2KHR, "vkGetPhysicalDeviceDisplayProperties2KHR");
#ifdef VK_USE_PLATFORM_IOS_MVK
  V(dispatch_table, &instance_dispatch_table::vkCreateIOSSurfaceMVK, "vkCreateIOSSurfaceMVK");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceFormats2KHR, "vkGetPhysicalDeviceSurfaceFormats2KHR");
  V(dispatch_table, &instance_dispatch_table::vkCreateDebugUtilsMessengerEXT, "vkCreateDebugUtilsMessengerEXT");
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  V(dispatch_table, &instance_dispatch_table::vkGetRandROutputDisplayEXT, "vkGetRandROutputDisplayEXT");
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
  V(dispatch_table, &instance_dispatch_table::vkAcquireXlibDisplayEXT, "vkAcquireXlibDisplayEXT");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceExternalFenceProperties, "vkGetPhysicalDeviceExternalFenceProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceExternalSemaphoreProperties, "vkGetPhysicalDeviceExternalSemaphoreProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceExternalBufferProperties, "vkGetPhysicalDeviceExternalBufferProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSparseImageFormatProperties2, "vkGetPhysicalDeviceSparseImageFormatProperties2");
#ifdef VK_USE_PLATFORM_MACOS_MVK
  V(dispatch_table, &instance_dispatch_table::vkCreateMacOSSurfaceMVK, "vkCreateMacOSSurfaceMVK");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceFormatProperties2, "vkGetPhysicalDeviceFormatProperties2");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceProperties2, "vkGetPhysicalDeviceProperties2");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceDisplayPlaneProperties2KHR, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceExternalImageFormatPropertiesNV, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
  V(dispatch_table, &instance_dispatch_table::vkDebugReportMessageEXT, "vkDebugReportMessageEXT");
  V(dispatch_table, &instance_dispatch_table::vkDestroyDebugReportCallbackEXT, "vkDestroyDebugReportCallbackEXT");
#ifdef VK_USE_PLATFORM_XCB_KHR
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceXcbPresentationSupportKHR, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceFormatProperties, "vkGetPhysicalDeviceFormatProperties");
#ifdef VK_USE_PLATFORM_XCB_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateXcbSurfaceKHR, "vkCreateXcbSurfaceKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkReleaseDisplayEXT, "vkReleaseDisplayEXT");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceImageFormatProperties, "vkGetPhysicalDeviceImageFormatProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceProperties, "vkGetPhysicalDeviceProperties");
  V(dispatch_table, &instance_dispatch_table::vkEnumerateDeviceExtensionProperties, "vkEnumerateDeviceExtensionProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceQueueFamilyProperties2, "vkGetPhysicalDeviceQueueFamilyProperties2");
  V(dispatch_table, &instance_dispatch_table::vkGetDisplayPlaneCapabilities2KHR, "vkGetDisplayPlaneCapabilities2KHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceMemoryProperties2, "vkGetPhysicalDeviceMemoryProperties2");
#ifdef VK_USE_PLATFORM_XLIB_KHR
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceXlibPresentationSupportKHR, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkEnumeratePhysicalDevices, "vkEnumeratePhysicalDevices");
  V(dispatch_table, &instance_dispatch_table::vkGetInstanceProcAddr, "vkGetInstanceProcAddr");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceFeatures, "vkGetPhysicalDeviceFeatures");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceMemoryProperties, "vkGetPhysicalDeviceMemoryProperties");
  V(dispatch_table, &instance_dispatch_table::vkDestroyInstance, "vkDestroyInstance");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSparseImageFormatProperties, "vkGetPhysicalDeviceSparseImageFormatProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDevicePresentRectanglesKHR, "vkGetPhysicalDevicePresentRectanglesKHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceQueueFamilyProperties, "vkGetPhysicalDeviceQueueFamilyProperties");
  V(dispatch_table, &instance_dispatch_table::vkEnumeratePhysicalDeviceGroups, "vkEnumeratePhysicalDeviceGroups");
  V(dispatch_table, &instance_dispatch_table::vkGetDisplayModePropertiesKHR, "vkGetDisplayModePropertiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceWin32PresentationSupportKHR, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceCapabilities2EXT, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
  V(dispatch_table, &instance_dispatch_table::vkCreateDevice, "vkCreateDevice");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceImageFormatProperties2, "vkGetPhysicalDeviceImageFormatProperties2");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateAndroidSurfaceKHR, "vkCreateAndroidSurfaceKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkDestroySurfaceKHR, "vkDestroySurfaceKHR");
  V(dispatch_table, &instance_dispatch_table::vkCreateDebugReportCallbackEXT, "vkCreateDebugReportCallbackEXT");
  V(dispatch_table, &instance_dispatch_table::vkEnumerateDeviceLayerProperties, "vkEnumerateDeviceLayerProperties");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceCapabilitiesKHR, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
  V(dispatch_table, &instance_dispatch_table::vkCreateDisplayModeKHR, "vkCreateDisplayModeKHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceSupportKHR, "vkGetPhysicalDeviceSurfaceSupportKHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceDisplayPropertiesKHR, "vkGetPhysicalDeviceDisplayPropertiesKHR");
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceWaylandPresentationSupportKHR, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceDisplayPlanePropertiesKHR, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfacePresentModesKHR, "vkGetPhysicalDeviceSurfacePresentModesKHR");
  V(dispatch_table, &instance_dispatch_table::vkGetDisplayPlaneSupportedDisplaysKHR, "vkGetDisplayPlaneSupportedDisplaysKHR");
  V(dispatch_table, &instance_dispatch_table::vkCreateDisplayPlaneSurfaceKHR, "vkCreateDisplayPlaneSurfaceKHR");
#ifdef VK_USE_PLATFORM_VI_NN
  V(dispatch_table, &instance_dispatch_table::vkCreateViSurfaceNN, "vkCreateViSurfaceNN");
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateMirSurfaceKHR, "vkCreateMirSurfaceKHR");
#endif
#ifdef VK_USE_PLATFORM_MIR_KHR
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceMirPresentationSupportKHR, "vkGetPhysicalDeviceMirPresentationSupportKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceSurfaceFormatsKHR, "vkGetPhysicalDeviceSurfaceFormatsKHR");
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateWaylandSurfaceKHR, "vkCreateWaylandSurfaceKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetPhysicalDeviceFeatures2, "vkGetPhysicalDeviceFeatures2");
#ifdef VK_USE_PLATFORM_XLIB_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateXlibSurfaceKHR, "vkCreateXlibSurfaceKHR");
#endif
  V(dispatch_table, &instance_dispatch_table::vkGetDisplayPlaneCapabilitiesKHR, "vkGetDisplayPlaneCapabilitiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &instance_dispatch_table::vkCreateWin32SurfaceKHR, "vkCreateWin32SurfaceKHR");
#endif
}

struct device_dispatch_table {
  // spock commands
  void cmd_next_subpass_2khr(
    spk::command_buffer_ref commandBuffer,
    spk::subpass_begin_info_khr const * pSubpassBeginInfo,
    spk::subpass_end_info_khr const * pSubpassEndInfo
  ) const {
    vkCmdNextSubpass2KHR(
      (VkCommandBuffer) commandBuffer,
      (VkSubpassBeginInfoKHR const *) pSubpassBeginInfo,
      (VkSubpassEndInfoKHR const *) pSubpassEndInfo
    );
  }

  void  get_memory_host_pointer_properties_ext(
    spk::device_ref device,
    spk::external_memory_handle_type_flags handleType,
    void const * pHostPointer,
    spk::memory_host_pointer_properties_ext * pMemoryHostPointerProperties
  ) const {
    const VkResult res = 
    vkGetMemoryHostPointerPropertiesEXT(
      (VkDevice) device,
      (VkExternalMemoryHandleTypeFlagBits) handleType,
      (void const *) pHostPointer,
      (VkMemoryHostPointerPropertiesEXT *) pMemoryHostPointerProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryHostPointerPropertiesEXT");
    }
  }

  void cmd_draw_indirect_count_khr(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    spk::buffer_ref countBuffer,
    uint64_t countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndirectCountKHR(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (VkBuffer) countBuffer,
      (VkDeviceSize) countBufferOffset,
      (uint32_t) maxDrawCount,
      (uint32_t) stride
    );
  }

  void cmd_insert_debug_utils_label_ext(
    spk::command_buffer_ref commandBuffer,
    spk::debug_utils_label_ext const * pLabelInfo
  ) const {
    vkCmdInsertDebugUtilsLabelEXT(
      (VkCommandBuffer) commandBuffer,
      (VkDebugUtilsLabelEXT const *) pLabelInfo
    );
  }

  void cmd_end_debug_utils_label_ext(
    spk::command_buffer_ref commandBuffer
  ) const {
    vkCmdEndDebugUtilsLabelEXT(
      (VkCommandBuffer) commandBuffer
    );
  }

  void queue_end_debug_utils_label_ext(
    spk::queue_ref queue
  ) const {
    vkQueueEndDebugUtilsLabelEXT(
      (VkQueue) queue
    );
  }

  void queue_begin_debug_utils_label_ext(
    spk::queue_ref queue,
    spk::debug_utils_label_ext const * pLabelInfo
  ) const {
    vkQueueBeginDebugUtilsLabelEXT(
      (VkQueue) queue,
      (VkDebugUtilsLabelEXT const *) pLabelInfo
    );
  }

  [[nodiscard]] spk::result get_shader_info_amd(
    spk::device_ref device,
    spk::pipeline_ref pipeline,
    spk::shader_stage_flags shaderStage,
    spk::shader_info_type_amd infoType,
    size_t * pInfoSize,
    void * pInfo
  ) const {
    const VkResult res = 
    vkGetShaderInfoAMD(
      (VkDevice) device,
      (VkPipeline) pipeline,
      (VkShaderStageFlagBits) shaderStage,
      (VkShaderInfoTypeAMD) infoType,
      (size_t *) pInfoSize,
      (void *) pInfo
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_FEATURE_NOT_PRESENT: throw spk::error_feature_not_present();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetShaderInfoAMD");
    }
  }

  void  merge_validation_caches_ext(
    spk::device_ref device,
    spk::validation_cache_ext_ref dstCache,
    uint32_t srcCacheCount,
    spk::validation_cache_ext_ref const * pSrcCaches
  ) const {
    const VkResult res = 
    vkMergeValidationCachesEXT(
      (VkDevice) device,
      (VkValidationCacheEXT) dstCache,
      (uint32_t) srcCacheCount,
      (VkValidationCacheEXT const *) pSrcCaches
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkMergeValidationCachesEXT");
    }
  }

#ifdef VK_USE_PLATFORM_ANDROID_KHR
  void  get_memory_android_hardware_buffer_android(
    spk::device_ref device,
    spk::memory_get_android_hardware_buffer_info_android const * pInfo,
    AHardwareBuffer * * pBuffer
  ) const {
    const VkResult res = 
    vkGetMemoryAndroidHardwareBufferANDROID(
      (VkDevice) device,
      (VkMemoryGetAndroidHardwareBufferInfoANDROID const *) pInfo,
      (AHardwareBuffer * *) pBuffer
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryAndroidHardwareBufferANDROID");
    }
  }
#endif

  [[nodiscard]] spk::result get_validation_cache_data_ext(
    spk::device_ref device,
    spk::validation_cache_ext_ref validationCache,
    size_t * pDataSize,
    void * pData
  ) const {
    const VkResult res = 
    vkGetValidationCacheDataEXT(
      (VkDevice) device,
      (VkValidationCacheEXT) validationCache,
      (size_t *) pDataSize,
      (void *) pData
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetValidationCacheDataEXT");
    }
  }

  void get_device_queue_2(
    spk::device_ref device,
    spk::device_queue_info_2 const * pQueueInfo,
    spk::queue_ref * pQueue
  ) const {
    vkGetDeviceQueue2(
      (VkDevice) device,
      (VkDeviceQueueInfo2 const *) pQueueInfo,
      (VkQueue *) pQueue
    );
  }

  void  create_sampler_ycbcr_conversion(
    spk::device_ref device,
    spk::sampler_ycbcr_conversion_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::sampler_ycbcr_conversion_ref * pYcbcrConversion
  ) const {
    const VkResult res = 
    vkCreateSamplerYcbcrConversion(
      (VkDevice) device,
      (VkSamplerYcbcrConversionCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSamplerYcbcrConversion *) pYcbcrConversion
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSamplerYcbcrConversion");
    }
  }

  void  create_sampler_ycbcr_conversion_khr(
    spk::device_ref device,
    spk::sampler_ycbcr_conversion_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::sampler_ycbcr_conversion_ref * pYcbcrConversion
  ) const {
    const VkResult res = 
    vkCreateSamplerYcbcrConversion(
      (VkDevice) device,
      (VkSamplerYcbcrConversionCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSamplerYcbcrConversion *) pYcbcrConversion
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSamplerYcbcrConversion");
    }
  }

  void get_image_sparse_memory_requirements_2(
    spk::device_ref device,
    spk::image_sparse_memory_requirements_info_2 const * pInfo,
    uint32_t * pSparseMemoryRequirementCount,
    spk::sparse_image_memory_requirements_2 * pSparseMemoryRequirements
  ) const {
    vkGetImageSparseMemoryRequirements2(
      (VkDevice) device,
      (VkImageSparseMemoryRequirementsInfo2 const *) pInfo,
      (uint32_t *) pSparseMemoryRequirementCount,
      (VkSparseImageMemoryRequirements2 *) pSparseMemoryRequirements
    );
  }

  void get_image_sparse_memory_requirements_2khr(
    spk::device_ref device,
    spk::image_sparse_memory_requirements_info_2 const * pInfo,
    uint32_t * pSparseMemoryRequirementCount,
    spk::sparse_image_memory_requirements_2 * pSparseMemoryRequirements
  ) const {
    vkGetImageSparseMemoryRequirements2(
      (VkDevice) device,
      (VkImageSparseMemoryRequirementsInfo2 const *) pInfo,
      (uint32_t *) pSparseMemoryRequirementCount,
      (VkSparseImageMemoryRequirements2 *) pSparseMemoryRequirements
    );
  }

  void get_image_memory_requirements_2khr(
    spk::device_ref device,
    spk::image_memory_requirements_info_2 const * pInfo,
    spk::memory_requirements_2 * pMemoryRequirements
  ) const {
    vkGetImageMemoryRequirements2(
      (VkDevice) device,
      (VkImageMemoryRequirementsInfo2 const *) pInfo,
      (VkMemoryRequirements2 *) pMemoryRequirements
    );
  }

  void get_image_memory_requirements_2(
    spk::device_ref device,
    spk::image_memory_requirements_info_2 const * pInfo,
    spk::memory_requirements_2 * pMemoryRequirements
  ) const {
    vkGetImageMemoryRequirements2(
      (VkDevice) device,
      (VkImageMemoryRequirementsInfo2 const *) pInfo,
      (VkMemoryRequirements2 *) pMemoryRequirements
    );
  }

  void cmd_set_discard_rectangle_ext(
    spk::command_buffer_ref commandBuffer,
    uint32_t firstDiscardRectangle,
    uint32_t discardRectangleCount,
    spk::rect_2d const * pDiscardRectangles
  ) const {
    vkCmdSetDiscardRectangleEXT(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) firstDiscardRectangle,
      (uint32_t) discardRectangleCount,
      (VkRect2D const *) pDiscardRectangles
    );
  }

  [[nodiscard]] spk::result get_swapchain_status_khr(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain
  ) const {
    const VkResult res = 
    vkGetSwapchainStatusKHR(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_SUBOPTIMAL_KHR: return spk::result::suboptimal_khr;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetSwapchainStatusKHR");
    }
  }

  void set_hdr_metadata_ext(
    spk::device_ref device,
    uint32_t swapchainCount,
    spk::swapchain_khr_ref const * pSwapchains,
    spk::hdr_metadata_ext const * pMetadata
  ) const {
    vkSetHdrMetadataEXT(
      (VkDevice) device,
      (uint32_t) swapchainCount,
      (VkSwapchainKHR const *) pSwapchains,
      (VkHdrMetadataEXT const *) pMetadata
    );
  }

  void cmd_push_descriptor_set_with_template_khr(
    spk::command_buffer_ref commandBuffer,
    spk::descriptor_update_template_ref descriptorUpdateTemplate,
    spk::pipeline_layout_ref layout,
    uint32_t set,
    void const * pData
  ) const {
    vkCmdPushDescriptorSetWithTemplateKHR(
      (VkCommandBuffer) commandBuffer,
      (VkDescriptorUpdateTemplate) descriptorUpdateTemplate,
      (VkPipelineLayout) layout,
      (uint32_t) set,
      (void const *) pData
    );
  }

  void destroy_descriptor_update_template_khr(
    spk::device_ref device,
    spk::descriptor_update_template_ref descriptorUpdateTemplate,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDescriptorUpdateTemplate(
      (VkDevice) device,
      (VkDescriptorUpdateTemplate) descriptorUpdateTemplate,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void destroy_descriptor_update_template(
    spk::device_ref device,
    spk::descriptor_update_template_ref descriptorUpdateTemplate,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDescriptorUpdateTemplate(
      (VkDevice) device,
      (VkDescriptorUpdateTemplate) descriptorUpdateTemplate,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_dispatch_base_khr(
    spk::command_buffer_ref commandBuffer,
    uint32_t baseGroupX,
    uint32_t baseGroupY,
    uint32_t baseGroupZ,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ
  ) const {
    vkCmdDispatchBase(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) baseGroupX,
      (uint32_t) baseGroupY,
      (uint32_t) baseGroupZ,
      (uint32_t) groupCountX,
      (uint32_t) groupCountY,
      (uint32_t) groupCountZ
    );
  }

  void cmd_dispatch_base(
    spk::command_buffer_ref commandBuffer,
    uint32_t baseGroupX,
    uint32_t baseGroupY,
    uint32_t baseGroupZ,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ
  ) const {
    vkCmdDispatchBase(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) baseGroupX,
      (uint32_t) baseGroupY,
      (uint32_t) baseGroupZ,
      (uint32_t) groupCountX,
      (uint32_t) groupCountY,
      (uint32_t) groupCountZ
    );
  }

  [[nodiscard]] spk::result acquire_next_image_2khr(
    spk::device_ref device,
    spk::acquire_next_image_info_khr const * pAcquireInfo,
    uint32_t * pImageIndex
  ) const {
    const VkResult res = 
    vkAcquireNextImage2KHR(
      (VkDevice) device,
      (VkAcquireNextImageInfoKHR const *) pAcquireInfo,
      (uint32_t *) pImageIndex
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_TIMEOUT: return spk::result::timeout;
      case VK_NOT_READY: return spk::result::not_ready;
      case VK_SUBOPTIMAL_KHR: return spk::result::suboptimal_khr;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAcquireNextImage2KHR");
    }
  }

  void cmd_set_viewport_w_scaling_nv(
    spk::command_buffer_ref commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    spk::viewport_w_scaling_nv const * pViewportWScalings
  ) const {
    vkCmdSetViewportWScalingNV(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) firstViewport,
      (uint32_t) viewportCount,
      (VkViewportWScalingNV const *) pViewportWScalings
    );
  }

  void  get_device_group_surface_present_modes_khr(
    spk::device_ref device,
    spk::surface_khr_ref surface,
    spk::device_group_present_mode_flags_khr * pModes
  ) const {
    const VkResult res = 
    vkGetDeviceGroupSurfacePresentModesKHR(
      (VkDevice) device,
      (VkSurfaceKHR) surface,
      (VkDeviceGroupPresentModeFlagsKHR *) pModes
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDeviceGroupSurfacePresentModesKHR");
    }
  }

  void  get_device_group_present_capabilities_khr(
    spk::device_ref device,
    spk::device_group_present_capabilities_khr * pDeviceGroupPresentCapabilities
  ) const {
    const VkResult res = 
    vkGetDeviceGroupPresentCapabilitiesKHR(
      (VkDevice) device,
      (VkDeviceGroupPresentCapabilitiesKHR *) pDeviceGroupPresentCapabilities
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetDeviceGroupPresentCapabilitiesKHR");
    }
  }

  void cmd_set_device_mask_khr(
    spk::command_buffer_ref commandBuffer,
    uint32_t deviceMask
  ) const {
    vkCmdSetDeviceMask(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) deviceMask
    );
  }

  void cmd_set_device_mask(
    spk::command_buffer_ref commandBuffer,
    uint32_t deviceMask
  ) const {
    vkCmdSetDeviceMask(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) deviceMask
    );
  }

  void  get_swapchain_counter_ext(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    spk::surface_counter_flags_ext counter,
    uint64_t * pCounterValue
  ) const {
    const VkResult res = 
    vkGetSwapchainCounterEXT(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (VkSurfaceCounterFlagBitsEXT) counter,
      (uint64_t *) pCounterValue
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetSwapchainCounterEXT");
    }
  }

  void get_descriptor_set_layout_support_khr(
    spk::device_ref device,
    spk::descriptor_set_layout_create_info const * pCreateInfo,
    spk::descriptor_set_layout_support * pSupport
  ) const {
    vkGetDescriptorSetLayoutSupport(
      (VkDevice) device,
      (VkDescriptorSetLayoutCreateInfo const *) pCreateInfo,
      (VkDescriptorSetLayoutSupport *) pSupport
    );
  }

  void get_descriptor_set_layout_support(
    spk::device_ref device,
    spk::descriptor_set_layout_create_info const * pCreateInfo,
    spk::descriptor_set_layout_support * pSupport
  ) const {
    vkGetDescriptorSetLayoutSupport(
      (VkDevice) device,
      (VkDescriptorSetLayoutCreateInfo const *) pCreateInfo,
      (VkDescriptorSetLayoutSupport *) pSupport
    );
  }

  void  register_display_event_ext(
    spk::device_ref device,
    spk::display_khr_ref display,
    spk::display_event_info_ext const * pDisplayEventInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::fence_ref * pFence
  ) const {
    const VkResult res = 
    vkRegisterDisplayEventEXT(
      (VkDevice) device,
      (VkDisplayKHR) display,
      (VkDisplayEventInfoEXT const *) pDisplayEventInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkFence *) pFence
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkRegisterDisplayEventEXT");
    }
  }

  void  display_power_control_ext(
    spk::device_ref device,
    spk::display_khr_ref display,
    spk::display_power_info_ext const * pDisplayPowerInfo
  ) const {
    const VkResult res = 
    vkDisplayPowerControlEXT(
      (VkDevice) device,
      (VkDisplayKHR) display,
      (VkDisplayPowerInfoEXT const *) pDisplayPowerInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkDisplayPowerControlEXT");
    }
  }

  void destroy_sampler_ycbcr_conversion(
    spk::device_ref device,
    spk::sampler_ycbcr_conversion_ref ycbcrConversion,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySamplerYcbcrConversion(
      (VkDevice) device,
      (VkSamplerYcbcrConversion) ycbcrConversion,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void destroy_sampler_ycbcr_conversion_khr(
    spk::device_ref device,
    spk::sampler_ycbcr_conversion_ref ycbcrConversion,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySamplerYcbcrConversion(
      (VkDevice) device,
      (VkSamplerYcbcrConversion) ycbcrConversion,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  get_semaphore_fd_khr(
    spk::device_ref device,
    spk::semaphore_get_fd_info_khr const * pGetFdInfo,
    int * pFd
  ) const {
    const VkResult res = 
    vkGetSemaphoreFdKHR(
      (VkDevice) device,
      (VkSemaphoreGetFdInfoKHR const *) pGetFdInfo,
      (int *) pFd
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetSemaphoreFdKHR");
    }
  }

  void get_device_group_peer_memory_features(
    spk::device_ref device,
    uint32_t heapIndex,
    uint32_t localDeviceIndex,
    uint32_t remoteDeviceIndex,
    spk::peer_memory_feature_flags * pPeerMemoryFeatures
  ) const {
    vkGetDeviceGroupPeerMemoryFeatures(
      (VkDevice) device,
      (uint32_t) heapIndex,
      (uint32_t) localDeviceIndex,
      (uint32_t) remoteDeviceIndex,
      (VkPeerMemoryFeatureFlags *) pPeerMemoryFeatures
    );
  }

  void get_device_group_peer_memory_features_khr(
    spk::device_ref device,
    uint32_t heapIndex,
    uint32_t localDeviceIndex,
    uint32_t remoteDeviceIndex,
    spk::peer_memory_feature_flags * pPeerMemoryFeatures
  ) const {
    vkGetDeviceGroupPeerMemoryFeatures(
      (VkDevice) device,
      (uint32_t) heapIndex,
      (uint32_t) localDeviceIndex,
      (uint32_t) remoteDeviceIndex,
      (VkPeerMemoryFeatureFlags *) pPeerMemoryFeatures
    );
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  get_semaphore_win_32handle_khr(
    spk::device_ref device,
    spk::semaphore_get_win_32handle_info_khr const * pGetWin32HandleInfo,
    HANDLE * pHandle
  ) const {
    const VkResult res = 
    vkGetSemaphoreWin32HandleKHR(
      (VkDevice) device,
      (VkSemaphoreGetWin32HandleInfoKHR const *) pGetWin32HandleInfo,
      (HANDLE *) pHandle
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetSemaphoreWin32HandleKHR");
    }
  }
#endif

  void  get_memory_fd_properties_khr(
    spk::device_ref device,
    spk::external_memory_handle_type_flags handleType,
    int fd,
    spk::memory_fd_properties_khr * pMemoryFdProperties
  ) const {
    const VkResult res = 
    vkGetMemoryFdPropertiesKHR(
      (VkDevice) device,
      (VkExternalMemoryHandleTypeFlagBits) handleType,
      (int) fd,
      (VkMemoryFdPropertiesKHR *) pMemoryFdProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryFdPropertiesKHR");
    }
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  get_memory_win_32handle_properties_khr(
    spk::device_ref device,
    spk::external_memory_handle_type_flags handleType,
    HANDLE handle,
    spk::memory_win_32handle_properties_khr * pMemoryWin32HandleProperties
  ) const {
    const VkResult res = 
    vkGetMemoryWin32HandlePropertiesKHR(
      (VkDevice) device,
      (VkExternalMemoryHandleTypeFlagBits) handleType,
      (HANDLE) handle,
      (VkMemoryWin32HandlePropertiesKHR *) pMemoryWin32HandleProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryWin32HandlePropertiesKHR");
    }
  }
#endif

  void trim_command_pool_khr(
    spk::device_ref device,
    spk::command_pool_ref commandPool
  ) const {
    vkTrimCommandPool(
      (VkDevice) device,
      (VkCommandPool) commandPool,
      (VkCommandPoolTrimFlags) 0 /*flags*/
    );
  }

  void trim_command_pool(
    spk::device_ref device,
    spk::command_pool_ref commandPool
  ) const {
    vkTrimCommandPool(
      (VkDevice) device,
      (VkCommandPool) commandPool,
      (VkCommandPoolTrimFlags) 0 /*flags*/
    );
  }

  void cmd_begin_debug_utils_label_ext(
    spk::command_buffer_ref commandBuffer,
    spk::debug_utils_label_ext const * pLabelInfo
  ) const {
    vkCmdBeginDebugUtilsLabelEXT(
      (VkCommandBuffer) commandBuffer,
      (VkDebugUtilsLabelEXT const *) pLabelInfo
    );
  }

  void cmd_push_descriptor_set_khr(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_bind_point pipelineBindPoint,
    spk::pipeline_layout_ref layout,
    uint32_t set,
    uint32_t descriptorWriteCount,
    spk::write_descriptor_set const * pDescriptorWrites
  ) const {
    vkCmdPushDescriptorSetKHR(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineBindPoint) pipelineBindPoint,
      (VkPipelineLayout) layout,
      (uint32_t) set,
      (uint32_t) descriptorWriteCount,
      (VkWriteDescriptorSet const *) pDescriptorWrites
    );
  }

  void  unregister_objects_nvx(
    spk::device_ref device,
    spk::object_table_nvx_ref objectTable,
    uint32_t objectCount,
    spk::object_entry_type_nvx const * pObjectEntryTypes,
    uint32_t const * pObjectIndices
  ) const {
    const VkResult res = 
    vkUnregisterObjectsNVX(
      (VkDevice) device,
      (VkObjectTableNVX) objectTable,
      (uint32_t) objectCount,
      (VkObjectEntryTypeNVX const *) pObjectEntryTypes,
      (uint32_t const *) pObjectIndices
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkUnregisterObjectsNVX");
    }
  }

  void  register_objects_nvx(
    spk::device_ref device,
    spk::object_table_nvx_ref objectTable,
    uint32_t objectCount,
    spk::object_table_entry_nvx const * const * ppObjectTableEntries,
    uint32_t const * pObjectIndices
  ) const {
    const VkResult res = 
    vkRegisterObjectsNVX(
      (VkDevice) device,
      (VkObjectTableNVX) objectTable,
      (uint32_t) objectCount,
      (VkObjectTableEntryNVX const * const *) ppObjectTableEntries,
      (uint32_t const *) pObjectIndices
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkRegisterObjectsNVX");
    }
  }

  void destroy_object_table_nvx(
    spk::device_ref device,
    spk::object_table_nvx_ref objectTable,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyObjectTableNVX(
      (VkDevice) device,
      (VkObjectTableNVX) objectTable,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  create_object_table_nvx(
    spk::device_ref device,
    spk::object_table_create_info_nvx const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::object_table_nvx_ref * pObjectTable
  ) const {
    const VkResult res = 
    vkCreateObjectTableNVX(
      (VkDevice) device,
      (VkObjectTableCreateInfoNVX const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkObjectTableNVX *) pObjectTable
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateObjectTableNVX");
    }
  }

  void cmd_reserve_space_for_commands_nvx(
    spk::command_buffer_ref commandBuffer,
    spk::cmd_reserve_space_for_commands_info_nvx const * pReserveSpaceInfo
  ) const {
    vkCmdReserveSpaceForCommandsNVX(
      (VkCommandBuffer) commandBuffer,
      (VkCmdReserveSpaceForCommandsInfoNVX const *) pReserveSpaceInfo
    );
  }

  void cmd_draw_indexed_indirect_count_amd(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    spk::buffer_ref countBuffer,
    uint64_t countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndexedIndirectCountAMD(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (VkBuffer) countBuffer,
      (VkDeviceSize) countBufferOffset,
      (uint32_t) maxDrawCount,
      (uint32_t) stride
    );
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  import_semaphore_win_32handle_khr(
    spk::device_ref device,
    spk::import_semaphore_win_32handle_info_khr const * pImportSemaphoreWin32HandleInfo
  ) const {
    const VkResult res = 
    vkImportSemaphoreWin32HandleKHR(
      (VkDevice) device,
      (VkImportSemaphoreWin32HandleInfoKHR const *) pImportSemaphoreWin32HandleInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkImportSemaphoreWin32HandleKHR");
    }
  }
#endif

  void cmd_draw_indirect_count_amd(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    spk::buffer_ref countBuffer,
    uint64_t countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndirectCountAMD(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (VkBuffer) countBuffer,
      (VkDeviceSize) countBufferOffset,
      (uint32_t) maxDrawCount,
      (uint32_t) stride
    );
  }

  void queue_insert_debug_utils_label_ext(
    spk::queue_ref queue,
    spk::debug_utils_label_ext const * pLabelInfo
  ) const {
    vkQueueInsertDebugUtilsLabelEXT(
      (VkQueue) queue,
      (VkDebugUtilsLabelEXT const *) pLabelInfo
    );
  }

  void destroy_indirect_commands_layout_nvx(
    spk::device_ref device,
    spk::indirect_commands_layout_nvx_ref indirectCommandsLayout,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyIndirectCommandsLayoutNVX(
      (VkDevice) device,
      (VkIndirectCommandsLayoutNVX) indirectCommandsLayout,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_debug_marker_insert_ext(
    spk::command_buffer_ref commandBuffer,
    spk::debug_marker_marker_info_ext const * pMarkerInfo
  ) const {
    vkCmdDebugMarkerInsertEXT(
      (VkCommandBuffer) commandBuffer,
      (VkDebugMarkerMarkerInfoEXT const *) pMarkerInfo
    );
  }

  void cmd_debug_marker_end_ext(
    spk::command_buffer_ref commandBuffer
  ) const {
    vkCmdDebugMarkerEndEXT(
      (VkCommandBuffer) commandBuffer
    );
  }

  void cmd_debug_marker_begin_ext(
    spk::command_buffer_ref commandBuffer,
    spk::debug_marker_marker_info_ext const * pMarkerInfo
  ) const {
    vkCmdDebugMarkerBeginEXT(
      (VkCommandBuffer) commandBuffer,
      (VkDebugMarkerMarkerInfoEXT const *) pMarkerInfo
    );
  }

  void  debug_marker_set_object_name_ext(
    spk::device_ref device,
    spk::debug_marker_object_name_info_ext const * pNameInfo
  ) const {
    const VkResult res = 
    vkDebugMarkerSetObjectNameEXT(
      (VkDevice) device,
      (VkDebugMarkerObjectNameInfoEXT const *) pNameInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkDebugMarkerSetObjectNameEXT");
    }
  }

  void  create_descriptor_set_layout(
    spk::device_ref device,
    spk::descriptor_set_layout_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::descriptor_set_layout_ref * pSetLayout
  ) const {
    const VkResult res = 
    vkCreateDescriptorSetLayout(
      (VkDevice) device,
      (VkDescriptorSetLayoutCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDescriptorSetLayout *) pSetLayout
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDescriptorSetLayout");
    }
  }

  void  reset_command_pool(
    spk::device_ref device,
    spk::command_pool_ref commandPool,
    spk::command_pool_reset_flags flags
  ) const {
    const VkResult res = 
    vkResetCommandPool(
      (VkDevice) device,
      (VkCommandPool) commandPool,
      (VkCommandPoolResetFlags) flags
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkResetCommandPool");
    }
  }

  void  create_pipeline_layout(
    spk::device_ref device,
    spk::pipeline_layout_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::pipeline_layout_ref * pPipelineLayout
  ) const {
    const VkResult res = 
    vkCreatePipelineLayout(
      (VkDevice) device,
      (VkPipelineLayoutCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkPipelineLayout *) pPipelineLayout
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreatePipelineLayout");
    }
  }

  void destroy_descriptor_set_layout(
    spk::device_ref device,
    spk::descriptor_set_layout_ref descriptorSetLayout,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDescriptorSetLayout(
      (VkDevice) device,
      (VkDescriptorSetLayout) descriptorSetLayout,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  merge_pipeline_caches(
    spk::device_ref device,
    spk::pipeline_cache_ref dstCache,
    uint32_t srcCacheCount,
    spk::pipeline_cache_ref const * pSrcCaches
  ) const {
    const VkResult res = 
    vkMergePipelineCaches(
      (VkDevice) device,
      (VkPipelineCache) dstCache,
      (uint32_t) srcCacheCount,
      (VkPipelineCache const *) pSrcCaches
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkMergePipelineCaches");
    }
  }

  void  create_graphics_pipelines(
    spk::device_ref device,
    spk::pipeline_cache_ref pipelineCache,
    uint32_t createInfoCount,
    spk::graphics_pipeline_create_info const * pCreateInfos,
    spk::allocation_callbacks const * pAllocator,
    spk::pipeline_ref * pPipelines
  ) const {
    const VkResult res = 
    vkCreateGraphicsPipelines(
      (VkDevice) device,
      (VkPipelineCache) pipelineCache,
      (uint32_t) createInfoCount,
      (VkGraphicsPipelineCreateInfo const *) pCreateInfos,
      (VkAllocationCallbacks const *) pAllocator,
      (VkPipeline *) pPipelines
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INVALID_SHADER_NV: throw spk::error_invalid_shader_nv();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateGraphicsPipelines");
    }
  }

  [[nodiscard]] spk::result get_pipeline_cache_data(
    spk::device_ref device,
    spk::pipeline_cache_ref pipelineCache,
    size_t * pDataSize,
    void * pData
  ) const {
    const VkResult res = 
    vkGetPipelineCacheData(
      (VkDevice) device,
      (VkPipelineCache) pipelineCache,
      (size_t *) pDataSize,
      (void *) pData
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPipelineCacheData");
    }
  }

  void  device_wait_idle(
    spk::device_ref device
  ) const {
    const VkResult res = 
    vkDeviceWaitIdle(
      (VkDevice) device
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkDeviceWaitIdle");
    }
  }

  void update_descriptor_set_with_template_khr(
    spk::device_ref device,
    spk::descriptor_set_ref descriptorSet,
    spk::descriptor_update_template_ref descriptorUpdateTemplate,
    void const * pData
  ) const {
    vkUpdateDescriptorSetWithTemplate(
      (VkDevice) device,
      (VkDescriptorSet) descriptorSet,
      (VkDescriptorUpdateTemplate) descriptorUpdateTemplate,
      (void const *) pData
    );
  }

  void update_descriptor_set_with_template(
    spk::device_ref device,
    spk::descriptor_set_ref descriptorSet,
    spk::descriptor_update_template_ref descriptorUpdateTemplate,
    void const * pData
  ) const {
    vkUpdateDescriptorSetWithTemplate(
      (VkDevice) device,
      (VkDescriptorSet) descriptorSet,
      (VkDescriptorUpdateTemplate) descriptorUpdateTemplate,
      (void const *) pData
    );
  }

  void cmd_write_timestamp(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_stage_flags pipelineStage,
    spk::query_pool_ref queryPool,
    uint32_t query
  ) const {
    vkCmdWriteTimestamp(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineStageFlagBits) pipelineStage,
      (VkQueryPool) queryPool,
      (uint32_t) query
    );
  }

  void destroy_image_view(
    spk::device_ref device,
    spk::image_view_ref imageView,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyImageView(
      (VkDevice) device,
      (VkImageView) imageView,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void get_buffer_memory_requirements_2(
    spk::device_ref device,
    spk::buffer_memory_requirements_info_2 const * pInfo,
    spk::memory_requirements_2 * pMemoryRequirements
  ) const {
    vkGetBufferMemoryRequirements2(
      (VkDevice) device,
      (VkBufferMemoryRequirementsInfo2 const *) pInfo,
      (VkMemoryRequirements2 *) pMemoryRequirements
    );
  }

  void get_buffer_memory_requirements_2khr(
    spk::device_ref device,
    spk::buffer_memory_requirements_info_2 const * pInfo,
    spk::memory_requirements_2 * pMemoryRequirements
  ) const {
    vkGetBufferMemoryRequirements2(
      (VkDevice) device,
      (VkBufferMemoryRequirementsInfo2 const *) pInfo,
      (VkMemoryRequirements2 *) pMemoryRequirements
    );
  }

  void  reset_descriptor_pool(
    spk::device_ref device,
    spk::descriptor_pool_ref descriptorPool
  ) const {
    const VkResult res = 
    vkResetDescriptorPool(
      (VkDevice) device,
      (VkDescriptorPool) descriptorPool,
      (VkDescriptorPoolResetFlags) 0 /*flags*/
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkResetDescriptorPool");
    }
  }

  void unmap_memory(
    spk::device_ref device,
    spk::device_memory_ref memory
  ) const {
    vkUnmapMemory(
      (VkDevice) device,
      (VkDeviceMemory) memory
    );
  }

  void get_image_subresource_layout(
    spk::device_ref device,
    spk::image_ref image,
    spk::image_subresource const * pSubresource,
    spk::subresource_layout * pLayout
  ) const {
    vkGetImageSubresourceLayout(
      (VkDevice) device,
      (VkImage) image,
      (VkImageSubresource const *) pSubresource,
      (VkSubresourceLayout *) pLayout
    );
  }

#ifdef VK_USE_PLATFORM_ANDROID_KHR
  void  get_android_hardware_buffer_properties_android(
    spk::device_ref device,
    AHardwareBuffer const * buffer,
    spk::android_hardware_buffer_properties_android * pProperties
  ) const {
    const VkResult res = 
    vkGetAndroidHardwareBufferPropertiesANDROID(
      (VkDevice) device,
      (AHardwareBuffer const *) buffer,
      (VkAndroidHardwareBufferPropertiesANDROID *) pProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_INVALID_EXTERNAL_HANDLE_KHR: throw spk::error_invalid_external_handle_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetAndroidHardwareBufferPropertiesANDROID");
    }
  }
#endif

  void  create_pipeline_cache(
    spk::device_ref device,
    spk::pipeline_cache_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::pipeline_cache_ref * pPipelineCache
  ) const {
    const VkResult res = 
    vkCreatePipelineCache(
      (VkDevice) device,
      (VkPipelineCacheCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkPipelineCache *) pPipelineCache
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreatePipelineCache");
    }
  }

  void destroy_pipeline_layout(
    spk::device_ref device,
    spk::pipeline_layout_ref pipelineLayout,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyPipelineLayout(
      (VkDevice) device,
      (VkPipelineLayout) pipelineLayout,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void destroy_buffer(
    spk::device_ref device,
    spk::buffer_ref buffer,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyBuffer(
      (VkDevice) device,
      (VkBuffer) buffer,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_event(
    spk::command_buffer_ref commandBuffer,
    spk::event_ref event,
    spk::pipeline_stage_flags stageMask
  ) const {
    vkCmdSetEvent(
      (VkCommandBuffer) commandBuffer,
      (VkEvent) event,
      (VkPipelineStageFlags) stageMask
    );
  }

  void destroy_descriptor_pool(
    spk::device_ref device,
    spk::descriptor_pool_ref descriptorPool,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDescriptorPool(
      (VkDevice) device,
      (VkDescriptorPool) descriptorPool,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  create_sampler(
    spk::device_ref device,
    spk::sampler_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::sampler_ref * pSampler
  ) const {
    const VkResult res = 
    vkCreateSampler(
      (VkDevice) device,
      (VkSamplerCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSampler *) pSampler
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSampler");
    }
  }

  void  set_event(
    spk::device_ref device,
    spk::event_ref event
  ) const {
    const VkResult res = 
    vkSetEvent(
      (VkDevice) device,
      (VkEvent) event
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkSetEvent");
    }
  }

  void  bind_image_memory(
    spk::device_ref device,
    spk::image_ref image,
    spk::device_memory_ref memory,
    uint64_t memoryOffset
  ) const {
    const VkResult res = 
    vkBindImageMemory(
      (VkDevice) device,
      (VkImage) image,
      (VkDeviceMemory) memory,
      (VkDeviceSize) memoryOffset
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindImageMemory");
    }
  }

  void  create_query_pool(
    spk::device_ref device,
    spk::query_pool_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::query_pool_ref * pQueryPool
  ) const {
    const VkResult res = 
    vkCreateQueryPool(
      (VkDevice) device,
      (VkQueryPoolCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkQueryPool *) pQueryPool
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateQueryPool");
    }
  }

  void destroy_image(
    spk::device_ref device,
    spk::image_ref image,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyImage(
      (VkDevice) device,
      (VkImage) image,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_copy_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref srcBuffer,
    spk::buffer_ref dstBuffer,
    uint32_t regionCount,
    spk::buffer_copy const * pRegions
  ) const {
    vkCmdCopyBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) srcBuffer,
      (VkBuffer) dstBuffer,
      (uint32_t) regionCount,
      (VkBufferCopy const *) pRegions
    );
  }

  [[nodiscard]] spk::result get_query_pool_results(
    spk::device_ref device,
    spk::query_pool_ref queryPool,
    uint32_t firstQuery,
    uint32_t queryCount,
    size_t dataSize,
    void * pData,
    uint64_t stride,
    spk::query_result_flags flags
  ) const {
    const VkResult res = 
    vkGetQueryPoolResults(
      (VkDevice) device,
      (VkQueryPool) queryPool,
      (uint32_t) firstQuery,
      (uint32_t) queryCount,
      (size_t) dataSize,
      (void *) pData,
      (VkDeviceSize) stride,
      (VkQueryResultFlags) flags
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_NOT_READY: return spk::result::not_ready;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetQueryPoolResults");
    }
  }

  void  create_semaphore(
    spk::device_ref device,
    spk::semaphore_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::semaphore_ref * pSemaphore
  ) const {
    const VkResult res = 
    vkCreateSemaphore(
      (VkDevice) device,
      (VkSemaphoreCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSemaphore *) pSemaphore
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSemaphore");
    }
  }

  void destroy_pipeline(
    spk::device_ref device,
    spk::pipeline_ref pipeline,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyPipeline(
      (VkDevice) device,
      (VkPipeline) pipeline,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_blend_constants(
    spk::command_buffer_ref commandBuffer,
    std::array<float const, 4> blendConstants
  ) const {
    vkCmdSetBlendConstants(
      (VkCommandBuffer) commandBuffer,
      blendConstants.data()
    );
  }

  void  reset_fences(
    spk::device_ref device,
    uint32_t fenceCount,
    spk::fence_ref const * pFences
  ) const {
    const VkResult res = 
    vkResetFences(
      (VkDevice) device,
      (uint32_t) fenceCount,
      (VkFence const *) pFences
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkResetFences");
    }
  }

  void cmd_draw(
    spk::command_buffer_ref commandBuffer,
    uint32_t vertexCount,
    uint32_t instanceCount,
    uint32_t firstVertex,
    uint32_t firstInstance
  ) const {
    vkCmdDraw(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) vertexCount,
      (uint32_t) instanceCount,
      (uint32_t) firstVertex,
      (uint32_t) firstInstance
    );
  }

  void cmd_draw_indexed_indirect_count_khr(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    spk::buffer_ref countBuffer,
    uint64_t countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndexedIndirectCountKHR(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (VkBuffer) countBuffer,
      (VkDeviceSize) countBufferOffset,
      (uint32_t) maxDrawCount,
      (uint32_t) stride
    );
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  get_memory_win_32handle_nv(
    spk::device_ref device,
    spk::device_memory_ref memory,
    spk::external_memory_handle_type_flags_nv handleType,
    HANDLE * pHandle
  ) const {
    const VkResult res = 
    vkGetMemoryWin32HandleNV(
      (VkDevice) device,
      (VkDeviceMemory) memory,
      (VkExternalMemoryHandleTypeFlagsNV) handleType,
      (HANDLE *) pHandle
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryWin32HandleNV");
    }
  }
#endif

  void destroy_fence(
    spk::device_ref device,
    spk::fence_ref fence,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyFence(
      (VkDevice) device,
      (VkFence) fence,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_checkpoint_nv(
    spk::command_buffer_ref commandBuffer,
    void const * pCheckpointMarker
  ) const {
    vkCmdSetCheckpointNV(
      (VkCommandBuffer) commandBuffer,
      (void const *) pCheckpointMarker
    );
  }

  void  create_shader_module(
    spk::device_ref device,
    spk::shader_module_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::shader_module_ref * pShaderModule
  ) const {
    const VkResult res = 
    vkCreateShaderModule(
      (VkDevice) device,
      (VkShaderModuleCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkShaderModule *) pShaderModule
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INVALID_SHADER_NV: throw spk::error_invalid_shader_nv();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateShaderModule");
    }
  }

  void  create_buffer(
    spk::device_ref device,
    spk::buffer_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::buffer_ref * pBuffer
  ) const {
    const VkResult res = 
    vkCreateBuffer(
      (VkDevice) device,
      (VkBufferCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkBuffer *) pBuffer
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateBuffer");
    }
  }

  void  create_framebuffer(
    spk::device_ref device,
    spk::framebuffer_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::framebuffer_ref * pFramebuffer
  ) const {
    const VkResult res = 
    vkCreateFramebuffer(
      (VkDevice) device,
      (VkFramebufferCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkFramebuffer *) pFramebuffer
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateFramebuffer");
    }
  }

  void  create_fence(
    spk::device_ref device,
    spk::fence_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::fence_ref * pFence
  ) const {
    const VkResult res = 
    vkCreateFence(
      (VkDevice) device,
      (VkFenceCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkFence *) pFence
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateFence");
    }
  }

  void cmd_bind_index_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    spk::index_type indexType
  ) const {
    vkCmdBindIndexBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (VkIndexType) indexType
    );
  }

  void  allocate_memory(
    spk::device_ref device,
    spk::memory_allocate_info const * pAllocateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::device_memory_ref * pMemory
  ) const {
    const VkResult res = 
    vkAllocateMemory(
      (VkDevice) device,
      (VkMemoryAllocateInfo const *) pAllocateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDeviceMemory *) pMemory
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAllocateMemory");
    }
  }

  void cmd_draw_indexed(
    spk::command_buffer_ref commandBuffer,
    uint32_t indexCount,
    uint32_t instanceCount,
    uint32_t firstIndex,
    int32_t vertexOffset,
    uint32_t firstInstance
  ) const {
    vkCmdDrawIndexed(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) indexCount,
      (uint32_t) instanceCount,
      (uint32_t) firstIndex,
      (int32_t) vertexOffset,
      (uint32_t) firstInstance
    );
  }

  void destroy_buffer_view(
    spk::device_ref device,
    spk::buffer_view_ref bufferView,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyBufferView(
      (VkDevice) device,
      (VkBufferView) bufferView,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_dispatch(
    spk::command_buffer_ref commandBuffer,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ
  ) const {
    vkCmdDispatch(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) groupCountX,
      (uint32_t) groupCountY,
      (uint32_t) groupCountZ
    );
  }

  void  create_buffer_view(
    spk::device_ref device,
    spk::buffer_view_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::buffer_view_ref * pView
  ) const {
    const VkResult res = 
    vkCreateBufferView(
      (VkDevice) device,
      (VkBufferViewCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkBufferView *) pView
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateBufferView");
    }
  }

  void cmd_process_commands_nvx(
    spk::command_buffer_ref commandBuffer,
    spk::cmd_process_commands_info_nvx const * pProcessCommandsInfo
  ) const {
    vkCmdProcessCommandsNVX(
      (VkCommandBuffer) commandBuffer,
      (VkCmdProcessCommandsInfoNVX const *) pProcessCommandsInfo
    );
  }

  void destroy_validation_cache_ext(
    spk::device_ref device,
    spk::validation_cache_ext_ref validationCache,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyValidationCacheEXT(
      (VkDevice) device,
      (VkValidationCacheEXT) validationCache,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void destroy_pipeline_cache(
    spk::device_ref device,
    spk::pipeline_cache_ref pipelineCache,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyPipelineCache(
      (VkDevice) device,
      (VkPipelineCache) pipelineCache,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  allocate_command_buffers(
    spk::device_ref device,
    spk::command_buffer_allocate_info const * pAllocateInfo,
    spk::command_buffer_ref * pCommandBuffers
  ) const {
    const VkResult res = 
    vkAllocateCommandBuffers(
      (VkDevice) device,
      (VkCommandBufferAllocateInfo const *) pAllocateInfo,
      (VkCommandBuffer *) pCommandBuffers
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAllocateCommandBuffers");
    }
  }

  void cmd_bind_vertex_buffers(
    spk::command_buffer_ref commandBuffer,
    uint32_t firstBinding,
    uint32_t bindingCount,
    spk::buffer_ref const * pBuffers,
    uint64_t const * pOffsets
  ) const {
    vkCmdBindVertexBuffers(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) firstBinding,
      (uint32_t) bindingCount,
      (VkBuffer const *) pBuffers,
      (VkDeviceSize const *) pOffsets
    );
  }

  void  bind_buffer_memory_2(
    spk::device_ref device,
    uint32_t bindInfoCount,
    spk::bind_buffer_memory_info const * pBindInfos
  ) const {
    const VkResult res = 
    vkBindBufferMemory2(
      (VkDevice) device,
      (uint32_t) bindInfoCount,
      (VkBindBufferMemoryInfo const *) pBindInfos
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindBufferMemory2");
    }
  }

  void  bind_buffer_memory_2khr(
    spk::device_ref device,
    uint32_t bindInfoCount,
    spk::bind_buffer_memory_info const * pBindInfos
  ) const {
    const VkResult res = 
    vkBindBufferMemory2(
      (VkDevice) device,
      (uint32_t) bindInfoCount,
      (VkBindBufferMemoryInfo const *) pBindInfos
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindBufferMemory2");
    }
  }

  void  get_fence_fd_khr(
    spk::device_ref device,
    spk::fence_get_fd_info_khr const * pGetFdInfo,
    int * pFd
  ) const {
    const VkResult res = 
    vkGetFenceFdKHR(
      (VkDevice) device,
      (VkFenceGetFdInfoKHR const *) pGetFdInfo,
      (int *) pFd
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetFenceFdKHR");
    }
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  get_fence_win_32handle_khr(
    spk::device_ref device,
    spk::fence_get_win_32handle_info_khr const * pGetWin32HandleInfo,
    HANDLE * pHandle
  ) const {
    const VkResult res = 
    vkGetFenceWin32HandleKHR(
      (VkDevice) device,
      (VkFenceGetWin32HandleInfoKHR const *) pGetWin32HandleInfo,
      (HANDLE *) pHandle
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetFenceWin32HandleKHR");
    }
  }
#endif

  void  map_memory(
    spk::device_ref device,
    spk::device_memory_ref memory,
    uint64_t offset,
    uint64_t size,
    void * * ppData
  ) const {
    const VkResult res = 
    vkMapMemory(
      (VkDevice) device,
      (VkDeviceMemory) memory,
      (VkDeviceSize) offset,
      (VkDeviceSize) size,
      (VkMemoryMapFlags) 0 /*flags*/,
      (void * *) ppData
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_MEMORY_MAP_FAILED: throw spk::error_memory_map_failed();
      default: throw spk::unexpected_command_result((spk::result) res, "vkMapMemory");
    }
  }

  void get_device_queue(
    spk::device_ref device,
    uint32_t queueFamilyIndex,
    uint32_t queueIndex,
    spk::queue_ref * pQueue
  ) const {
    vkGetDeviceQueue(
      (VkDevice) device,
      (uint32_t) queueFamilyIndex,
      (uint32_t) queueIndex,
      (VkQueue *) pQueue
    );
  }

  void get_buffer_memory_requirements(
    spk::device_ref device,
    spk::buffer_ref buffer,
    spk::memory_requirements * pMemoryRequirements
  ) const {
    vkGetBufferMemoryRequirements(
      (VkDevice) device,
      (VkBuffer) buffer,
      (VkMemoryRequirements *) pMemoryRequirements
    );
  }

  void get_queue_checkpoint_data_nv(
    spk::queue_ref queue,
    uint32_t * pCheckpointDataCount,
    spk::checkpoint_data_nv * pCheckpointData
  ) const {
    vkGetQueueCheckpointDataNV(
      (VkQueue) queue,
      (uint32_t *) pCheckpointDataCount,
      (VkCheckpointDataNV *) pCheckpointData
    );
  }

  void cmd_end_render_pass(
    spk::command_buffer_ref commandBuffer
  ) const {
    vkCmdEndRenderPass(
      (VkCommandBuffer) commandBuffer
    );
  }

  PFN_vkVoidFunction get_device_proc_addr(
    spk::device_ref device,
    char const * pName
  ) const {
    return (PFN_vkVoidFunction)(
    vkGetDeviceProcAddr(
      (VkDevice) device,
      (char const *) pName
    ));
  }

  [[nodiscard]] spk::result wait_for_fences(
    spk::device_ref device,
    uint32_t fenceCount,
    spk::fence_ref const * pFences,
    spk::bool32_t waitAll,
    uint64_t timeout
  ) const {
    const VkResult res = 
    vkWaitForFences(
      (VkDevice) device,
      (uint32_t) fenceCount,
      (VkFence const *) pFences,
      (VkBool32) waitAll,
      (uint64_t) timeout
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_TIMEOUT: return spk::result::timeout;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkWaitForFences");
    }
  }

  void cmd_wait_events(
    spk::command_buffer_ref commandBuffer,
    uint32_t eventCount,
    spk::event_ref const * pEvents,
    spk::pipeline_stage_flags srcStageMask,
    spk::pipeline_stage_flags dstStageMask,
    uint32_t memoryBarrierCount,
    spk::memory_barrier const * pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    spk::buffer_memory_barrier const * pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    spk::image_memory_barrier const * pImageMemoryBarriers
  ) const {
    vkCmdWaitEvents(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) eventCount,
      (VkEvent const *) pEvents,
      (VkPipelineStageFlags) srcStageMask,
      (VkPipelineStageFlags) dstStageMask,
      (uint32_t) memoryBarrierCount,
      (VkMemoryBarrier const *) pMemoryBarriers,
      (uint32_t) bufferMemoryBarrierCount,
      (VkBufferMemoryBarrier const *) pBufferMemoryBarriers,
      (uint32_t) imageMemoryBarrierCount,
      (VkImageMemoryBarrier const *) pImageMemoryBarriers
    );
  }

  void destroy_sampler(
    spk::device_ref device,
    spk::sampler_ref sampler,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySampler(
      (VkDevice) device,
      (VkSampler) sampler,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  flush_mapped_memory_ranges(
    spk::device_ref device,
    uint32_t memoryRangeCount,
    spk::mapped_memory_range const * pMemoryRanges
  ) const {
    const VkResult res = 
    vkFlushMappedMemoryRanges(
      (VkDevice) device,
      (uint32_t) memoryRangeCount,
      (VkMappedMemoryRange const *) pMemoryRanges
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkFlushMappedMemoryRanges");
    }
  }

  void get_render_area_granularity(
    spk::device_ref device,
    spk::render_pass_ref renderPass,
    spk::extent_2d * pGranularity
  ) const {
    vkGetRenderAreaGranularity(
      (VkDevice) device,
      (VkRenderPass) renderPass,
      (VkExtent2D *) pGranularity
    );
  }

  void destroy_command_pool(
    spk::device_ref device,
    spk::command_pool_ref commandPool,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyCommandPool(
      (VkDevice) device,
      (VkCommandPool) commandPool,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_scissor(
    spk::command_buffer_ref commandBuffer,
    uint32_t firstScissor,
    uint32_t scissorCount,
    spk::rect_2d const * pScissors
  ) const {
    vkCmdSetScissor(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) firstScissor,
      (uint32_t) scissorCount,
      (VkRect2D const *) pScissors
    );
  }

  void  create_descriptor_pool(
    spk::device_ref device,
    spk::descriptor_pool_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::descriptor_pool_ref * pDescriptorPool
  ) const {
    const VkResult res = 
    vkCreateDescriptorPool(
      (VkDevice) device,
      (VkDescriptorPoolCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDescriptorPool *) pDescriptorPool
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FRAGMENTATION_EXT: throw spk::error_fragmentation_ext();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDescriptorPool");
    }
  }

  void free_memory(
    spk::device_ref device,
    spk::device_memory_ref memory,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkFreeMemory(
      (VkDevice) device,
      (VkDeviceMemory) memory,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_end_render_pass_2khr(
    spk::command_buffer_ref commandBuffer,
    spk::subpass_end_info_khr const * pSubpassEndInfo
  ) const {
    vkCmdEndRenderPass2KHR(
      (VkCommandBuffer) commandBuffer,
      (VkSubpassEndInfoKHR const *) pSubpassEndInfo
    );
  }

  void  set_debug_utils_object_tag_ext(
    spk::device_ref device,
    spk::debug_utils_object_tag_info_ext const * pTagInfo
  ) const {
    const VkResult res = 
    vkSetDebugUtilsObjectTagEXT(
      (VkDevice) device,
      (VkDebugUtilsObjectTagInfoEXT const *) pTagInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkSetDebugUtilsObjectTagEXT");
    }
  }

  void  register_device_event_ext(
    spk::device_ref device,
    spk::device_event_info_ext const * pDeviceEventInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::fence_ref * pFence
  ) const {
    const VkResult res = 
    vkRegisterDeviceEventEXT(
      (VkDevice) device,
      (VkDeviceEventInfoEXT const *) pDeviceEventInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkFence *) pFence
    );
    switch (res) {
      case VK_SUCCESS: return;
      default: throw spk::unexpected_command_result((spk::result) res, "vkRegisterDeviceEventEXT");
    }
  }

  void  create_image_view(
    spk::device_ref device,
    spk::image_view_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::image_view_ref * pView
  ) const {
    const VkResult res = 
    vkCreateImageView(
      (VkDevice) device,
      (VkImageViewCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkImageView *) pView
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateImageView");
    }
  }

  void  reset_event(
    spk::device_ref device,
    spk::event_ref event
  ) const {
    const VkResult res = 
    vkResetEvent(
      (VkDevice) device,
      (VkEvent) event
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkResetEvent");
    }
  }

  void destroy_swapchain_khr(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySwapchainKHR(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void  get_memory_fd_khr(
    spk::device_ref device,
    spk::memory_get_fd_info_khr const * pGetFdInfo,
    int * pFd
  ) const {
    const VkResult res = 
    vkGetMemoryFdKHR(
      (VkDevice) device,
      (VkMemoryGetFdInfoKHR const *) pGetFdInfo,
      (int *) pFd
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryFdKHR");
    }
  }

  void  invalidate_mapped_memory_ranges(
    spk::device_ref device,
    uint32_t memoryRangeCount,
    spk::mapped_memory_range const * pMemoryRanges
  ) const {
    const VkResult res = 
    vkInvalidateMappedMemoryRanges(
      (VkDevice) device,
      (uint32_t) memoryRangeCount,
      (VkMappedMemoryRange const *) pMemoryRanges
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkInvalidateMappedMemoryRanges");
    }
  }

  void  reset_command_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::command_buffer_reset_flags flags
  ) const {
    const VkResult res = 
    vkResetCommandBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkCommandBufferResetFlags) flags
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkResetCommandBuffer");
    }
  }

  void get_device_memory_commitment(
    spk::device_ref device,
    spk::device_memory_ref memory,
    uint64_t * pCommittedMemoryInBytes
  ) const {
    vkGetDeviceMemoryCommitment(
      (VkDevice) device,
      (VkDeviceMemory) memory,
      (VkDeviceSize *) pCommittedMemoryInBytes
    );
  }

  void  create_render_pass(
    spk::device_ref device,
    spk::render_pass_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::render_pass_ref * pRenderPass
  ) const {
    const VkResult res = 
    vkCreateRenderPass(
      (VkDevice) device,
      (VkRenderPassCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkRenderPass *) pRenderPass
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateRenderPass");
    }
  }

  void  import_fence_fd_khr(
    spk::device_ref device,
    spk::import_fence_fd_info_khr const * pImportFenceFdInfo
  ) const {
    const VkResult res = 
    vkImportFenceFdKHR(
      (VkDevice) device,
      (VkImportFenceFdInfoKHR const *) pImportFenceFdInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkImportFenceFdKHR");
    }
  }

  void  set_debug_utils_object_name_ext(
    spk::device_ref device,
    spk::debug_utils_object_name_info_ext const * pNameInfo
  ) const {
    const VkResult res = 
    vkSetDebugUtilsObjectNameEXT(
      (VkDevice) device,
      (VkDebugUtilsObjectNameInfoEXT const *) pNameInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkSetDebugUtilsObjectNameEXT");
    }
  }

  void  create_validation_cache_ext(
    spk::device_ref device,
    spk::validation_cache_create_info_ext const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::validation_cache_ext_ref * pValidationCache
  ) const {
    const VkResult res = 
    vkCreateValidationCacheEXT(
      (VkDevice) device,
      (VkValidationCacheCreateInfoEXT const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkValidationCacheEXT *) pValidationCache
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateValidationCacheEXT");
    }
  }

  [[nodiscard]] spk::result get_fence_status(
    spk::device_ref device,
    spk::fence_ref fence
  ) const {
    const VkResult res = 
    vkGetFenceStatus(
      (VkDevice) device,
      (VkFence) fence
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_NOT_READY: return spk::result::not_ready;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetFenceStatus");
    }
  }

  void get_image_memory_requirements(
    spk::device_ref device,
    spk::image_ref image,
    spk::memory_requirements * pMemoryRequirements
  ) const {
    vkGetImageMemoryRequirements(
      (VkDevice) device,
      (VkImage) image,
      (VkMemoryRequirements *) pMemoryRequirements
    );
  }

  void get_image_sparse_memory_requirements(
    spk::device_ref device,
    spk::image_ref image,
    uint32_t * pSparseMemoryRequirementCount,
    spk::sparse_image_memory_requirements * pSparseMemoryRequirements
  ) const {
    vkGetImageSparseMemoryRequirements(
      (VkDevice) device,
      (VkImage) image,
      (uint32_t *) pSparseMemoryRequirementCount,
      (VkSparseImageMemoryRequirements *) pSparseMemoryRequirements
    );
  }

  void  allocate_descriptor_sets(
    spk::device_ref device,
    spk::descriptor_set_allocate_info const * pAllocateInfo,
    spk::descriptor_set_ref * pDescriptorSets
  ) const {
    const VkResult res = 
    vkAllocateDescriptorSets(
      (VkDevice) device,
      (VkDescriptorSetAllocateInfo const *) pAllocateInfo,
      (VkDescriptorSet *) pDescriptorSets
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_FRAGMENTED_POOL: throw spk::error_fragmented_pool();
      case VK_ERROR_OUT_OF_POOL_MEMORY: throw spk::error_out_of_pool_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAllocateDescriptorSets");
    }
  }

  void cmd_update_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref dstBuffer,
    uint64_t dstOffset,
    uint64_t dataSize,
    void const * pData
  ) const {
    vkCmdUpdateBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) dstBuffer,
      (VkDeviceSize) dstOffset,
      (VkDeviceSize) dataSize,
      (void const *) pData
    );
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  get_memory_win_32handle_khr(
    spk::device_ref device,
    spk::memory_get_win_32handle_info_khr const * pGetWin32HandleInfo,
    HANDLE * pHandle
  ) const {
    const VkResult res = 
    vkGetMemoryWin32HandleKHR(
      (VkDevice) device,
      (VkMemoryGetWin32HandleInfoKHR const *) pGetWin32HandleInfo,
      (HANDLE *) pHandle
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_TOO_MANY_OBJECTS: throw spk::error_too_many_objects();
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetMemoryWin32HandleKHR");
    }
  }
#endif

  void  free_descriptor_sets(
    spk::device_ref device,
    spk::descriptor_pool_ref descriptorPool,
    uint32_t descriptorSetCount,
    spk::descriptor_set_ref const * pDescriptorSets
  ) const {
    const VkResult res = 
    vkFreeDescriptorSets(
      (VkDevice) device,
      (VkDescriptorPool) descriptorPool,
      (uint32_t) descriptorSetCount,
      (VkDescriptorSet const *) pDescriptorSets
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkFreeDescriptorSets");
    }
  }

  void cmd_draw_indexed_indirect(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    uint32_t drawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndexedIndirect(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (uint32_t) drawCount,
      (uint32_t) stride
    );
  }

  void destroy_render_pass(
    spk::device_ref device,
    spk::render_pass_ref renderPass,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyRenderPass(
      (VkDevice) device,
      (VkRenderPass) renderPass,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_write_buffer_marker_amd(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_stage_flags pipelineStage,
    spk::buffer_ref dstBuffer,
    uint64_t dstOffset,
    uint32_t marker
  ) const {
    vkCmdWriteBufferMarkerAMD(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineStageFlagBits) pipelineStage,
      (VkBuffer) dstBuffer,
      (VkDeviceSize) dstOffset,
      (uint32_t) marker
    );
  }

  void  create_command_pool(
    spk::device_ref device,
    spk::command_pool_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::command_pool_ref * pCommandPool
  ) const {
    const VkResult res = 
    vkCreateCommandPool(
      (VkDevice) device,
      (VkCommandPoolCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkCommandPool *) pCommandPool
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateCommandPool");
    }
  }

  void cmd_dispatch_indirect(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset
  ) const {
    vkCmdDispatchIndirect(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset
    );
  }

  void free_command_buffers(
    spk::device_ref device,
    spk::command_pool_ref commandPool,
    uint32_t commandBufferCount,
    spk::command_buffer_ref const * pCommandBuffers
  ) const {
    vkFreeCommandBuffers(
      (VkDevice) device,
      (VkCommandPool) commandPool,
      (uint32_t) commandBufferCount,
      (VkCommandBuffer const *) pCommandBuffers
    );
  }

  void cmd_bind_pipeline(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_bind_point pipelineBindPoint,
    spk::pipeline_ref pipeline
  ) const {
    vkCmdBindPipeline(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineBindPoint) pipelineBindPoint,
      (VkPipeline) pipeline
    );
  }

  void cmd_begin_query(
    spk::command_buffer_ref commandBuffer,
    spk::query_pool_ref queryPool,
    uint32_t query,
    spk::query_control_flags flags
  ) const {
    vkCmdBeginQuery(
      (VkCommandBuffer) commandBuffer,
      (VkQueryPool) queryPool,
      (uint32_t) query,
      (VkQueryControlFlags) flags
    );
  }

  void cmd_begin_render_pass_2khr(
    spk::command_buffer_ref commandBuffer,
    spk::render_pass_begin_info const * pRenderPassBegin,
    spk::subpass_begin_info_khr const * pSubpassBeginInfo
  ) const {
    vkCmdBeginRenderPass2KHR(
      (VkCommandBuffer) commandBuffer,
      (VkRenderPassBeginInfo const *) pRenderPassBegin,
      (VkSubpassBeginInfoKHR const *) pSubpassBeginInfo
    );
  }

  void  end_command_buffer(
    spk::command_buffer_ref commandBuffer
  ) const {
    const VkResult res = 
    vkEndCommandBuffer(
      (VkCommandBuffer) commandBuffer
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkEndCommandBuffer");
    }
  }

  void cmd_resolve_image(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref srcImage,
    spk::image_layout srcImageLayout,
    spk::image_ref dstImage,
    spk::image_layout dstImageLayout,
    uint32_t regionCount,
    spk::image_resolve const * pRegions
  ) const {
    vkCmdResolveImage(
      (VkCommandBuffer) commandBuffer,
      (VkImage) srcImage,
      (VkImageLayout) srcImageLayout,
      (VkImage) dstImage,
      (VkImageLayout) dstImageLayout,
      (uint32_t) regionCount,
      (VkImageResolve const *) pRegions
    );
  }

  void cmd_set_sample_locations_ext(
    spk::command_buffer_ref commandBuffer,
    spk::sample_locations_info_ext const * pSampleLocationsInfo
  ) const {
    vkCmdSetSampleLocationsEXT(
      (VkCommandBuffer) commandBuffer,
      (VkSampleLocationsInfoEXT const *) pSampleLocationsInfo
    );
  }

  void  queue_wait_idle(
    spk::queue_ref queue
  ) const {
    const VkResult res = 
    vkQueueWaitIdle(
      (VkQueue) queue
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkQueueWaitIdle");
    }
  }

  void cmd_set_depth_bias(
    spk::command_buffer_ref commandBuffer,
    float depthBiasConstantFactor,
    float depthBiasClamp,
    float depthBiasSlopeFactor
  ) const {
    vkCmdSetDepthBias(
      (VkCommandBuffer) commandBuffer,
      (float) depthBiasConstantFactor,
      (float) depthBiasClamp,
      (float) depthBiasSlopeFactor
    );
  }

  void cmd_set_depth_bounds(
    spk::command_buffer_ref commandBuffer,
    float minDepthBounds,
    float maxDepthBounds
  ) const {
    vkCmdSetDepthBounds(
      (VkCommandBuffer) commandBuffer,
      (float) minDepthBounds,
      (float) maxDepthBounds
    );
  }

  void cmd_set_stencil_compare_mask(
    spk::command_buffer_ref commandBuffer,
    spk::stencil_face_flags faceMask,
    uint32_t compareMask
  ) const {
    vkCmdSetStencilCompareMask(
      (VkCommandBuffer) commandBuffer,
      (VkStencilFaceFlags) faceMask,
      (uint32_t) compareMask
    );
  }

  void cmd_copy_buffer_to_image(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref srcBuffer,
    spk::image_ref dstImage,
    spk::image_layout dstImageLayout,
    uint32_t regionCount,
    spk::buffer_image_copy const * pRegions
  ) const {
    vkCmdCopyBufferToImage(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) srcBuffer,
      (VkImage) dstImage,
      (VkImageLayout) dstImageLayout,
      (uint32_t) regionCount,
      (VkBufferImageCopy const *) pRegions
    );
  }

#ifdef VK_USE_PLATFORM_WIN32_KHR
  void  import_fence_win_32handle_khr(
    spk::device_ref device,
    spk::import_fence_win_32handle_info_khr const * pImportFenceWin32HandleInfo
  ) const {
    const VkResult res = 
    vkImportFenceWin32HandleKHR(
      (VkDevice) device,
      (VkImportFenceWin32HandleInfoKHR const *) pImportFenceWin32HandleInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkImportFenceWin32HandleKHR");
    }
  }
#endif

  void cmd_set_stencil_write_mask(
    spk::command_buffer_ref commandBuffer,
    spk::stencil_face_flags faceMask,
    uint32_t writeMask
  ) const {
    vkCmdSetStencilWriteMask(
      (VkCommandBuffer) commandBuffer,
      (VkStencilFaceFlags) faceMask,
      (uint32_t) writeMask
    );
  }

  void destroy_semaphore(
    spk::device_ref device,
    spk::semaphore_ref semaphore,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroySemaphore(
      (VkDevice) device,
      (VkSemaphore) semaphore,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void destroy_device(
    spk::device_ref device,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyDevice(
      (VkDevice) device,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_stencil_reference(
    spk::command_buffer_ref commandBuffer,
    spk::stencil_face_flags faceMask,
    uint32_t reference
  ) const {
    vkCmdSetStencilReference(
      (VkCommandBuffer) commandBuffer,
      (VkStencilFaceFlags) faceMask,
      (uint32_t) reference
    );
  }

  void destroy_event(
    spk::device_ref device,
    spk::event_ref event,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyEvent(
      (VkDevice) device,
      (VkEvent) event,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_draw_indirect(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref buffer,
    uint64_t offset,
    uint32_t drawCount,
    uint32_t stride
  ) const {
    vkCmdDrawIndirect(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) buffer,
      (VkDeviceSize) offset,
      (uint32_t) drawCount,
      (uint32_t) stride
    );
  }

  void cmd_copy_image(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref srcImage,
    spk::image_layout srcImageLayout,
    spk::image_ref dstImage,
    spk::image_layout dstImageLayout,
    uint32_t regionCount,
    spk::image_copy const * pRegions
  ) const {
    vkCmdCopyImage(
      (VkCommandBuffer) commandBuffer,
      (VkImage) srcImage,
      (VkImageLayout) srcImageLayout,
      (VkImage) dstImage,
      (VkImageLayout) dstImageLayout,
      (uint32_t) regionCount,
      (VkImageCopy const *) pRegions
    );
  }

  void destroy_query_pool(
    spk::device_ref device,
    spk::query_pool_ref queryPool,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyQueryPool(
      (VkDevice) device,
      (VkQueryPool) queryPool,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_next_subpass(
    spk::command_buffer_ref commandBuffer,
    spk::subpass_contents contents
  ) const {
    vkCmdNextSubpass(
      (VkCommandBuffer) commandBuffer,
      (VkSubpassContents) contents
    );
  }

  void destroy_framebuffer(
    spk::device_ref device,
    spk::framebuffer_ref framebuffer,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyFramebuffer(
      (VkDevice) device,
      (VkFramebuffer) framebuffer,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_set_line_width(
    spk::command_buffer_ref commandBuffer,
    float lineWidth
  ) const {
    vkCmdSetLineWidth(
      (VkCommandBuffer) commandBuffer,
      (float) lineWidth
    );
  }

  void cmd_blit_image(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref srcImage,
    spk::image_layout srcImageLayout,
    spk::image_ref dstImage,
    spk::image_layout dstImageLayout,
    uint32_t regionCount,
    spk::image_blit const * pRegions,
    spk::filter filter
  ) const {
    vkCmdBlitImage(
      (VkCommandBuffer) commandBuffer,
      (VkImage) srcImage,
      (VkImageLayout) srcImageLayout,
      (VkImage) dstImage,
      (VkImageLayout) dstImageLayout,
      (uint32_t) regionCount,
      (VkImageBlit const *) pRegions,
      (VkFilter) filter
    );
  }

  void  create_compute_pipelines(
    spk::device_ref device,
    spk::pipeline_cache_ref pipelineCache,
    uint32_t createInfoCount,
    spk::compute_pipeline_create_info const * pCreateInfos,
    spk::allocation_callbacks const * pAllocator,
    spk::pipeline_ref * pPipelines
  ) const {
    const VkResult res = 
    vkCreateComputePipelines(
      (VkDevice) device,
      (VkPipelineCache) pipelineCache,
      (uint32_t) createInfoCount,
      (VkComputePipelineCreateInfo const *) pCreateInfos,
      (VkAllocationCallbacks const *) pAllocator,
      (VkPipeline *) pPipelines
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INVALID_SHADER_NV: throw spk::error_invalid_shader_nv();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateComputePipelines");
    }
  }

  void cmd_fill_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::buffer_ref dstBuffer,
    uint64_t dstOffset,
    uint64_t size,
    uint32_t data
  ) const {
    vkCmdFillBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkBuffer) dstBuffer,
      (VkDeviceSize) dstOffset,
      (VkDeviceSize) size,
      (uint32_t) data
    );
  }

  void cmd_clear_color_image(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref image,
    spk::image_layout imageLayout,
    spk::clear_color_value const * pColor,
    uint32_t rangeCount,
    spk::image_subresource_range const * pRanges
  ) const {
    vkCmdClearColorImage(
      (VkCommandBuffer) commandBuffer,
      (VkImage) image,
      (VkImageLayout) imageLayout,
      (VkClearColorValue const *) pColor,
      (uint32_t) rangeCount,
      (VkImageSubresourceRange const *) pRanges
    );
  }

  void cmd_clear_depth_stencil_image(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref image,
    spk::image_layout imageLayout,
    spk::clear_depth_stencil_value const * pDepthStencil,
    uint32_t rangeCount,
    spk::image_subresource_range const * pRanges
  ) const {
    vkCmdClearDepthStencilImage(
      (VkCommandBuffer) commandBuffer,
      (VkImage) image,
      (VkImageLayout) imageLayout,
      (VkClearDepthStencilValue const *) pDepthStencil,
      (uint32_t) rangeCount,
      (VkImageSubresourceRange const *) pRanges
    );
  }

  void  begin_command_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::command_buffer_begin_info const * pBeginInfo
  ) const {
    const VkResult res = 
    vkBeginCommandBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkCommandBufferBeginInfo const *) pBeginInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBeginCommandBuffer");
    }
  }

  void cmd_set_viewport(
    spk::command_buffer_ref commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    spk::viewport const * pViewports
  ) const {
    vkCmdSetViewport(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) firstViewport,
      (uint32_t) viewportCount,
      (VkViewport const *) pViewports
    );
  }

  void cmd_clear_attachments(
    spk::command_buffer_ref commandBuffer,
    uint32_t attachmentCount,
    spk::clear_attachment const * pAttachments,
    uint32_t rectCount,
    spk::clear_rect const * pRects
  ) const {
    vkCmdClearAttachments(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) attachmentCount,
      (VkClearAttachment const *) pAttachments,
      (uint32_t) rectCount,
      (VkClearRect const *) pRects
    );
  }

  void  create_render_pass_2khr(
    spk::device_ref device,
    spk::render_pass_create_info_2khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::render_pass_ref * pRenderPass
  ) const {
    const VkResult res = 
    vkCreateRenderPass2KHR(
      (VkDevice) device,
      (VkRenderPassCreateInfo2KHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkRenderPass *) pRenderPass
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateRenderPass2KHR");
    }
  }

  void  bind_buffer_memory(
    spk::device_ref device,
    spk::buffer_ref buffer,
    spk::device_memory_ref memory,
    uint64_t memoryOffset
  ) const {
    const VkResult res = 
    vkBindBufferMemory(
      (VkDevice) device,
      (VkBuffer) buffer,
      (VkDeviceMemory) memory,
      (VkDeviceSize) memoryOffset
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindBufferMemory");
    }
  }

  void cmd_reset_event(
    spk::command_buffer_ref commandBuffer,
    spk::event_ref event,
    spk::pipeline_stage_flags stageMask
  ) const {
    vkCmdResetEvent(
      (VkCommandBuffer) commandBuffer,
      (VkEvent) event,
      (VkPipelineStageFlags) stageMask
    );
  }

  void cmd_pipeline_barrier(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_stage_flags srcStageMask,
    spk::pipeline_stage_flags dstStageMask,
    spk::dependency_flags dependencyFlags,
    uint32_t memoryBarrierCount,
    spk::memory_barrier const * pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    spk::buffer_memory_barrier const * pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    spk::image_memory_barrier const * pImageMemoryBarriers
  ) const {
    vkCmdPipelineBarrier(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineStageFlags) srcStageMask,
      (VkPipelineStageFlags) dstStageMask,
      (VkDependencyFlags) dependencyFlags,
      (uint32_t) memoryBarrierCount,
      (VkMemoryBarrier const *) pMemoryBarriers,
      (uint32_t) bufferMemoryBarrierCount,
      (VkBufferMemoryBarrier const *) pBufferMemoryBarriers,
      (uint32_t) imageMemoryBarrierCount,
      (VkImageMemoryBarrier const *) pImageMemoryBarriers
    );
  }

  [[nodiscard]] spk::result get_past_presentation_timing_google(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    uint32_t * pPresentationTimingCount,
    spk::past_presentation_timing_google * pPresentationTimings
  ) const {
    const VkResult res = 
    vkGetPastPresentationTimingGOOGLE(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (uint32_t *) pPresentationTimingCount,
      (VkPastPresentationTimingGOOGLE *) pPresentationTimings
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetPastPresentationTimingGOOGLE");
    }
  }

  std::vector<spk::past_presentation_timing_google> get_past_presentation_timing_google(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_past_presentation_timing_google(device,swapchain,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPastPresentationTimingGOOGLE");
    std::vector<spk::past_presentation_timing_google> rt_(sz_);
    rz_ = get_past_presentation_timing_google(device,swapchain,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetPastPresentationTimingGOOGLE");
    return rt_;
  }

  void  create_event(
    spk::device_ref device,
    spk::event_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::event_ref * pEvent
  ) const {
    const VkResult res = 
    vkCreateEvent(
      (VkDevice) device,
      (VkEventCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkEvent *) pEvent
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateEvent");
    }
  }

  void cmd_end_query(
    spk::command_buffer_ref commandBuffer,
    spk::query_pool_ref queryPool,
    uint32_t query
  ) const {
    vkCmdEndQuery(
      (VkCommandBuffer) commandBuffer,
      (VkQueryPool) queryPool,
      (uint32_t) query
    );
  }

  void cmd_begin_conditional_rendering_ext(
    spk::command_buffer_ref commandBuffer,
    spk::conditional_rendering_begin_info_ext const * pConditionalRenderingBegin
  ) const {
    vkCmdBeginConditionalRenderingEXT(
      (VkCommandBuffer) commandBuffer,
      (VkConditionalRenderingBeginInfoEXT const *) pConditionalRenderingBegin
    );
  }

  void cmd_end_conditional_rendering_ext(
    spk::command_buffer_ref commandBuffer
  ) const {
    vkCmdEndConditionalRenderingEXT(
      (VkCommandBuffer) commandBuffer
    );
  }

  [[nodiscard]] spk::result queue_present_khr(
    spk::queue_ref queue,
    spk::present_info_khr const * pPresentInfo
  ) const {
    const VkResult res = 
    vkQueuePresentKHR(
      (VkQueue) queue,
      (VkPresentInfoKHR const *) pPresentInfo
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_SUBOPTIMAL_KHR: return spk::result::suboptimal_khr;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkQueuePresentKHR");
    }
  }

  void  create_descriptor_update_template_khr(
    spk::device_ref device,
    spk::descriptor_update_template_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::descriptor_update_template_ref * pDescriptorUpdateTemplate
  ) const {
    const VkResult res = 
    vkCreateDescriptorUpdateTemplate(
      (VkDevice) device,
      (VkDescriptorUpdateTemplateCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDescriptorUpdateTemplate *) pDescriptorUpdateTemplate
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDescriptorUpdateTemplate");
    }
  }

  void  create_descriptor_update_template(
    spk::device_ref device,
    spk::descriptor_update_template_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::descriptor_update_template_ref * pDescriptorUpdateTemplate
  ) const {
    const VkResult res = 
    vkCreateDescriptorUpdateTemplate(
      (VkDevice) device,
      (VkDescriptorUpdateTemplateCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkDescriptorUpdateTemplate *) pDescriptorUpdateTemplate
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateDescriptorUpdateTemplate");
    }
  }

  void  create_indirect_commands_layout_nvx(
    spk::device_ref device,
    spk::indirect_commands_layout_create_info_nvx const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::indirect_commands_layout_nvx_ref * pIndirectCommandsLayout
  ) const {
    const VkResult res = 
    vkCreateIndirectCommandsLayoutNVX(
      (VkDevice) device,
      (VkIndirectCommandsLayoutCreateInfoNVX const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkIndirectCommandsLayoutNVX *) pIndirectCommandsLayout
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateIndirectCommandsLayoutNVX");
    }
  }

  void destroy_shader_module(
    spk::device_ref device,
    spk::shader_module_ref shaderModule,
    spk::allocation_callbacks const * pAllocator
  ) const {
    vkDestroyShaderModule(
      (VkDevice) device,
      (VkShaderModule) shaderModule,
      (VkAllocationCallbacks const *) pAllocator
    );
  }

  void cmd_push_constants(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_layout_ref layout,
    spk::shader_stage_flags stageFlags,
    uint32_t offset,
    uint32_t size,
    void const * pValues
  ) const {
    vkCmdPushConstants(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineLayout) layout,
      (VkShaderStageFlags) stageFlags,
      (uint32_t) offset,
      (uint32_t) size,
      (void const *) pValues
    );
  }

  [[nodiscard]] spk::result get_event_status(
    spk::device_ref device,
    spk::event_ref event
  ) const {
    const VkResult res = 
    vkGetEventStatus(
      (VkDevice) device,
      (VkEvent) event
    );
    switch (res) {
      case VK_EVENT_SET: return spk::result::event_set;
      case VK_EVENT_RESET: return spk::result::event_reset;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetEventStatus");
    }
  }

  void cmd_begin_render_pass(
    spk::command_buffer_ref commandBuffer,
    spk::render_pass_begin_info const * pRenderPassBegin,
    spk::subpass_contents contents
  ) const {
    vkCmdBeginRenderPass(
      (VkCommandBuffer) commandBuffer,
      (VkRenderPassBeginInfo const *) pRenderPassBegin,
      (VkSubpassContents) contents
    );
  }

  void  get_refresh_cycle_duration_google(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    spk::refresh_cycle_duration_google * pDisplayTimingProperties
  ) const {
    const VkResult res = 
    vkGetRefreshCycleDurationGOOGLE(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (VkRefreshCycleDurationGOOGLE *) pDisplayTimingProperties
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetRefreshCycleDurationGOOGLE");
    }
  }

  void  queue_bind_sparse(
    spk::queue_ref queue,
    uint32_t bindInfoCount,
    spk::bind_sparse_info const * pBindInfo,
    spk::fence_ref fence
  ) const {
    const VkResult res = 
    vkQueueBindSparse(
      (VkQueue) queue,
      (uint32_t) bindInfoCount,
      (VkBindSparseInfo const *) pBindInfo,
      (VkFence) fence
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkQueueBindSparse");
    }
  }

  void cmd_execute_commands(
    spk::command_buffer_ref commandBuffer,
    uint32_t commandBufferCount,
    spk::command_buffer_ref const * pCommandBuffers
  ) const {
    vkCmdExecuteCommands(
      (VkCommandBuffer) commandBuffer,
      (uint32_t) commandBufferCount,
      (VkCommandBuffer const *) pCommandBuffers
    );
  }

  void  create_shared_swapchains_khr(
    spk::device_ref device,
    uint32_t swapchainCount,
    spk::swapchain_create_info_khr const * pCreateInfos,
    spk::allocation_callbacks const * pAllocator,
    spk::swapchain_khr_ref * pSwapchains
  ) const {
    const VkResult res = 
    vkCreateSharedSwapchainsKHR(
      (VkDevice) device,
      (uint32_t) swapchainCount,
      (VkSwapchainCreateInfoKHR const *) pCreateInfos,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSwapchainKHR *) pSwapchains
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: throw spk::error_incompatible_display_khr();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSharedSwapchainsKHR");
    }
  }

  void  import_semaphore_fd_khr(
    spk::device_ref device,
    spk::import_semaphore_fd_info_khr const * pImportSemaphoreFdInfo
  ) const {
    const VkResult res = 
    vkImportSemaphoreFdKHR(
      (VkDevice) device,
      (VkImportSemaphoreFdInfoKHR const *) pImportSemaphoreFdInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_INVALID_EXTERNAL_HANDLE: throw spk::error_invalid_external_handle();
      default: throw spk::unexpected_command_result((spk::result) res, "vkImportSemaphoreFdKHR");
    }
  }

  void cmd_bind_descriptor_sets(
    spk::command_buffer_ref commandBuffer,
    spk::pipeline_bind_point pipelineBindPoint,
    spk::pipeline_layout_ref layout,
    uint32_t firstSet,
    uint32_t descriptorSetCount,
    spk::descriptor_set_ref const * pDescriptorSets,
    uint32_t dynamicOffsetCount,
    uint32_t const * pDynamicOffsets
  ) const {
    vkCmdBindDescriptorSets(
      (VkCommandBuffer) commandBuffer,
      (VkPipelineBindPoint) pipelineBindPoint,
      (VkPipelineLayout) layout,
      (uint32_t) firstSet,
      (uint32_t) descriptorSetCount,
      (VkDescriptorSet const *) pDescriptorSets,
      (uint32_t) dynamicOffsetCount,
      (uint32_t const *) pDynamicOffsets
    );
  }

  void cmd_copy_query_pool_results(
    spk::command_buffer_ref commandBuffer,
    spk::query_pool_ref queryPool,
    uint32_t firstQuery,
    uint32_t queryCount,
    spk::buffer_ref dstBuffer,
    uint64_t dstOffset,
    uint64_t stride,
    spk::query_result_flags flags
  ) const {
    vkCmdCopyQueryPoolResults(
      (VkCommandBuffer) commandBuffer,
      (VkQueryPool) queryPool,
      (uint32_t) firstQuery,
      (uint32_t) queryCount,
      (VkBuffer) dstBuffer,
      (VkDeviceSize) dstOffset,
      (VkDeviceSize) stride,
      (VkQueryResultFlags) flags
    );
  }

  void cmd_copy_image_to_buffer(
    spk::command_buffer_ref commandBuffer,
    spk::image_ref srcImage,
    spk::image_layout srcImageLayout,
    spk::buffer_ref dstBuffer,
    uint32_t regionCount,
    spk::buffer_image_copy const * pRegions
  ) const {
    vkCmdCopyImageToBuffer(
      (VkCommandBuffer) commandBuffer,
      (VkImage) srcImage,
      (VkImageLayout) srcImageLayout,
      (VkBuffer) dstBuffer,
      (uint32_t) regionCount,
      (VkBufferImageCopy const *) pRegions
    );
  }

  void  queue_submit(
    spk::queue_ref queue,
    uint32_t submitCount,
    spk::submit_info const * pSubmits,
    spk::fence_ref fence
  ) const {
    const VkResult res = 
    vkQueueSubmit(
      (VkQueue) queue,
      (uint32_t) submitCount,
      (VkSubmitInfo const *) pSubmits,
      (VkFence) fence
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      default: throw spk::unexpected_command_result((spk::result) res, "vkQueueSubmit");
    }
  }

  void  debug_marker_set_object_tag_ext(
    spk::device_ref device,
    spk::debug_marker_object_tag_info_ext const * pTagInfo
  ) const {
    const VkResult res = 
    vkDebugMarkerSetObjectTagEXT(
      (VkDevice) device,
      (VkDebugMarkerObjectTagInfoEXT const *) pTagInfo
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkDebugMarkerSetObjectTagEXT");
    }
  }

  void update_descriptor_sets(
    spk::device_ref device,
    uint32_t descriptorWriteCount,
    spk::write_descriptor_set const * pDescriptorWrites,
    uint32_t descriptorCopyCount,
    spk::copy_descriptor_set const * pDescriptorCopies
  ) const {
    vkUpdateDescriptorSets(
      (VkDevice) device,
      (uint32_t) descriptorWriteCount,
      (VkWriteDescriptorSet const *) pDescriptorWrites,
      (uint32_t) descriptorCopyCount,
      (VkCopyDescriptorSet const *) pDescriptorCopies
    );
  }

  void  bind_image_memory_2khr(
    spk::device_ref device,
    uint32_t bindInfoCount,
    spk::bind_image_memory_info const * pBindInfos
  ) const {
    const VkResult res = 
    vkBindImageMemory2(
      (VkDevice) device,
      (uint32_t) bindInfoCount,
      (VkBindImageMemoryInfo const *) pBindInfos
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindImageMemory2");
    }
  }

  void  bind_image_memory_2(
    spk::device_ref device,
    uint32_t bindInfoCount,
    spk::bind_image_memory_info const * pBindInfos
  ) const {
    const VkResult res = 
    vkBindImageMemory2(
      (VkDevice) device,
      (uint32_t) bindInfoCount,
      (VkBindImageMemoryInfo const *) pBindInfos
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkBindImageMemory2");
    }
  }

  void  create_image(
    spk::device_ref device,
    spk::image_create_info const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::image_ref * pImage
  ) const {
    const VkResult res = 
    vkCreateImage(
      (VkDevice) device,
      (VkImageCreateInfo const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkImage *) pImage
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateImage");
    }
  }

  [[nodiscard]] spk::result get_swapchain_images_khr(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    uint32_t * pSwapchainImageCount,
    spk::image_ref * pSwapchainImages
  ) const {
    const VkResult res = 
    vkGetSwapchainImagesKHR(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (uint32_t *) pSwapchainImageCount,
      (VkImage *) pSwapchainImages
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_INCOMPLETE: return spk::result::incomplete;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      default: throw spk::unexpected_command_result((spk::result) res, "vkGetSwapchainImagesKHR");
    }
  }

  std::vector<spk::image_ref> get_swapchain_images_khr(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain
  ) const {
    uint32_t sz_;
    spk::result rz_ = get_swapchain_images_khr(device,swapchain,&sz_,nullptr);
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetSwapchainImagesKHR");
    std::vector<spk::image_ref> rt_(sz_);
    rz_ = get_swapchain_images_khr(device,swapchain,&sz_,rt_.data());
    if (rz_ != spk::result::success)
       throw spk::unexpected_command_result(rz_, "vkGetSwapchainImagesKHR");
    return rt_;
  }

  [[nodiscard]] spk::result acquire_next_image_khr(
    spk::device_ref device,
    spk::swapchain_khr_ref swapchain,
    uint64_t timeout,
    spk::semaphore_ref semaphore,
    spk::fence_ref fence,
    uint32_t * pImageIndex
  ) const {
    const VkResult res = 
    vkAcquireNextImageKHR(
      (VkDevice) device,
      (VkSwapchainKHR) swapchain,
      (uint64_t) timeout,
      (VkSemaphore) semaphore,
      (VkFence) fence,
      (uint32_t *) pImageIndex
    );
    switch (res) {
      case VK_SUCCESS: return spk::result::success;
      case VK_TIMEOUT: return spk::result::timeout;
      case VK_NOT_READY: return spk::result::not_ready;
      case VK_SUBOPTIMAL_KHR: return spk::result::suboptimal_khr;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_OUT_OF_DATE_KHR: throw spk::error_out_of_date_khr();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkAcquireNextImageKHR");
    }
  }

  void  create_swapchain_khr(
    spk::device_ref device,
    spk::swapchain_create_info_khr const * pCreateInfo,
    spk::allocation_callbacks const * pAllocator,
    spk::swapchain_khr_ref * pSwapchain
  ) const {
    const VkResult res = 
    vkCreateSwapchainKHR(
      (VkDevice) device,
      (VkSwapchainCreateInfoKHR const *) pCreateInfo,
      (VkAllocationCallbacks const *) pAllocator,
      (VkSwapchainKHR *) pSwapchain
    );
    switch (res) {
      case VK_SUCCESS: return;
      case VK_ERROR_OUT_OF_HOST_MEMORY: throw spk::error_out_of_host_memory();
      case VK_ERROR_OUT_OF_DEVICE_MEMORY: throw spk::error_out_of_device_memory();
      case VK_ERROR_DEVICE_LOST: throw spk::error_device_lost();
      case VK_ERROR_SURFACE_LOST_KHR: throw spk::error_surface_lost_khr();
      case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: throw spk::error_native_window_in_use_khr();
      default: throw spk::unexpected_command_result((spk::result) res, "vkCreateSwapchainKHR");
    }
  }

  void cmd_reset_query_pool(
    spk::command_buffer_ref commandBuffer,
    spk::query_pool_ref queryPool,
    uint32_t firstQuery,
    uint32_t queryCount
  ) const {
    vkCmdResetQueryPool(
      (VkCommandBuffer) commandBuffer,
      (VkQueryPool) queryPool,
      (uint32_t) firstQuery,
      (uint32_t) queryCount
    );
  }

  // vulkan commands
  PFN_vkCmdNextSubpass2KHR vkCmdNextSubpass2KHR = nullptr;
  PFN_vkGetMemoryHostPointerPropertiesEXT vkGetMemoryHostPointerPropertiesEXT = nullptr;
  PFN_vkCmdDrawIndirectCountKHR vkCmdDrawIndirectCountKHR = nullptr;
  PFN_vkCmdInsertDebugUtilsLabelEXT vkCmdInsertDebugUtilsLabelEXT = nullptr;
  PFN_vkCmdEndDebugUtilsLabelEXT vkCmdEndDebugUtilsLabelEXT = nullptr;
  PFN_vkQueueEndDebugUtilsLabelEXT vkQueueEndDebugUtilsLabelEXT = nullptr;
  PFN_vkQueueBeginDebugUtilsLabelEXT vkQueueBeginDebugUtilsLabelEXT = nullptr;
  PFN_vkGetShaderInfoAMD vkGetShaderInfoAMD = nullptr;
  PFN_vkMergeValidationCachesEXT vkMergeValidationCachesEXT = nullptr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  PFN_vkGetMemoryAndroidHardwareBufferANDROID vkGetMemoryAndroidHardwareBufferANDROID = nullptr;
#endif
  PFN_vkGetValidationCacheDataEXT vkGetValidationCacheDataEXT = nullptr;
  PFN_vkGetDeviceQueue2 vkGetDeviceQueue2 = nullptr;
  PFN_vkCreateSamplerYcbcrConversion vkCreateSamplerYcbcrConversion = nullptr;
  PFN_vkGetImageSparseMemoryRequirements2 vkGetImageSparseMemoryRequirements2 = nullptr;
  PFN_vkGetImageMemoryRequirements2 vkGetImageMemoryRequirements2 = nullptr;
  PFN_vkCmdSetDiscardRectangleEXT vkCmdSetDiscardRectangleEXT = nullptr;
  PFN_vkGetSwapchainStatusKHR vkGetSwapchainStatusKHR = nullptr;
  PFN_vkSetHdrMetadataEXT vkSetHdrMetadataEXT = nullptr;
  PFN_vkCmdPushDescriptorSetWithTemplateKHR vkCmdPushDescriptorSetWithTemplateKHR = nullptr;
  PFN_vkDestroyDescriptorUpdateTemplate vkDestroyDescriptorUpdateTemplate = nullptr;
  PFN_vkCmdDispatchBase vkCmdDispatchBase = nullptr;
  PFN_vkAcquireNextImage2KHR vkAcquireNextImage2KHR = nullptr;
  PFN_vkCmdSetViewportWScalingNV vkCmdSetViewportWScalingNV = nullptr;
  PFN_vkGetDeviceGroupSurfacePresentModesKHR vkGetDeviceGroupSurfacePresentModesKHR = nullptr;
  PFN_vkGetDeviceGroupPresentCapabilitiesKHR vkGetDeviceGroupPresentCapabilitiesKHR = nullptr;
  PFN_vkCmdSetDeviceMask vkCmdSetDeviceMask = nullptr;
  PFN_vkGetSwapchainCounterEXT vkGetSwapchainCounterEXT = nullptr;
  PFN_vkGetDescriptorSetLayoutSupport vkGetDescriptorSetLayoutSupport = nullptr;
  PFN_vkRegisterDisplayEventEXT vkRegisterDisplayEventEXT = nullptr;
  PFN_vkDisplayPowerControlEXT vkDisplayPowerControlEXT = nullptr;
  PFN_vkDestroySamplerYcbcrConversion vkDestroySamplerYcbcrConversion = nullptr;
  PFN_vkGetSemaphoreFdKHR vkGetSemaphoreFdKHR = nullptr;
  PFN_vkGetDeviceGroupPeerMemoryFeatures vkGetDeviceGroupPeerMemoryFeatures = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR = nullptr;
#endif
  PFN_vkGetMemoryFdPropertiesKHR vkGetMemoryFdPropertiesKHR = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetMemoryWin32HandlePropertiesKHR vkGetMemoryWin32HandlePropertiesKHR = nullptr;
#endif
  PFN_vkTrimCommandPool vkTrimCommandPool = nullptr;
  PFN_vkCmdBeginDebugUtilsLabelEXT vkCmdBeginDebugUtilsLabelEXT = nullptr;
  PFN_vkCmdPushDescriptorSetKHR vkCmdPushDescriptorSetKHR = nullptr;
  PFN_vkUnregisterObjectsNVX vkUnregisterObjectsNVX = nullptr;
  PFN_vkRegisterObjectsNVX vkRegisterObjectsNVX = nullptr;
  PFN_vkDestroyObjectTableNVX vkDestroyObjectTableNVX = nullptr;
  PFN_vkCreateObjectTableNVX vkCreateObjectTableNVX = nullptr;
  PFN_vkCmdReserveSpaceForCommandsNVX vkCmdReserveSpaceForCommandsNVX = nullptr;
  PFN_vkCmdDrawIndexedIndirectCountAMD vkCmdDrawIndexedIndirectCountAMD = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkImportSemaphoreWin32HandleKHR vkImportSemaphoreWin32HandleKHR = nullptr;
#endif
  PFN_vkCmdDrawIndirectCountAMD vkCmdDrawIndirectCountAMD = nullptr;
  PFN_vkQueueInsertDebugUtilsLabelEXT vkQueueInsertDebugUtilsLabelEXT = nullptr;
  PFN_vkDestroyIndirectCommandsLayoutNVX vkDestroyIndirectCommandsLayoutNVX = nullptr;
  PFN_vkCmdDebugMarkerInsertEXT vkCmdDebugMarkerInsertEXT = nullptr;
  PFN_vkCmdDebugMarkerEndEXT vkCmdDebugMarkerEndEXT = nullptr;
  PFN_vkCmdDebugMarkerBeginEXT vkCmdDebugMarkerBeginEXT = nullptr;
  PFN_vkDebugMarkerSetObjectNameEXT vkDebugMarkerSetObjectNameEXT = nullptr;
  PFN_vkCreateDescriptorSetLayout vkCreateDescriptorSetLayout = nullptr;
  PFN_vkResetCommandPool vkResetCommandPool = nullptr;
  PFN_vkCreatePipelineLayout vkCreatePipelineLayout = nullptr;
  PFN_vkDestroyDescriptorSetLayout vkDestroyDescriptorSetLayout = nullptr;
  PFN_vkMergePipelineCaches vkMergePipelineCaches = nullptr;
  PFN_vkCreateGraphicsPipelines vkCreateGraphicsPipelines = nullptr;
  PFN_vkGetPipelineCacheData vkGetPipelineCacheData = nullptr;
  PFN_vkDeviceWaitIdle vkDeviceWaitIdle = nullptr;
  PFN_vkUpdateDescriptorSetWithTemplate vkUpdateDescriptorSetWithTemplate = nullptr;
  PFN_vkCmdWriteTimestamp vkCmdWriteTimestamp = nullptr;
  PFN_vkDestroyImageView vkDestroyImageView = nullptr;
  PFN_vkGetBufferMemoryRequirements2 vkGetBufferMemoryRequirements2 = nullptr;
  PFN_vkResetDescriptorPool vkResetDescriptorPool = nullptr;
  PFN_vkUnmapMemory vkUnmapMemory = nullptr;
  PFN_vkGetImageSubresourceLayout vkGetImageSubresourceLayout = nullptr;
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  PFN_vkGetAndroidHardwareBufferPropertiesANDROID vkGetAndroidHardwareBufferPropertiesANDROID = nullptr;
#endif
  PFN_vkCreatePipelineCache vkCreatePipelineCache = nullptr;
  PFN_vkDestroyPipelineLayout vkDestroyPipelineLayout = nullptr;
  PFN_vkDestroyBuffer vkDestroyBuffer = nullptr;
  PFN_vkCmdSetEvent vkCmdSetEvent = nullptr;
  PFN_vkDestroyDescriptorPool vkDestroyDescriptorPool = nullptr;
  PFN_vkCreateSampler vkCreateSampler = nullptr;
  PFN_vkSetEvent vkSetEvent = nullptr;
  PFN_vkBindImageMemory vkBindImageMemory = nullptr;
  PFN_vkCreateQueryPool vkCreateQueryPool = nullptr;
  PFN_vkDestroyImage vkDestroyImage = nullptr;
  PFN_vkCmdCopyBuffer vkCmdCopyBuffer = nullptr;
  PFN_vkGetQueryPoolResults vkGetQueryPoolResults = nullptr;
  PFN_vkCreateSemaphore vkCreateSemaphore = nullptr;
  PFN_vkDestroyPipeline vkDestroyPipeline = nullptr;
  PFN_vkCmdSetBlendConstants vkCmdSetBlendConstants = nullptr;
  PFN_vkResetFences vkResetFences = nullptr;
  PFN_vkCmdDraw vkCmdDraw = nullptr;
  PFN_vkCmdDrawIndexedIndirectCountKHR vkCmdDrawIndexedIndirectCountKHR = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetMemoryWin32HandleNV vkGetMemoryWin32HandleNV = nullptr;
#endif
  PFN_vkDestroyFence vkDestroyFence = nullptr;
  PFN_vkCmdSetCheckpointNV vkCmdSetCheckpointNV = nullptr;
  PFN_vkCreateShaderModule vkCreateShaderModule = nullptr;
  PFN_vkCreateBuffer vkCreateBuffer = nullptr;
  PFN_vkCreateFramebuffer vkCreateFramebuffer = nullptr;
  PFN_vkCreateFence vkCreateFence = nullptr;
  PFN_vkCmdBindIndexBuffer vkCmdBindIndexBuffer = nullptr;
  PFN_vkAllocateMemory vkAllocateMemory = nullptr;
  PFN_vkCmdDrawIndexed vkCmdDrawIndexed = nullptr;
  PFN_vkDestroyBufferView vkDestroyBufferView = nullptr;
  PFN_vkCmdDispatch vkCmdDispatch = nullptr;
  PFN_vkCreateBufferView vkCreateBufferView = nullptr;
  PFN_vkCmdProcessCommandsNVX vkCmdProcessCommandsNVX = nullptr;
  PFN_vkDestroyValidationCacheEXT vkDestroyValidationCacheEXT = nullptr;
  PFN_vkDestroyPipelineCache vkDestroyPipelineCache = nullptr;
  PFN_vkAllocateCommandBuffers vkAllocateCommandBuffers = nullptr;
  PFN_vkCmdBindVertexBuffers vkCmdBindVertexBuffers = nullptr;
  PFN_vkBindBufferMemory2 vkBindBufferMemory2 = nullptr;
  PFN_vkGetFenceFdKHR vkGetFenceFdKHR = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetFenceWin32HandleKHR vkGetFenceWin32HandleKHR = nullptr;
#endif
  PFN_vkMapMemory vkMapMemory = nullptr;
  PFN_vkGetDeviceQueue vkGetDeviceQueue = nullptr;
  PFN_vkGetBufferMemoryRequirements vkGetBufferMemoryRequirements = nullptr;
  PFN_vkGetQueueCheckpointDataNV vkGetQueueCheckpointDataNV = nullptr;
  PFN_vkCmdEndRenderPass vkCmdEndRenderPass = nullptr;
  PFN_vkGetDeviceProcAddr vkGetDeviceProcAddr = nullptr;
  PFN_vkWaitForFences vkWaitForFences = nullptr;
  PFN_vkCmdWaitEvents vkCmdWaitEvents = nullptr;
  PFN_vkDestroySampler vkDestroySampler = nullptr;
  PFN_vkFlushMappedMemoryRanges vkFlushMappedMemoryRanges = nullptr;
  PFN_vkGetRenderAreaGranularity vkGetRenderAreaGranularity = nullptr;
  PFN_vkDestroyCommandPool vkDestroyCommandPool = nullptr;
  PFN_vkCmdSetScissor vkCmdSetScissor = nullptr;
  PFN_vkCreateDescriptorPool vkCreateDescriptorPool = nullptr;
  PFN_vkFreeMemory vkFreeMemory = nullptr;
  PFN_vkCmdEndRenderPass2KHR vkCmdEndRenderPass2KHR = nullptr;
  PFN_vkSetDebugUtilsObjectTagEXT vkSetDebugUtilsObjectTagEXT = nullptr;
  PFN_vkRegisterDeviceEventEXT vkRegisterDeviceEventEXT = nullptr;
  PFN_vkCreateImageView vkCreateImageView = nullptr;
  PFN_vkResetEvent vkResetEvent = nullptr;
  PFN_vkDestroySwapchainKHR vkDestroySwapchainKHR = nullptr;
  PFN_vkGetMemoryFdKHR vkGetMemoryFdKHR = nullptr;
  PFN_vkInvalidateMappedMemoryRanges vkInvalidateMappedMemoryRanges = nullptr;
  PFN_vkResetCommandBuffer vkResetCommandBuffer = nullptr;
  PFN_vkGetDeviceMemoryCommitment vkGetDeviceMemoryCommitment = nullptr;
  PFN_vkCreateRenderPass vkCreateRenderPass = nullptr;
  PFN_vkImportFenceFdKHR vkImportFenceFdKHR = nullptr;
  PFN_vkSetDebugUtilsObjectNameEXT vkSetDebugUtilsObjectNameEXT = nullptr;
  PFN_vkCreateValidationCacheEXT vkCreateValidationCacheEXT = nullptr;
  PFN_vkGetFenceStatus vkGetFenceStatus = nullptr;
  PFN_vkGetImageMemoryRequirements vkGetImageMemoryRequirements = nullptr;
  PFN_vkGetImageSparseMemoryRequirements vkGetImageSparseMemoryRequirements = nullptr;
  PFN_vkAllocateDescriptorSets vkAllocateDescriptorSets = nullptr;
  PFN_vkCmdUpdateBuffer vkCmdUpdateBuffer = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR = nullptr;
#endif
  PFN_vkFreeDescriptorSets vkFreeDescriptorSets = nullptr;
  PFN_vkCmdDrawIndexedIndirect vkCmdDrawIndexedIndirect = nullptr;
  PFN_vkDestroyRenderPass vkDestroyRenderPass = nullptr;
  PFN_vkCmdWriteBufferMarkerAMD vkCmdWriteBufferMarkerAMD = nullptr;
  PFN_vkCreateCommandPool vkCreateCommandPool = nullptr;
  PFN_vkCmdDispatchIndirect vkCmdDispatchIndirect = nullptr;
  PFN_vkFreeCommandBuffers vkFreeCommandBuffers = nullptr;
  PFN_vkCmdBindPipeline vkCmdBindPipeline = nullptr;
  PFN_vkCmdBeginQuery vkCmdBeginQuery = nullptr;
  PFN_vkCmdBeginRenderPass2KHR vkCmdBeginRenderPass2KHR = nullptr;
  PFN_vkEndCommandBuffer vkEndCommandBuffer = nullptr;
  PFN_vkCmdResolveImage vkCmdResolveImage = nullptr;
  PFN_vkCmdSetSampleLocationsEXT vkCmdSetSampleLocationsEXT = nullptr;
  PFN_vkQueueWaitIdle vkQueueWaitIdle = nullptr;
  PFN_vkCmdSetDepthBias vkCmdSetDepthBias = nullptr;
  PFN_vkCmdSetDepthBounds vkCmdSetDepthBounds = nullptr;
  PFN_vkCmdSetStencilCompareMask vkCmdSetStencilCompareMask = nullptr;
  PFN_vkCmdCopyBufferToImage vkCmdCopyBufferToImage = nullptr;
#ifdef VK_USE_PLATFORM_WIN32_KHR
  PFN_vkImportFenceWin32HandleKHR vkImportFenceWin32HandleKHR = nullptr;
#endif
  PFN_vkCmdSetStencilWriteMask vkCmdSetStencilWriteMask = nullptr;
  PFN_vkDestroySemaphore vkDestroySemaphore = nullptr;
  PFN_vkDestroyDevice vkDestroyDevice = nullptr;
  PFN_vkCmdSetStencilReference vkCmdSetStencilReference = nullptr;
  PFN_vkDestroyEvent vkDestroyEvent = nullptr;
  PFN_vkCmdDrawIndirect vkCmdDrawIndirect = nullptr;
  PFN_vkCmdCopyImage vkCmdCopyImage = nullptr;
  PFN_vkDestroyQueryPool vkDestroyQueryPool = nullptr;
  PFN_vkCmdNextSubpass vkCmdNextSubpass = nullptr;
  PFN_vkDestroyFramebuffer vkDestroyFramebuffer = nullptr;
  PFN_vkCmdSetLineWidth vkCmdSetLineWidth = nullptr;
  PFN_vkCmdBlitImage vkCmdBlitImage = nullptr;
  PFN_vkCreateComputePipelines vkCreateComputePipelines = nullptr;
  PFN_vkCmdFillBuffer vkCmdFillBuffer = nullptr;
  PFN_vkCmdClearColorImage vkCmdClearColorImage = nullptr;
  PFN_vkCmdClearDepthStencilImage vkCmdClearDepthStencilImage = nullptr;
  PFN_vkBeginCommandBuffer vkBeginCommandBuffer = nullptr;
  PFN_vkCmdSetViewport vkCmdSetViewport = nullptr;
  PFN_vkCmdClearAttachments vkCmdClearAttachments = nullptr;
  PFN_vkCreateRenderPass2KHR vkCreateRenderPass2KHR = nullptr;
  PFN_vkBindBufferMemory vkBindBufferMemory = nullptr;
  PFN_vkCmdResetEvent vkCmdResetEvent = nullptr;
  PFN_vkCmdPipelineBarrier vkCmdPipelineBarrier = nullptr;
  PFN_vkGetPastPresentationTimingGOOGLE vkGetPastPresentationTimingGOOGLE = nullptr;
  PFN_vkCreateEvent vkCreateEvent = nullptr;
  PFN_vkCmdEndQuery vkCmdEndQuery = nullptr;
  PFN_vkCmdBeginConditionalRenderingEXT vkCmdBeginConditionalRenderingEXT = nullptr;
  PFN_vkCmdEndConditionalRenderingEXT vkCmdEndConditionalRenderingEXT = nullptr;
  PFN_vkQueuePresentKHR vkQueuePresentKHR = nullptr;
  PFN_vkCreateDescriptorUpdateTemplate vkCreateDescriptorUpdateTemplate = nullptr;
  PFN_vkCreateIndirectCommandsLayoutNVX vkCreateIndirectCommandsLayoutNVX = nullptr;
  PFN_vkDestroyShaderModule vkDestroyShaderModule = nullptr;
  PFN_vkCmdPushConstants vkCmdPushConstants = nullptr;
  PFN_vkGetEventStatus vkGetEventStatus = nullptr;
  PFN_vkCmdBeginRenderPass vkCmdBeginRenderPass = nullptr;
  PFN_vkGetRefreshCycleDurationGOOGLE vkGetRefreshCycleDurationGOOGLE = nullptr;
  PFN_vkQueueBindSparse vkQueueBindSparse = nullptr;
  PFN_vkCmdExecuteCommands vkCmdExecuteCommands = nullptr;
  PFN_vkCreateSharedSwapchainsKHR vkCreateSharedSwapchainsKHR = nullptr;
  PFN_vkImportSemaphoreFdKHR vkImportSemaphoreFdKHR = nullptr;
  PFN_vkCmdBindDescriptorSets vkCmdBindDescriptorSets = nullptr;
  PFN_vkCmdCopyQueryPoolResults vkCmdCopyQueryPoolResults = nullptr;
  PFN_vkCmdCopyImageToBuffer vkCmdCopyImageToBuffer = nullptr;
  PFN_vkQueueSubmit vkQueueSubmit = nullptr;
  PFN_vkDebugMarkerSetObjectTagEXT vkDebugMarkerSetObjectTagEXT = nullptr;
  PFN_vkUpdateDescriptorSets vkUpdateDescriptorSets = nullptr;
  PFN_vkBindImageMemory2 vkBindImageMemory2 = nullptr;
  PFN_vkCreateImage vkCreateImage = nullptr;
  PFN_vkGetSwapchainImagesKHR vkGetSwapchainImagesKHR = nullptr;
  PFN_vkAcquireNextImageKHR vkAcquireNextImageKHR = nullptr;
  PFN_vkCreateSwapchainKHR vkCreateSwapchainKHR = nullptr;
  PFN_vkCmdResetQueryPool vkCmdResetQueryPool = nullptr;
};

template<class Visitor> void visit_dispatch_table(device_dispatch_table& dispatch_table, const Visitor& V) {
  V(dispatch_table, &device_dispatch_table::vkCmdNextSubpass2KHR, "vkCmdNextSubpass2KHR");
  V(dispatch_table, &device_dispatch_table::vkGetMemoryHostPointerPropertiesEXT, "vkGetMemoryHostPointerPropertiesEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndirectCountKHR, "vkCmdDrawIndirectCountKHR");
  V(dispatch_table, &device_dispatch_table::vkCmdInsertDebugUtilsLabelEXT, "vkCmdInsertDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdEndDebugUtilsLabelEXT, "vkCmdEndDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkQueueEndDebugUtilsLabelEXT, "vkQueueEndDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkQueueBeginDebugUtilsLabelEXT, "vkQueueBeginDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkGetShaderInfoAMD, "vkGetShaderInfoAMD");
  V(dispatch_table, &device_dispatch_table::vkMergeValidationCachesEXT, "vkMergeValidationCachesEXT");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  V(dispatch_table, &device_dispatch_table::vkGetMemoryAndroidHardwareBufferANDROID, "vkGetMemoryAndroidHardwareBufferANDROID");
#endif
  V(dispatch_table, &device_dispatch_table::vkGetValidationCacheDataEXT, "vkGetValidationCacheDataEXT");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceQueue2, "vkGetDeviceQueue2");
  V(dispatch_table, &device_dispatch_table::vkCreateSamplerYcbcrConversion, "vkCreateSamplerYcbcrConversion");
  V(dispatch_table, &device_dispatch_table::vkGetImageSparseMemoryRequirements2, "vkGetImageSparseMemoryRequirements2");
  V(dispatch_table, &device_dispatch_table::vkGetImageMemoryRequirements2, "vkGetImageMemoryRequirements2");
  V(dispatch_table, &device_dispatch_table::vkCmdSetDiscardRectangleEXT, "vkCmdSetDiscardRectangleEXT");
  V(dispatch_table, &device_dispatch_table::vkGetSwapchainStatusKHR, "vkGetSwapchainStatusKHR");
  V(dispatch_table, &device_dispatch_table::vkSetHdrMetadataEXT, "vkSetHdrMetadataEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdPushDescriptorSetWithTemplateKHR, "vkCmdPushDescriptorSetWithTemplateKHR");
  V(dispatch_table, &device_dispatch_table::vkDestroyDescriptorUpdateTemplate, "vkDestroyDescriptorUpdateTemplate");
  V(dispatch_table, &device_dispatch_table::vkCmdDispatchBase, "vkCmdDispatchBase");
  V(dispatch_table, &device_dispatch_table::vkAcquireNextImage2KHR, "vkAcquireNextImage2KHR");
  V(dispatch_table, &device_dispatch_table::vkCmdSetViewportWScalingNV, "vkCmdSetViewportWScalingNV");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceGroupSurfacePresentModesKHR, "vkGetDeviceGroupSurfacePresentModesKHR");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceGroupPresentCapabilitiesKHR, "vkGetDeviceGroupPresentCapabilitiesKHR");
  V(dispatch_table, &device_dispatch_table::vkCmdSetDeviceMask, "vkCmdSetDeviceMask");
  V(dispatch_table, &device_dispatch_table::vkGetSwapchainCounterEXT, "vkGetSwapchainCounterEXT");
  V(dispatch_table, &device_dispatch_table::vkGetDescriptorSetLayoutSupport, "vkGetDescriptorSetLayoutSupport");
  V(dispatch_table, &device_dispatch_table::vkRegisterDisplayEventEXT, "vkRegisterDisplayEventEXT");
  V(dispatch_table, &device_dispatch_table::vkDisplayPowerControlEXT, "vkDisplayPowerControlEXT");
  V(dispatch_table, &device_dispatch_table::vkDestroySamplerYcbcrConversion, "vkDestroySamplerYcbcrConversion");
  V(dispatch_table, &device_dispatch_table::vkGetSemaphoreFdKHR, "vkGetSemaphoreFdKHR");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceGroupPeerMemoryFeatures, "vkGetDeviceGroupPeerMemoryFeatures");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkGetSemaphoreWin32HandleKHR, "vkGetSemaphoreWin32HandleKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkGetMemoryFdPropertiesKHR, "vkGetMemoryFdPropertiesKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkGetMemoryWin32HandlePropertiesKHR, "vkGetMemoryWin32HandlePropertiesKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkTrimCommandPool, "vkTrimCommandPool");
  V(dispatch_table, &device_dispatch_table::vkCmdBeginDebugUtilsLabelEXT, "vkCmdBeginDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdPushDescriptorSetKHR, "vkCmdPushDescriptorSetKHR");
  V(dispatch_table, &device_dispatch_table::vkUnregisterObjectsNVX, "vkUnregisterObjectsNVX");
  V(dispatch_table, &device_dispatch_table::vkRegisterObjectsNVX, "vkRegisterObjectsNVX");
  V(dispatch_table, &device_dispatch_table::vkDestroyObjectTableNVX, "vkDestroyObjectTableNVX");
  V(dispatch_table, &device_dispatch_table::vkCreateObjectTableNVX, "vkCreateObjectTableNVX");
  V(dispatch_table, &device_dispatch_table::vkCmdReserveSpaceForCommandsNVX, "vkCmdReserveSpaceForCommandsNVX");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndexedIndirectCountAMD, "vkCmdDrawIndexedIndirectCountAMD");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkImportSemaphoreWin32HandleKHR, "vkImportSemaphoreWin32HandleKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndirectCountAMD, "vkCmdDrawIndirectCountAMD");
  V(dispatch_table, &device_dispatch_table::vkQueueInsertDebugUtilsLabelEXT, "vkQueueInsertDebugUtilsLabelEXT");
  V(dispatch_table, &device_dispatch_table::vkDestroyIndirectCommandsLayoutNVX, "vkDestroyIndirectCommandsLayoutNVX");
  V(dispatch_table, &device_dispatch_table::vkCmdDebugMarkerInsertEXT, "vkCmdDebugMarkerInsertEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdDebugMarkerEndEXT, "vkCmdDebugMarkerEndEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdDebugMarkerBeginEXT, "vkCmdDebugMarkerBeginEXT");
  V(dispatch_table, &device_dispatch_table::vkDebugMarkerSetObjectNameEXT, "vkDebugMarkerSetObjectNameEXT");
  V(dispatch_table, &device_dispatch_table::vkCreateDescriptorSetLayout, "vkCreateDescriptorSetLayout");
  V(dispatch_table, &device_dispatch_table::vkResetCommandPool, "vkResetCommandPool");
  V(dispatch_table, &device_dispatch_table::vkCreatePipelineLayout, "vkCreatePipelineLayout");
  V(dispatch_table, &device_dispatch_table::vkDestroyDescriptorSetLayout, "vkDestroyDescriptorSetLayout");
  V(dispatch_table, &device_dispatch_table::vkMergePipelineCaches, "vkMergePipelineCaches");
  V(dispatch_table, &device_dispatch_table::vkCreateGraphicsPipelines, "vkCreateGraphicsPipelines");
  V(dispatch_table, &device_dispatch_table::vkGetPipelineCacheData, "vkGetPipelineCacheData");
  V(dispatch_table, &device_dispatch_table::vkDeviceWaitIdle, "vkDeviceWaitIdle");
  V(dispatch_table, &device_dispatch_table::vkUpdateDescriptorSetWithTemplate, "vkUpdateDescriptorSetWithTemplate");
  V(dispatch_table, &device_dispatch_table::vkCmdWriteTimestamp, "vkCmdWriteTimestamp");
  V(dispatch_table, &device_dispatch_table::vkDestroyImageView, "vkDestroyImageView");
  V(dispatch_table, &device_dispatch_table::vkGetBufferMemoryRequirements2, "vkGetBufferMemoryRequirements2");
  V(dispatch_table, &device_dispatch_table::vkResetDescriptorPool, "vkResetDescriptorPool");
  V(dispatch_table, &device_dispatch_table::vkUnmapMemory, "vkUnmapMemory");
  V(dispatch_table, &device_dispatch_table::vkGetImageSubresourceLayout, "vkGetImageSubresourceLayout");
#ifdef VK_USE_PLATFORM_ANDROID_KHR
  V(dispatch_table, &device_dispatch_table::vkGetAndroidHardwareBufferPropertiesANDROID, "vkGetAndroidHardwareBufferPropertiesANDROID");
#endif
  V(dispatch_table, &device_dispatch_table::vkCreatePipelineCache, "vkCreatePipelineCache");
  V(dispatch_table, &device_dispatch_table::vkDestroyPipelineLayout, "vkDestroyPipelineLayout");
  V(dispatch_table, &device_dispatch_table::vkDestroyBuffer, "vkDestroyBuffer");
  V(dispatch_table, &device_dispatch_table::vkCmdSetEvent, "vkCmdSetEvent");
  V(dispatch_table, &device_dispatch_table::vkDestroyDescriptorPool, "vkDestroyDescriptorPool");
  V(dispatch_table, &device_dispatch_table::vkCreateSampler, "vkCreateSampler");
  V(dispatch_table, &device_dispatch_table::vkSetEvent, "vkSetEvent");
  V(dispatch_table, &device_dispatch_table::vkBindImageMemory, "vkBindImageMemory");
  V(dispatch_table, &device_dispatch_table::vkCreateQueryPool, "vkCreateQueryPool");
  V(dispatch_table, &device_dispatch_table::vkDestroyImage, "vkDestroyImage");
  V(dispatch_table, &device_dispatch_table::vkCmdCopyBuffer, "vkCmdCopyBuffer");
  V(dispatch_table, &device_dispatch_table::vkGetQueryPoolResults, "vkGetQueryPoolResults");
  V(dispatch_table, &device_dispatch_table::vkCreateSemaphore, "vkCreateSemaphore");
  V(dispatch_table, &device_dispatch_table::vkDestroyPipeline, "vkDestroyPipeline");
  V(dispatch_table, &device_dispatch_table::vkCmdSetBlendConstants, "vkCmdSetBlendConstants");
  V(dispatch_table, &device_dispatch_table::vkResetFences, "vkResetFences");
  V(dispatch_table, &device_dispatch_table::vkCmdDraw, "vkCmdDraw");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndexedIndirectCountKHR, "vkCmdDrawIndexedIndirectCountKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkGetMemoryWin32HandleNV, "vkGetMemoryWin32HandleNV");
#endif
  V(dispatch_table, &device_dispatch_table::vkDestroyFence, "vkDestroyFence");
  V(dispatch_table, &device_dispatch_table::vkCmdSetCheckpointNV, "vkCmdSetCheckpointNV");
  V(dispatch_table, &device_dispatch_table::vkCreateShaderModule, "vkCreateShaderModule");
  V(dispatch_table, &device_dispatch_table::vkCreateBuffer, "vkCreateBuffer");
  V(dispatch_table, &device_dispatch_table::vkCreateFramebuffer, "vkCreateFramebuffer");
  V(dispatch_table, &device_dispatch_table::vkCreateFence, "vkCreateFence");
  V(dispatch_table, &device_dispatch_table::vkCmdBindIndexBuffer, "vkCmdBindIndexBuffer");
  V(dispatch_table, &device_dispatch_table::vkAllocateMemory, "vkAllocateMemory");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndexed, "vkCmdDrawIndexed");
  V(dispatch_table, &device_dispatch_table::vkDestroyBufferView, "vkDestroyBufferView");
  V(dispatch_table, &device_dispatch_table::vkCmdDispatch, "vkCmdDispatch");
  V(dispatch_table, &device_dispatch_table::vkCreateBufferView, "vkCreateBufferView");
  V(dispatch_table, &device_dispatch_table::vkCmdProcessCommandsNVX, "vkCmdProcessCommandsNVX");
  V(dispatch_table, &device_dispatch_table::vkDestroyValidationCacheEXT, "vkDestroyValidationCacheEXT");
  V(dispatch_table, &device_dispatch_table::vkDestroyPipelineCache, "vkDestroyPipelineCache");
  V(dispatch_table, &device_dispatch_table::vkAllocateCommandBuffers, "vkAllocateCommandBuffers");
  V(dispatch_table, &device_dispatch_table::vkCmdBindVertexBuffers, "vkCmdBindVertexBuffers");
  V(dispatch_table, &device_dispatch_table::vkBindBufferMemory2, "vkBindBufferMemory2");
  V(dispatch_table, &device_dispatch_table::vkGetFenceFdKHR, "vkGetFenceFdKHR");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkGetFenceWin32HandleKHR, "vkGetFenceWin32HandleKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkMapMemory, "vkMapMemory");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceQueue, "vkGetDeviceQueue");
  V(dispatch_table, &device_dispatch_table::vkGetBufferMemoryRequirements, "vkGetBufferMemoryRequirements");
  V(dispatch_table, &device_dispatch_table::vkGetQueueCheckpointDataNV, "vkGetQueueCheckpointDataNV");
  V(dispatch_table, &device_dispatch_table::vkCmdEndRenderPass, "vkCmdEndRenderPass");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceProcAddr, "vkGetDeviceProcAddr");
  V(dispatch_table, &device_dispatch_table::vkWaitForFences, "vkWaitForFences");
  V(dispatch_table, &device_dispatch_table::vkCmdWaitEvents, "vkCmdWaitEvents");
  V(dispatch_table, &device_dispatch_table::vkDestroySampler, "vkDestroySampler");
  V(dispatch_table, &device_dispatch_table::vkFlushMappedMemoryRanges, "vkFlushMappedMemoryRanges");
  V(dispatch_table, &device_dispatch_table::vkGetRenderAreaGranularity, "vkGetRenderAreaGranularity");
  V(dispatch_table, &device_dispatch_table::vkDestroyCommandPool, "vkDestroyCommandPool");
  V(dispatch_table, &device_dispatch_table::vkCmdSetScissor, "vkCmdSetScissor");
  V(dispatch_table, &device_dispatch_table::vkCreateDescriptorPool, "vkCreateDescriptorPool");
  V(dispatch_table, &device_dispatch_table::vkFreeMemory, "vkFreeMemory");
  V(dispatch_table, &device_dispatch_table::vkCmdEndRenderPass2KHR, "vkCmdEndRenderPass2KHR");
  V(dispatch_table, &device_dispatch_table::vkSetDebugUtilsObjectTagEXT, "vkSetDebugUtilsObjectTagEXT");
  V(dispatch_table, &device_dispatch_table::vkRegisterDeviceEventEXT, "vkRegisterDeviceEventEXT");
  V(dispatch_table, &device_dispatch_table::vkCreateImageView, "vkCreateImageView");
  V(dispatch_table, &device_dispatch_table::vkResetEvent, "vkResetEvent");
  V(dispatch_table, &device_dispatch_table::vkDestroySwapchainKHR, "vkDestroySwapchainKHR");
  V(dispatch_table, &device_dispatch_table::vkGetMemoryFdKHR, "vkGetMemoryFdKHR");
  V(dispatch_table, &device_dispatch_table::vkInvalidateMappedMemoryRanges, "vkInvalidateMappedMemoryRanges");
  V(dispatch_table, &device_dispatch_table::vkResetCommandBuffer, "vkResetCommandBuffer");
  V(dispatch_table, &device_dispatch_table::vkGetDeviceMemoryCommitment, "vkGetDeviceMemoryCommitment");
  V(dispatch_table, &device_dispatch_table::vkCreateRenderPass, "vkCreateRenderPass");
  V(dispatch_table, &device_dispatch_table::vkImportFenceFdKHR, "vkImportFenceFdKHR");
  V(dispatch_table, &device_dispatch_table::vkSetDebugUtilsObjectNameEXT, "vkSetDebugUtilsObjectNameEXT");
  V(dispatch_table, &device_dispatch_table::vkCreateValidationCacheEXT, "vkCreateValidationCacheEXT");
  V(dispatch_table, &device_dispatch_table::vkGetFenceStatus, "vkGetFenceStatus");
  V(dispatch_table, &device_dispatch_table::vkGetImageMemoryRequirements, "vkGetImageMemoryRequirements");
  V(dispatch_table, &device_dispatch_table::vkGetImageSparseMemoryRequirements, "vkGetImageSparseMemoryRequirements");
  V(dispatch_table, &device_dispatch_table::vkAllocateDescriptorSets, "vkAllocateDescriptorSets");
  V(dispatch_table, &device_dispatch_table::vkCmdUpdateBuffer, "vkCmdUpdateBuffer");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkGetMemoryWin32HandleKHR, "vkGetMemoryWin32HandleKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkFreeDescriptorSets, "vkFreeDescriptorSets");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndexedIndirect, "vkCmdDrawIndexedIndirect");
  V(dispatch_table, &device_dispatch_table::vkDestroyRenderPass, "vkDestroyRenderPass");
  V(dispatch_table, &device_dispatch_table::vkCmdWriteBufferMarkerAMD, "vkCmdWriteBufferMarkerAMD");
  V(dispatch_table, &device_dispatch_table::vkCreateCommandPool, "vkCreateCommandPool");
  V(dispatch_table, &device_dispatch_table::vkCmdDispatchIndirect, "vkCmdDispatchIndirect");
  V(dispatch_table, &device_dispatch_table::vkFreeCommandBuffers, "vkFreeCommandBuffers");
  V(dispatch_table, &device_dispatch_table::vkCmdBindPipeline, "vkCmdBindPipeline");
  V(dispatch_table, &device_dispatch_table::vkCmdBeginQuery, "vkCmdBeginQuery");
  V(dispatch_table, &device_dispatch_table::vkCmdBeginRenderPass2KHR, "vkCmdBeginRenderPass2KHR");
  V(dispatch_table, &device_dispatch_table::vkEndCommandBuffer, "vkEndCommandBuffer");
  V(dispatch_table, &device_dispatch_table::vkCmdResolveImage, "vkCmdResolveImage");
  V(dispatch_table, &device_dispatch_table::vkCmdSetSampleLocationsEXT, "vkCmdSetSampleLocationsEXT");
  V(dispatch_table, &device_dispatch_table::vkQueueWaitIdle, "vkQueueWaitIdle");
  V(dispatch_table, &device_dispatch_table::vkCmdSetDepthBias, "vkCmdSetDepthBias");
  V(dispatch_table, &device_dispatch_table::vkCmdSetDepthBounds, "vkCmdSetDepthBounds");
  V(dispatch_table, &device_dispatch_table::vkCmdSetStencilCompareMask, "vkCmdSetStencilCompareMask");
  V(dispatch_table, &device_dispatch_table::vkCmdCopyBufferToImage, "vkCmdCopyBufferToImage");
#ifdef VK_USE_PLATFORM_WIN32_KHR
  V(dispatch_table, &device_dispatch_table::vkImportFenceWin32HandleKHR, "vkImportFenceWin32HandleKHR");
#endif
  V(dispatch_table, &device_dispatch_table::vkCmdSetStencilWriteMask, "vkCmdSetStencilWriteMask");
  V(dispatch_table, &device_dispatch_table::vkDestroySemaphore, "vkDestroySemaphore");
  V(dispatch_table, &device_dispatch_table::vkDestroyDevice, "vkDestroyDevice");
  V(dispatch_table, &device_dispatch_table::vkCmdSetStencilReference, "vkCmdSetStencilReference");
  V(dispatch_table, &device_dispatch_table::vkDestroyEvent, "vkDestroyEvent");
  V(dispatch_table, &device_dispatch_table::vkCmdDrawIndirect, "vkCmdDrawIndirect");
  V(dispatch_table, &device_dispatch_table::vkCmdCopyImage, "vkCmdCopyImage");
  V(dispatch_table, &device_dispatch_table::vkDestroyQueryPool, "vkDestroyQueryPool");
  V(dispatch_table, &device_dispatch_table::vkCmdNextSubpass, "vkCmdNextSubpass");
  V(dispatch_table, &device_dispatch_table::vkDestroyFramebuffer, "vkDestroyFramebuffer");
  V(dispatch_table, &device_dispatch_table::vkCmdSetLineWidth, "vkCmdSetLineWidth");
  V(dispatch_table, &device_dispatch_table::vkCmdBlitImage, "vkCmdBlitImage");
  V(dispatch_table, &device_dispatch_table::vkCreateComputePipelines, "vkCreateComputePipelines");
  V(dispatch_table, &device_dispatch_table::vkCmdFillBuffer, "vkCmdFillBuffer");
  V(dispatch_table, &device_dispatch_table::vkCmdClearColorImage, "vkCmdClearColorImage");
  V(dispatch_table, &device_dispatch_table::vkCmdClearDepthStencilImage, "vkCmdClearDepthStencilImage");
  V(dispatch_table, &device_dispatch_table::vkBeginCommandBuffer, "vkBeginCommandBuffer");
  V(dispatch_table, &device_dispatch_table::vkCmdSetViewport, "vkCmdSetViewport");
  V(dispatch_table, &device_dispatch_table::vkCmdClearAttachments, "vkCmdClearAttachments");
  V(dispatch_table, &device_dispatch_table::vkCreateRenderPass2KHR, "vkCreateRenderPass2KHR");
  V(dispatch_table, &device_dispatch_table::vkBindBufferMemory, "vkBindBufferMemory");
  V(dispatch_table, &device_dispatch_table::vkCmdResetEvent, "vkCmdResetEvent");
  V(dispatch_table, &device_dispatch_table::vkCmdPipelineBarrier, "vkCmdPipelineBarrier");
  V(dispatch_table, &device_dispatch_table::vkGetPastPresentationTimingGOOGLE, "vkGetPastPresentationTimingGOOGLE");
  V(dispatch_table, &device_dispatch_table::vkCreateEvent, "vkCreateEvent");
  V(dispatch_table, &device_dispatch_table::vkCmdEndQuery, "vkCmdEndQuery");
  V(dispatch_table, &device_dispatch_table::vkCmdBeginConditionalRenderingEXT, "vkCmdBeginConditionalRenderingEXT");
  V(dispatch_table, &device_dispatch_table::vkCmdEndConditionalRenderingEXT, "vkCmdEndConditionalRenderingEXT");
  V(dispatch_table, &device_dispatch_table::vkQueuePresentKHR, "vkQueuePresentKHR");
  V(dispatch_table, &device_dispatch_table::vkCreateDescriptorUpdateTemplate, "vkCreateDescriptorUpdateTemplate");
  V(dispatch_table, &device_dispatch_table::vkCreateIndirectCommandsLayoutNVX, "vkCreateIndirectCommandsLayoutNVX");
  V(dispatch_table, &device_dispatch_table::vkDestroyShaderModule, "vkDestroyShaderModule");
  V(dispatch_table, &device_dispatch_table::vkCmdPushConstants, "vkCmdPushConstants");
  V(dispatch_table, &device_dispatch_table::vkGetEventStatus, "vkGetEventStatus");
  V(dispatch_table, &device_dispatch_table::vkCmdBeginRenderPass, "vkCmdBeginRenderPass");
  V(dispatch_table, &device_dispatch_table::vkGetRefreshCycleDurationGOOGLE, "vkGetRefreshCycleDurationGOOGLE");
  V(dispatch_table, &device_dispatch_table::vkQueueBindSparse, "vkQueueBindSparse");
  V(dispatch_table, &device_dispatch_table::vkCmdExecuteCommands, "vkCmdExecuteCommands");
  V(dispatch_table, &device_dispatch_table::vkCreateSharedSwapchainsKHR, "vkCreateSharedSwapchainsKHR");
  V(dispatch_table, &device_dispatch_table::vkImportSemaphoreFdKHR, "vkImportSemaphoreFdKHR");
  V(dispatch_table, &device_dispatch_table::vkCmdBindDescriptorSets, "vkCmdBindDescriptorSets");
  V(dispatch_table, &device_dispatch_table::vkCmdCopyQueryPoolResults, "vkCmdCopyQueryPoolResults");
  V(dispatch_table, &device_dispatch_table::vkCmdCopyImageToBuffer, "vkCmdCopyImageToBuffer");
  V(dispatch_table, &device_dispatch_table::vkQueueSubmit, "vkQueueSubmit");
  V(dispatch_table, &device_dispatch_table::vkDebugMarkerSetObjectTagEXT, "vkDebugMarkerSetObjectTagEXT");
  V(dispatch_table, &device_dispatch_table::vkUpdateDescriptorSets, "vkUpdateDescriptorSets");
  V(dispatch_table, &device_dispatch_table::vkBindImageMemory2, "vkBindImageMemory2");
  V(dispatch_table, &device_dispatch_table::vkCreateImage, "vkCreateImage");
  V(dispatch_table, &device_dispatch_table::vkGetSwapchainImagesKHR, "vkGetSwapchainImagesKHR");
  V(dispatch_table, &device_dispatch_table::vkAcquireNextImageKHR, "vkAcquireNextImageKHR");
  V(dispatch_table, &device_dispatch_table::vkCreateSwapchainKHR, "vkCreateSwapchainKHR");
  V(dispatch_table, &device_dispatch_table::vkCmdResetQueryPool, "vkCmdResetQueryPool");
}

class buffer {
 public:
  operator buffer_ref() const { return handle_; }


 private:
  buffer_ref handle_ = VK_NULL_HANDLE;

};

class buffer_view {
 public:
  operator buffer_view_ref() const { return handle_; }


 private:
  buffer_view_ref handle_ = VK_NULL_HANDLE;

};

class command_buffer {
 public:
  operator command_buffer_ref() const { return handle_; }


 private:
  command_buffer_ref handle_ = VK_NULL_HANDLE;

};

class command_pool {
 public:
  operator command_pool_ref() const { return handle_; }


 private:
  command_pool_ref handle_ = VK_NULL_HANDLE;

};

class debug_report_callback_ext {
 public:
  operator debug_report_callback_ext_ref() const { return handle_; }


 private:
  debug_report_callback_ext_ref handle_ = VK_NULL_HANDLE;

};

class debug_utils_messenger_ext {
 public:
  operator debug_utils_messenger_ext_ref() const { return handle_; }


 private:
  debug_utils_messenger_ext_ref handle_ = VK_NULL_HANDLE;

};

class descriptor_pool {
 public:
  operator descriptor_pool_ref() const { return handle_; }


 private:
  descriptor_pool_ref handle_ = VK_NULL_HANDLE;

};

class descriptor_set_layout {
 public:
  operator descriptor_set_layout_ref() const { return handle_; }


 private:
  descriptor_set_layout_ref handle_ = VK_NULL_HANDLE;

};

class descriptor_set {
 public:
  operator descriptor_set_ref() const { return handle_; }


 private:
  descriptor_set_ref handle_ = VK_NULL_HANDLE;

};

class descriptor_update_template {
 public:
  operator descriptor_update_template_ref() const { return handle_; }


 private:
  descriptor_update_template_ref handle_ = VK_NULL_HANDLE;

};
using descriptor_update_template_khr = descriptor_update_template_ref;


class device_memory {
 public:
  operator device_memory_ref() const { return handle_; }


 private:
  device_memory_ref handle_ = VK_NULL_HANDLE;

};

class device {
 public:
  operator device_ref() const { return handle_; }


 private:
  device_ref handle_ = VK_NULL_HANDLE;

};

class display_khr {
 public:
  operator display_khr_ref() const { return handle_; }


 private:
  display_khr_ref handle_ = VK_NULL_HANDLE;

};

class display_mode_khr {
 public:
  operator display_mode_khr_ref() const { return handle_; }


 private:
  display_mode_khr_ref handle_ = VK_NULL_HANDLE;

};

class event {
 public:
  operator event_ref() const { return handle_; }


 private:
  event_ref handle_ = VK_NULL_HANDLE;

};

class fence {
 public:
  operator fence_ref() const { return handle_; }


 private:
  fence_ref handle_ = VK_NULL_HANDLE;

};

class framebuffer {
 public:
  operator framebuffer_ref() const { return handle_; }


 private:
  framebuffer_ref handle_ = VK_NULL_HANDLE;

};

class image {
 public:
  operator image_ref() const { return handle_; }


 private:
  image_ref handle_ = VK_NULL_HANDLE;

};

class image_view {
 public:
  operator image_view_ref() const { return handle_; }


 private:
  image_view_ref handle_ = VK_NULL_HANDLE;

};

class indirect_commands_layout_nvx {
 public:
  operator indirect_commands_layout_nvx_ref() const { return handle_; }


 private:
  indirect_commands_layout_nvx_ref handle_ = VK_NULL_HANDLE;

};

class instance {
 public:
  operator instance_ref() const { return handle_; }


 private:
  instance_ref handle_ = VK_NULL_HANDLE;

};

class object_table_nvx {
 public:
  operator object_table_nvx_ref() const { return handle_; }


 private:
  object_table_nvx_ref handle_ = VK_NULL_HANDLE;

};

class physical_device {
 public:
  operator physical_device_ref() const { return handle_; }


 private:
  physical_device_ref handle_ = VK_NULL_HANDLE;

};

class pipeline_cache {
 public:
  operator pipeline_cache_ref() const { return handle_; }


 private:
  pipeline_cache_ref handle_ = VK_NULL_HANDLE;

};

class pipeline_layout {
 public:
  operator pipeline_layout_ref() const { return handle_; }


 private:
  pipeline_layout_ref handle_ = VK_NULL_HANDLE;

};

class pipeline {
 public:
  operator pipeline_ref() const { return handle_; }


 private:
  pipeline_ref handle_ = VK_NULL_HANDLE;

};

class query_pool {
 public:
  operator query_pool_ref() const { return handle_; }


 private:
  query_pool_ref handle_ = VK_NULL_HANDLE;

};

class queue {
 public:
  operator queue_ref() const { return handle_; }


 private:
  queue_ref handle_ = VK_NULL_HANDLE;

};

class render_pass {
 public:
  operator render_pass_ref() const { return handle_; }


 private:
  render_pass_ref handle_ = VK_NULL_HANDLE;

};

class sampler {
 public:
  operator sampler_ref() const { return handle_; }


 private:
  sampler_ref handle_ = VK_NULL_HANDLE;

};

class sampler_ycbcr_conversion {
 public:
  operator sampler_ycbcr_conversion_ref() const { return handle_; }


 private:
  sampler_ycbcr_conversion_ref handle_ = VK_NULL_HANDLE;

};
using sampler_ycbcr_conversion_khr = sampler_ycbcr_conversion_ref;


class semaphore {
 public:
  operator semaphore_ref() const { return handle_; }


 private:
  semaphore_ref handle_ = VK_NULL_HANDLE;

};

class shader_module {
 public:
  operator shader_module_ref() const { return handle_; }


 private:
  shader_module_ref handle_ = VK_NULL_HANDLE;

};

class surface_khr {
 public:
  operator surface_khr_ref() const { return handle_; }


 private:
  surface_khr_ref handle_ = VK_NULL_HANDLE;

};

class swapchain_khr {
 public:
  operator swapchain_khr_ref() const { return handle_; }


 private:
  swapchain_khr_ref handle_ = VK_NULL_HANDLE;

};

class validation_cache_ext {
 public:
  operator validation_cache_ext_ref() const { return handle_; }


 private:
  validation_cache_ext_ref handle_ = VK_NULL_HANDLE;

};


}  // namespace spk
