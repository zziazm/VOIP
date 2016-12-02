receive.o: $(wildcard  receive.c receive.h ip_addr.h str.h compiler_opt.h ut.h \
  comp_defs.h config.h types.h dprint.h cfg_core.h cfg/cfg.h mem/mem.h \
  mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h \
  mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  globals.h poll_types.h route.h error.h route_struct.h select.h \
  parser/msg_parser.h parser/../lump_struct.h parser/hf.h \
  parser/../flags.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h usr_avp.h action.h str_hash.h hashes.h \
  clist.h forward.h proxy.h stats.h udp_server.h tcp_server.h tcp_conn.h \
  tcp_init.h tcp_options.h locking.h lock_alloc.h atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  timer_ticks.h timer.h sctp_core.h events.h script_cb.h nonsip_hooks.h \
  dset.h qvalue.h xavp.h str_list.h select_buf.h core_stats.h)
