select.o: $(wildcard  select.c select.h h_table.h defs.h t_stats.h ../../rpc.h \
  ../../pt.h ../../globals.h ../../types.h ../../ip_addr.h ../../str.h \
  ../../compiler_opt.h ../../ut.h ../../comp_defs.h ../../config.h \
  ../../dprint.h ../../cfg_core.h ../../cfg/cfg.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../poll_types.h ../../timer.h ../../clist.h \
  ../../timer_ticks.h ../../socket_info.h ../../locking.h \
  ../../lock_alloc.h ../../parser/msg_parser.h \
  ../../parser/../lump_struct.h ../.././parser/hf.h \
  ../../parser/../flags.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../parser/../error.h \
  ../../usr_avp.h ../../xavp.h ../../str_list.h ../../atomic_ops.h \
  ../../atomic/atomic_common.h ../../atomic/atomic_native.h \
  ../../atomic/atomic_x86.h ../../hash_func.h ../../hashes.h config.h \
  lock.h sip_msg.h t_hooks.h ../../dns_cache.h ../../resolve.h \
  ../../counters.h ../../dns_func.h ../../dns_wrappers.h t_lookup.h \
  t_funcs.h ../../udp_server.h ../../msg_translator.h ../../forward.h \
  ../../route.h ../../route_struct.h ../../select.h ../../action.h \
  ../../str_hash.h ../../proxy.h ../../stats.h ../../tcp_server.h \
  ../../tcp_conn.h ../../tcp_init.h ../../tcp_options.h \
  ../../sctp_core.h ../../events.h ../../parser/parse_uri.h timer.h ut.h \
  ../../select_buf.h)