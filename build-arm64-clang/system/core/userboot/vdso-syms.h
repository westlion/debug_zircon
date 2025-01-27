FUNCTION(_zx_bootloader_fb_get_info, 0x6c58, 0xc)
FUNCTION(_zx_bti_create, 0x6c28, 0xc)
FUNCTION(_zx_bti_pin, 0x6c34, 0xc)
FUNCTION(_zx_bti_release_quarantine, 0x6c40, 0xc)
FUNCTION(_zx_cache_flush, 0x6000, 0xec)
FUNCTION(_zx_channel_call, 0x60f0, 0x90)
FUNCTION(_zx_channel_create, 0x6820, 0xc)
FUNCTION(_zx_channel_read, 0x682c, 0xc)
FUNCTION(_zx_channel_read_etc, 0x6838, 0xc)
FUNCTION(_zx_channel_write, 0x6844, 0xc)
FUNCTION(_zx_clock_adjust, 0x6760, 0xc)
FUNCTION(_zx_clock_get, 0x6748, 0xc)
FUNCTION(_zx_cprng_add_entropy, 0x6ac0, 0xc)
FUNCTION(_zx_cprng_draw, 0x6ab4, 0xc)
FUNCTION(_zx_deadline_after, 0x6180, 0x2c)
FUNCTION(_zx_debug_read, 0x6b8c, 0xc)
FUNCTION(_zx_debug_send_command, 0x6ba4, 0xc)
FUNCTION(_zx_debug_write, 0x6b98, 0xc)
FUNCTION(_zx_debuglog_create, 0x6b38, 0xc)
FUNCTION(_zx_debuglog_read, 0x6b50, 0xc)
FUNCTION(_zx_debuglog_write, 0x6b44, 0xc)
FUNCTION(_zx_event_create, 0x6988, 0xc)
FUNCTION(_zx_eventpair_create, 0x6994, 0xc)
FUNCTION(_zx_fifo_create, 0x6acc, 0xc)
FUNCTION(_zx_fifo_read, 0x6ad8, 0xc)
FUNCTION(_zx_fifo_read_old, 0x6ae4, 0xc)
FUNCTION(_zx_fifo_write, 0x6af0, 0xc)
FUNCTION(_zx_fifo_write_old, 0x6afc, 0xc)
FUNCTION(_zx_futex_requeue, 0x69b8, 0xc)
FUNCTION(_zx_futex_wait, 0x65d0, 0x44)
FUNCTION(_zx_futex_wake, 0x69ac, 0xc)
FUNCTION(_zx_futex_wake_handle_close_thread_exit, 0x66d4, 0x38)
FUNCTION(_zx_guest_create, 0x6d30, 0xc)
FUNCTION(_zx_guest_set_trap, 0x6d3c, 0xc)
FUNCTION(_zx_handle_close, 0x676c, 0xc)
FUNCTION(_zx_handle_duplicate, 0x6778, 0xc)
FUNCTION(_zx_handle_replace, 0x6784, 0xc)
FUNCTION(_zx_interrupt_ack, 0x6be0, 0xc)
FUNCTION(_zx_interrupt_bind, 0x6bbc, 0xc)
FUNCTION(_zx_interrupt_create, 0x6bb0, 0xc)
FUNCTION(_zx_interrupt_destroy, 0x6bd4, 0xc)
FUNCTION(_zx_interrupt_trigger, 0x6bec, 0xc)
FUNCTION(_zx_interrupt_wait, 0x6668, 0x34)
FUNCTION(_zx_iommu_create, 0x6c1c, 0xc)
FUNCTION(_zx_job_create, 0x6928, 0xc)
FUNCTION(_zx_job_set_policy, 0x6934, 0xc)
FUNCTION(_zx_job_set_relative_importance, 0x6d9c, 0xc)
FUNCTION(_zx_ktrace_control, 0x6b68, 0xc)
FUNCTION(_zx_ktrace_read, 0x6b5c, 0xc)
FUNCTION(_zx_ktrace_write, 0x6b74, 0xc)
FUNCTION(_zx_log_create, 0x6b14, 0xc)
FUNCTION(_zx_log_read, 0x6b2c, 0xc)
FUNCTION(_zx_log_write, 0x6b20, 0xc)
FUNCTION(_zx_mmap_device_io, 0x6bf8, 0xc)
FUNCTION(_zx_mtrace_control, 0x6b80, 0xc)
FUNCTION(_zx_nanosleep, 0x6508, 0x2c)
FUNCTION(_zx_object_get_child, 0x6808, 0xc)
FUNCTION(_zx_object_get_cookie, 0x67f0, 0xc)
FUNCTION(_zx_object_get_info, 0x67fc, 0xc)
FUNCTION(_zx_object_get_property, 0x67cc, 0xc)
FUNCTION(_zx_object_set_cookie, 0x67e4, 0xc)
FUNCTION(_zx_object_set_profile, 0x6814, 0xc)
FUNCTION(_zx_object_set_property, 0x67d8, 0xc)
FUNCTION(_zx_object_signal, 0x67b4, 0xc)
FUNCTION(_zx_object_signal_peer, 0x67c0, 0xc)
FUNCTION(_zx_object_wait_async, 0x67a8, 0xc)
FUNCTION(_zx_object_wait_many, 0x6588, 0x44)
FUNCTION(_zx_object_wait_one, 0x6538, 0x4c)
FUNCTION(_zx_pc_firmware_tables, 0x6d0c, 0xc)
FUNCTION(_zx_pci_add_subtract_io_range, 0x6d00, 0xc)
FUNCTION(_zx_pci_cfg_pio_rw, 0x6cb8, 0xc)
FUNCTION(_zx_pci_config_read, 0x6ca0, 0xc)
FUNCTION(_zx_pci_config_write, 0x6cac, 0xc)
FUNCTION(_zx_pci_enable_bus_master, 0x6c88, 0xc)
FUNCTION(_zx_pci_get_bar, 0x6cc4, 0xc)
FUNCTION(_zx_pci_get_nth_device, 0x6c7c, 0xc)
FUNCTION(_zx_pci_init, 0x6cf4, 0xc)
FUNCTION(_zx_pci_map_interrupt, 0x6cd0, 0xc)
FUNCTION(_zx_pci_query_irq_mode, 0x6cdc, 0xc)
FUNCTION(_zx_pci_reset_device, 0x6c94, 0xc)
FUNCTION(_zx_pci_set_irq_mode, 0x6ce8, 0xc)
FUNCTION(_zx_pmt_unpin, 0x6c4c, 0xc)
FUNCTION(_zx_port_cancel, 0x69e8, 0xc)
FUNCTION(_zx_port_create, 0x69c4, 0xc)
FUNCTION(_zx_port_queue, 0x69d0, 0xc)
FUNCTION(_zx_port_wait, 0x6618, 0x4c)
FUNCTION(_zx_process_create, 0x68f8, 0xc)
FUNCTION(_zx_process_exit, 0x68ec, 0xc)
FUNCTION(_zx_process_read_memory, 0x6910, 0xc)
FUNCTION(_zx_process_start, 0x6904, 0xc)
FUNCTION(_zx_process_write_memory, 0x691c, 0xc)
FUNCTION(_zx_profile_create, 0x6b08, 0xc)
FUNCTION(_zx_resource_create, 0x6d24, 0xc)
FUNCTION(_zx_set_framebuffer, 0x6c64, 0xc)
FUNCTION(_zx_set_framebuffer_vmo, 0x6c70, 0xc)
FUNCTION(_zx_smc_call, 0x6d18, 0xc)
FUNCTION(_zx_socket_accept, 0x6898, 0xc)
FUNCTION(_zx_socket_create, 0x6868, 0xc)
FUNCTION(_zx_socket_read, 0x6880, 0xc)
FUNCTION(_zx_socket_share, 0x688c, 0xc)
FUNCTION(_zx_socket_write, 0x6874, 0xc)
FUNCTION(_zx_status_get_string, 0x61b0, 0x238)
FUNCTION(_zx_syscall_test_0, 0x6da8, 0xc)
FUNCTION(_zx_syscall_test_1, 0x6db4, 0xc)
FUNCTION(_zx_syscall_test_2, 0x6dc0, 0xc)
FUNCTION(_zx_syscall_test_3, 0x6dcc, 0xc)
FUNCTION(_zx_syscall_test_4, 0x6dd8, 0xc)
FUNCTION(_zx_syscall_test_5, 0x6de4, 0xc)
FUNCTION(_zx_syscall_test_6, 0x6df0, 0xc)
FUNCTION(_zx_syscall_test_7, 0x6dfc, 0xc)
FUNCTION(_zx_syscall_test_8, 0x6e08, 0xc)
FUNCTION(_zx_syscall_test_wrapper, 0x66a0, 0x34)
FUNCTION(_zx_system_get_dcache_line_size, 0x63e8, 0xc)
FUNCTION(_zx_system_get_features, 0x63f8, 0x44)
FUNCTION(_zx_system_get_num_cpus, 0x6440, 0xc)
FUNCTION(_zx_system_get_physmem, 0x6450, 0xc)
FUNCTION(_zx_system_get_version, 0x6460, 0x84)
FUNCTION(_zx_system_mexec, 0x6d84, 0xc)
FUNCTION(_zx_system_powerctl, 0x6d90, 0xc)
FUNCTION(_zx_task_bind_exception_port, 0x6940, 0xc)
FUNCTION(_zx_task_kill, 0x697c, 0xc)
FUNCTION(_zx_task_resume, 0x6958, 0xc)
FUNCTION(_zx_task_resume_from_exception, 0x6970, 0xc)
FUNCTION(_zx_task_suspend, 0x694c, 0xc)
FUNCTION(_zx_task_suspend_token, 0x6964, 0xc)
FUNCTION(_zx_thread_create, 0x68b0, 0xc)
FUNCTION(_zx_thread_exit, 0x68a4, 0xc)
FUNCTION(_zx_thread_read_state, 0x68c8, 0xc)
FUNCTION(_zx_thread_set_priority, 0x68e0, 0xc)
FUNCTION(_zx_thread_start, 0x68bc, 0xc)
FUNCTION(_zx_thread_write_state, 0x68d4, 0xc)
FUNCTION(_zx_ticks_get, 0x64e8, 0x8)
FUNCTION(_zx_ticks_per_second, 0x64f8, 0xc)
FUNCTION(_zx_timer_cancel, 0x6a0c, 0xc)
FUNCTION(_zx_timer_create, 0x69f4, 0xc)
FUNCTION(_zx_timer_set, 0x6a00, 0xc)
FUNCTION(_zx_vcpu_create, 0x6d48, 0xc)
FUNCTION(_zx_vcpu_interrupt, 0x6d60, 0xc)
FUNCTION(_zx_vcpu_read_state, 0x6d6c, 0xc)
FUNCTION(_zx_vcpu_resume, 0x6d54, 0xc)
FUNCTION(_zx_vcpu_write_state, 0x6d78, 0xc)
FUNCTION(_zx_vmar_allocate, 0x6a78, 0xc)
FUNCTION(_zx_vmar_destroy, 0x6a84, 0xc)
FUNCTION(_zx_vmar_map, 0x6a90, 0xc)
FUNCTION(_zx_vmar_protect, 0x6aa8, 0xc)
FUNCTION(_zx_vmar_unmap, 0x6a9c, 0xc)
FUNCTION(_zx_vmar_unmap_handle_close_thread_exit, 0x670c, 0x3c)
FUNCTION(_zx_vmo_clone, 0x6a60, 0xc)
FUNCTION(_zx_vmo_create, 0x6a18, 0xc)
FUNCTION(_zx_vmo_create_contiguous, 0x6c04, 0xc)
FUNCTION(_zx_vmo_create_physical, 0x6c10, 0xc)
FUNCTION(_zx_vmo_get_size, 0x6a3c, 0xc)
FUNCTION(_zx_vmo_op_range, 0x6a54, 0xc)
FUNCTION(_zx_vmo_read, 0x6a24, 0xc)
FUNCTION(_zx_vmo_set_cache_policy, 0x6a6c, 0xc)
FUNCTION(_zx_vmo_set_size, 0x6a48, 0xc)
FUNCTION(_zx_vmo_write, 0x6a30, 0xc)
WEAK_FUNCTION(zx_bootloader_fb_get_info, 0x6c58, 0xc)
WEAK_FUNCTION(zx_bti_create, 0x6c28, 0xc)
WEAK_FUNCTION(zx_bti_pin, 0x6c34, 0xc)
WEAK_FUNCTION(zx_bti_release_quarantine, 0x6c40, 0xc)
WEAK_FUNCTION(zx_cache_flush, 0x6000, 0xec)
WEAK_FUNCTION(zx_channel_call, 0x60f0, 0x90)
WEAK_FUNCTION(zx_channel_create, 0x6820, 0xc)
WEAK_FUNCTION(zx_channel_read, 0x682c, 0xc)
WEAK_FUNCTION(zx_channel_read_etc, 0x6838, 0xc)
WEAK_FUNCTION(zx_channel_write, 0x6844, 0xc)
WEAK_FUNCTION(zx_clock_adjust, 0x6760, 0xc)
WEAK_FUNCTION(zx_clock_get, 0x6748, 0xc)
WEAK_FUNCTION(zx_cprng_add_entropy, 0x6ac0, 0xc)
WEAK_FUNCTION(zx_cprng_draw, 0x6ab4, 0xc)
WEAK_FUNCTION(zx_deadline_after, 0x6180, 0x2c)
WEAK_FUNCTION(zx_debug_read, 0x6b8c, 0xc)
WEAK_FUNCTION(zx_debug_send_command, 0x6ba4, 0xc)
WEAK_FUNCTION(zx_debug_write, 0x6b98, 0xc)
WEAK_FUNCTION(zx_debuglog_create, 0x6b38, 0xc)
WEAK_FUNCTION(zx_debuglog_read, 0x6b50, 0xc)
WEAK_FUNCTION(zx_debuglog_write, 0x6b44, 0xc)
WEAK_FUNCTION(zx_event_create, 0x6988, 0xc)
WEAK_FUNCTION(zx_eventpair_create, 0x6994, 0xc)
WEAK_FUNCTION(zx_fifo_create, 0x6acc, 0xc)
WEAK_FUNCTION(zx_fifo_read, 0x6ad8, 0xc)
WEAK_FUNCTION(zx_fifo_read_old, 0x6ae4, 0xc)
WEAK_FUNCTION(zx_fifo_write, 0x6af0, 0xc)
WEAK_FUNCTION(zx_fifo_write_old, 0x6afc, 0xc)
WEAK_FUNCTION(zx_futex_requeue, 0x69b8, 0xc)
WEAK_FUNCTION(zx_futex_wait, 0x65d0, 0x44)
WEAK_FUNCTION(zx_futex_wake, 0x69ac, 0xc)
WEAK_FUNCTION(zx_futex_wake_handle_close_thread_exit, 0x66d4, 0x38)
WEAK_FUNCTION(zx_guest_create, 0x6d30, 0xc)
WEAK_FUNCTION(zx_guest_set_trap, 0x6d3c, 0xc)
WEAK_FUNCTION(zx_handle_close, 0x676c, 0xc)
WEAK_FUNCTION(zx_handle_duplicate, 0x6778, 0xc)
WEAK_FUNCTION(zx_handle_replace, 0x6784, 0xc)
WEAK_FUNCTION(zx_interrupt_ack, 0x6be0, 0xc)
WEAK_FUNCTION(zx_interrupt_bind, 0x6bbc, 0xc)
WEAK_FUNCTION(zx_interrupt_create, 0x6bb0, 0xc)
WEAK_FUNCTION(zx_interrupt_destroy, 0x6bd4, 0xc)
WEAK_FUNCTION(zx_interrupt_trigger, 0x6bec, 0xc)
WEAK_FUNCTION(zx_interrupt_wait, 0x6668, 0x34)
WEAK_FUNCTION(zx_iommu_create, 0x6c1c, 0xc)
WEAK_FUNCTION(zx_job_create, 0x6928, 0xc)
WEAK_FUNCTION(zx_job_set_policy, 0x6934, 0xc)
WEAK_FUNCTION(zx_job_set_relative_importance, 0x6d9c, 0xc)
WEAK_FUNCTION(zx_ktrace_control, 0x6b68, 0xc)
WEAK_FUNCTION(zx_ktrace_read, 0x6b5c, 0xc)
WEAK_FUNCTION(zx_ktrace_write, 0x6b74, 0xc)
WEAK_FUNCTION(zx_log_create, 0x6b14, 0xc)
WEAK_FUNCTION(zx_log_read, 0x6b2c, 0xc)
WEAK_FUNCTION(zx_log_write, 0x6b20, 0xc)
WEAK_FUNCTION(zx_mmap_device_io, 0x6bf8, 0xc)
WEAK_FUNCTION(zx_mtrace_control, 0x6b80, 0xc)
WEAK_FUNCTION(zx_nanosleep, 0x6508, 0x2c)
WEAK_FUNCTION(zx_object_get_child, 0x6808, 0xc)
WEAK_FUNCTION(zx_object_get_cookie, 0x67f0, 0xc)
WEAK_FUNCTION(zx_object_get_info, 0x67fc, 0xc)
WEAK_FUNCTION(zx_object_get_property, 0x67cc, 0xc)
WEAK_FUNCTION(zx_object_set_cookie, 0x67e4, 0xc)
WEAK_FUNCTION(zx_object_set_profile, 0x6814, 0xc)
WEAK_FUNCTION(zx_object_set_property, 0x67d8, 0xc)
WEAK_FUNCTION(zx_object_signal, 0x67b4, 0xc)
WEAK_FUNCTION(zx_object_signal_peer, 0x67c0, 0xc)
WEAK_FUNCTION(zx_object_wait_async, 0x67a8, 0xc)
WEAK_FUNCTION(zx_object_wait_many, 0x6588, 0x44)
WEAK_FUNCTION(zx_object_wait_one, 0x6538, 0x4c)
WEAK_FUNCTION(zx_pc_firmware_tables, 0x6d0c, 0xc)
WEAK_FUNCTION(zx_pci_add_subtract_io_range, 0x6d00, 0xc)
WEAK_FUNCTION(zx_pci_cfg_pio_rw, 0x6cb8, 0xc)
WEAK_FUNCTION(zx_pci_config_read, 0x6ca0, 0xc)
WEAK_FUNCTION(zx_pci_config_write, 0x6cac, 0xc)
WEAK_FUNCTION(zx_pci_enable_bus_master, 0x6c88, 0xc)
WEAK_FUNCTION(zx_pci_get_bar, 0x6cc4, 0xc)
WEAK_FUNCTION(zx_pci_get_nth_device, 0x6c7c, 0xc)
WEAK_FUNCTION(zx_pci_init, 0x6cf4, 0xc)
WEAK_FUNCTION(zx_pci_map_interrupt, 0x6cd0, 0xc)
WEAK_FUNCTION(zx_pci_query_irq_mode, 0x6cdc, 0xc)
WEAK_FUNCTION(zx_pci_reset_device, 0x6c94, 0xc)
WEAK_FUNCTION(zx_pci_set_irq_mode, 0x6ce8, 0xc)
WEAK_FUNCTION(zx_pmt_unpin, 0x6c4c, 0xc)
WEAK_FUNCTION(zx_port_cancel, 0x69e8, 0xc)
WEAK_FUNCTION(zx_port_create, 0x69c4, 0xc)
WEAK_FUNCTION(zx_port_queue, 0x69d0, 0xc)
WEAK_FUNCTION(zx_port_wait, 0x6618, 0x4c)
WEAK_FUNCTION(zx_process_create, 0x68f8, 0xc)
WEAK_FUNCTION(zx_process_exit, 0x68ec, 0xc)
WEAK_FUNCTION(zx_process_read_memory, 0x6910, 0xc)
WEAK_FUNCTION(zx_process_start, 0x6904, 0xc)
WEAK_FUNCTION(zx_process_write_memory, 0x691c, 0xc)
WEAK_FUNCTION(zx_profile_create, 0x6b08, 0xc)
WEAK_FUNCTION(zx_resource_create, 0x6d24, 0xc)
WEAK_FUNCTION(zx_set_framebuffer, 0x6c64, 0xc)
WEAK_FUNCTION(zx_set_framebuffer_vmo, 0x6c70, 0xc)
WEAK_FUNCTION(zx_smc_call, 0x6d18, 0xc)
WEAK_FUNCTION(zx_socket_accept, 0x6898, 0xc)
WEAK_FUNCTION(zx_socket_create, 0x6868, 0xc)
WEAK_FUNCTION(zx_socket_read, 0x6880, 0xc)
WEAK_FUNCTION(zx_socket_share, 0x688c, 0xc)
WEAK_FUNCTION(zx_socket_write, 0x6874, 0xc)
WEAK_FUNCTION(zx_status_get_string, 0x61b0, 0x238)
WEAK_FUNCTION(zx_syscall_test_0, 0x6da8, 0xc)
WEAK_FUNCTION(zx_syscall_test_1, 0x6db4, 0xc)
WEAK_FUNCTION(zx_syscall_test_2, 0x6dc0, 0xc)
WEAK_FUNCTION(zx_syscall_test_3, 0x6dcc, 0xc)
WEAK_FUNCTION(zx_syscall_test_4, 0x6dd8, 0xc)
WEAK_FUNCTION(zx_syscall_test_5, 0x6de4, 0xc)
WEAK_FUNCTION(zx_syscall_test_6, 0x6df0, 0xc)
WEAK_FUNCTION(zx_syscall_test_7, 0x6dfc, 0xc)
WEAK_FUNCTION(zx_syscall_test_8, 0x6e08, 0xc)
WEAK_FUNCTION(zx_syscall_test_wrapper, 0x66a0, 0x34)
WEAK_FUNCTION(zx_system_get_dcache_line_size, 0x63e8, 0xc)
WEAK_FUNCTION(zx_system_get_features, 0x63f8, 0x44)
WEAK_FUNCTION(zx_system_get_num_cpus, 0x6440, 0xc)
WEAK_FUNCTION(zx_system_get_physmem, 0x6450, 0xc)
WEAK_FUNCTION(zx_system_get_version, 0x6460, 0x84)
WEAK_FUNCTION(zx_system_mexec, 0x6d84, 0xc)
WEAK_FUNCTION(zx_system_powerctl, 0x6d90, 0xc)
WEAK_FUNCTION(zx_task_bind_exception_port, 0x6940, 0xc)
WEAK_FUNCTION(zx_task_kill, 0x697c, 0xc)
WEAK_FUNCTION(zx_task_resume, 0x6958, 0xc)
WEAK_FUNCTION(zx_task_resume_from_exception, 0x6970, 0xc)
WEAK_FUNCTION(zx_task_suspend, 0x694c, 0xc)
WEAK_FUNCTION(zx_task_suspend_token, 0x6964, 0xc)
WEAK_FUNCTION(zx_thread_create, 0x68b0, 0xc)
WEAK_FUNCTION(zx_thread_exit, 0x68a4, 0xc)
WEAK_FUNCTION(zx_thread_read_state, 0x68c8, 0xc)
WEAK_FUNCTION(zx_thread_set_priority, 0x68e0, 0xc)
WEAK_FUNCTION(zx_thread_start, 0x68bc, 0xc)
WEAK_FUNCTION(zx_thread_write_state, 0x68d4, 0xc)
WEAK_FUNCTION(zx_ticks_get, 0x64e8, 0x8)
WEAK_FUNCTION(zx_ticks_per_second, 0x64f8, 0xc)
WEAK_FUNCTION(zx_timer_cancel, 0x6a0c, 0xc)
WEAK_FUNCTION(zx_timer_create, 0x69f4, 0xc)
WEAK_FUNCTION(zx_timer_set, 0x6a00, 0xc)
WEAK_FUNCTION(zx_vcpu_create, 0x6d48, 0xc)
WEAK_FUNCTION(zx_vcpu_interrupt, 0x6d60, 0xc)
WEAK_FUNCTION(zx_vcpu_read_state, 0x6d6c, 0xc)
WEAK_FUNCTION(zx_vcpu_resume, 0x6d54, 0xc)
WEAK_FUNCTION(zx_vcpu_write_state, 0x6d78, 0xc)
WEAK_FUNCTION(zx_vmar_allocate, 0x6a78, 0xc)
WEAK_FUNCTION(zx_vmar_destroy, 0x6a84, 0xc)
WEAK_FUNCTION(zx_vmar_map, 0x6a90, 0xc)
WEAK_FUNCTION(zx_vmar_protect, 0x6aa8, 0xc)
WEAK_FUNCTION(zx_vmar_unmap, 0x6a9c, 0xc)
WEAK_FUNCTION(zx_vmar_unmap_handle_close_thread_exit, 0x670c, 0x3c)
WEAK_FUNCTION(zx_vmo_clone, 0x6a60, 0xc)
WEAK_FUNCTION(zx_vmo_create, 0x6a18, 0xc)
WEAK_FUNCTION(zx_vmo_create_contiguous, 0x6c04, 0xc)
WEAK_FUNCTION(zx_vmo_create_physical, 0x6c10, 0xc)
WEAK_FUNCTION(zx_vmo_get_size, 0x6a3c, 0xc)
WEAK_FUNCTION(zx_vmo_op_range, 0x6a54, 0xc)
WEAK_FUNCTION(zx_vmo_read, 0x6a24, 0xc)
WEAK_FUNCTION(zx_vmo_set_cache_policy, 0x6a6c, 0xc)
WEAK_FUNCTION(zx_vmo_set_size, 0x6a48, 0xc)
WEAK_FUNCTION(zx_vmo_write, 0x6a30, 0xc)
