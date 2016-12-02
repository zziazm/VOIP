t_fifo.o: $(wildcard  t_fifo.c ../../str.h ../../ut.h ../../comp_defs.h \
  ../../compiler_opt.h ../../config.h ../../types.h ../../dprint.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../mem/mem.h ../../mem/pkg.h \
  ../../mem/memapi.h ../../mem/src_loc.h ../../mem/meminfo.h \
  ../../mem/memdbg.h ../../mem/shm_mem.h ../../mem/shm.h \
  ../../mem/../lock_ops.h ../../fastlock.h ../../sched_yield.h \
  ../../usr_avp.h ../../parser/parser_f.h ../../parser/parse_from.h \
  ../../parser/parse_to.h ../../parser/msg_parser.h \
  ../../parser/../lump_struct.h ../.././parser/hf.h \
  ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../parser/../md5utils.h ../../parser/parse_def.h \
  ../../parser/parse_cseq.h ../../parser/parse_via.h \
  ../../parser/parse_fline.h ../../parser/parse_retry_after.h \
  ../../parser/../error.h ../../parser/parse_addr_spec.h \
  ../../parser/parse_rr.h ../../parser/parse_nameaddr.h \
  ../../parser/parse_param.h ../../parser/parse_hname2.h \
  ../../parser/contact/parse_contact.h ../../parser/contact/contact.h \
  ../../tsend.h config.h defs.h ../../hash_func.h ../../hashes.h \
  t_lookup.h t_funcs.h ../../globals.h ../../poll_types.h \
  ../../udp_server.h ../../msg_translator.h ../../timer.h ../../clist.h \
  ../../timer_ticks.h ../../forward.h ../../route.h ../../route_struct.h \
  ../../select.h ../../action.h ../../str_hash.h ../../proxy.h \
  ../../stats.h ../../tcp_server.h ../../tcp_conn.h ../../tcp_init.h \
  ../../tcp_options.h ../../locking.h ../../lock_alloc.h \
  ../../atomic_ops.h ../../atomic/atomic_common.h \
  ../../atomic/atomic_native.h ../../atomic/atomic_x86.h \
  ../../sctp_core.h ../../events.h ../../parser/parse_uri.h lock.h \
  h_table.h t_stats.h ../../rpc.h ../../pt.h ../../socket_info.h \
  ../../xavp.h ../../str_list.h sip_msg.h t_hooks.h ../../dns_cache.h \
  ../../resolve.h ../../counters.h ../../dns_func.h ../../dns_wrappers.h \
  timer.h ut.h t_fwd.h t_fifo.h ../../sr_module.h ../../ver_defs.h \
  ../../kstats_types.h ../../mi/mi_types.h ../../pvar.h)