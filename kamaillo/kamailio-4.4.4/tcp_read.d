tcp_read.o: $(wildcard  tcp_read.c dprint.h compiler_opt.h cfg_core.h cfg/cfg.h \
  cfg/../str.h tcp_conn.h tcp_init.h ip_addr.h ut.h comp_defs.h config.h \
  types.h mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h tcp_options.h locking.h lock_alloc.h atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  timer_ticks.h timer.h clist.h tcp_read.h tcp_stats.h counters.h pt.h \
  globals.h poll_types.h socket_info.h tcp_ev.h pass_fd.h receive.h \
  local_timer.h timer_funcs.h trim.h cfg/cfg_struct.h \
  cfg/../mem/shm_mem.h cfg/../bit_test.h tls_hooks.h dst_blacklist.h \
  parser/msg_parser.h parser/../lump_struct.h parser/hf.h \
  parser/../flags.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h parser/../error.h io_wait.h tsend.h \
  forward.h route.h route_struct.h select.h usr_avp.h action.h \
  str_hash.h hashes.h proxy.h stats.h udp_server.h tcp_server.h \
  sctp_core.h events.h stun.h)
