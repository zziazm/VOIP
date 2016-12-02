route.o: $(wildcard  route.c route.h config.h types.h error.h str.h route_struct.h \
  select.h parser/msg_parser.h parser/../comp_defs.h \
  parser/../lump_struct.h parser/hf.h parser/../flags.h \
  parser/../ip_addr.h compiler_opt.h ut.h dprint.h cfg_core.h cfg/cfg.h \
  mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h usr_avp.h action.h str_hash.h hashes.h \
  clist.h forward.h globals.h poll_types.h proxy.h stats.h udp_server.h \
  tcp_server.h tcp_conn.h tcp_init.h tcp_options.h locking.h \
  lock_alloc.h atomic_ops.h atomic/atomic_common.h \
  atomic/atomic_native.h atomic/atomic_x86.h timer_ticks.h timer.h \
  sctp_core.h events.h lvalue.h rvalue.h pvar.h sr_module.h ver_defs.h \
  rpc.h kstats_types.h counters.h pt.h socket_info.h mi/mi_types.h \
  resolve.h dns_func.h dns_wrappers.h parser/parse_uri.h \
  parser/parse_from.h parser/parse_to.h parser/parse_addr_spec.h \
  onsend.h script_cb.h sr_compat.h switch.h cfg/cfg_struct.h \
  cfg/../mem/shm_mem.h cfg/../bit_test.h)
