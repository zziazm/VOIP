core_cmd.o: $(wildcard  core_cmd.c ver.h mem/mem.h mem/../config.h types.h \
  mem/../dprint.h compiler_opt.h cfg_core.h cfg/cfg.h cfg/../str.h \
  mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h mem/memdbg.h \
  mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h sched_yield.h \
  sr_module.h parser/msg_parser.h parser/../comp_defs.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../ip_addr.h ut.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h parser/../error.h ver_defs.h rpc.h \
  route_struct.h select.h usr_avp.h route.h action.h str_hash.h hashes.h \
  clist.h kstats_types.h counters.h pt.h globals.h poll_types.h timer.h \
  timer_ticks.h socket_info.h locking.h lock_alloc.h mi/mi_types.h \
  pvar.h rpc_lookup.h core_cmd.h forward.h proxy.h stats.h udp_server.h \
  tcp_server.h tcp_conn.h tcp_init.h tcp_options.h atomic_ops.h \
  atomic/atomic_common.h atomic/atomic_native.h atomic/atomic_x86.h \
  sctp_core.h events.h name_alias.h tcp_info.h)
