msg_translator.o: $(wildcard  msg_translator.c comp_defs.h msg_translator.h \
  parser/msg_parser.h parser/../str.h parser/../lump_struct.h \
  parser/hf.h parser/../flags.h parser/../ip_addr.h compiler_opt.h ut.h \
  config.h types.h dprint.h cfg_core.h cfg/cfg.h mem/mem.h mem/pkg.h \
  mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h mem/shm_mem.h \
  mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  parser/../md5utils.h parser/parse_def.h parser/parse_cseq.h \
  parser/parse_via.h parser/parse_fline.h parser/parse_retry_after.h \
  parser/../error.h globals.h poll_types.h data_lump.h data_lump_rpl.h \
  resolve.h counters.h pt.h timer.h clist.h timer_ticks.h socket_info.h \
  locking.h lock_alloc.h dns_func.h dns_wrappers.h parser/parse_to.h \
  parser/parse_addr_spec.h parser/parse_param.h forward.h route.h \
  route_struct.h select.h usr_avp.h action.h str_hash.h hashes.h proxy.h \
  stats.h udp_server.h tcp_server.h tcp_conn.h tcp_init.h tcp_options.h \
  atomic_ops.h atomic/atomic_common.h atomic/atomic_native.h \
  atomic/atomic_x86.h sctp_core.h events.h str_list.h)
