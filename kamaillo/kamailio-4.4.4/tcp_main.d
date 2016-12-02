tcp_main.o: $(wildcard  tcp_main.c io_wait.h dprint.h compiler_opt.h cfg_core.h \
  cfg/cfg.h cfg/../str.h poll_types.h ip_addr.h ut.h comp_defs.h \
  config.h types.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h \
  mem/meminfo.h mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h \
  fastlock.h sched_yield.h pass_fd.h tcp_conn.h tcp_init.h tcp_options.h \
  locking.h lock_alloc.h atomic_ops.h atomic/atomic_common.h \
  atomic/atomic_native.h atomic/atomic_x86.h timer_ticks.h timer.h \
  clist.h globals.h pt.h socket_info.h sr_module.h parser/msg_parser.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../md5utils.h parser/parse_def.h parser/parse_cseq.h \
  parser/parse_via.h parser/parse_fline.h parser/parse_retry_after.h \
  parser/../error.h ver_defs.h rpc.h route_struct.h select.h usr_avp.h \
  route.h action.h str_hash.h hashes.h kstats_types.h counters.h \
  mi/mi_types.h pvar.h tcp_server.h tcp_int_send.h tcp_stats.h tcp_ev.h \
  tsend.h local_timer.h timer_funcs.h tls_hooks_init.h tls_hooks.h \
  dst_blacklist.h tcp_info.h cfg/cfg_struct.h cfg/../mem/shm_mem.h \
  cfg/../bit_test.h)
