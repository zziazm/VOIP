usrloc_sync.o: $(wildcard  usrloc_sync.c usrloc_sync.h ../dmq/bind_dmq.h \
  ../dmq/peer.h ../dmq/dmqnode.h ../dmq/../../lock_ops.h \
  ../dmq/../../fastlock.h ../dmq/../../sched_yield.h ../dmq/../../str.h \
  ../dmq/../../mem/mem.h ../dmq/../../mem/../config.h \
  ../dmq/../../types.h ../dmq/../../mem/../dprint.h \
  ../dmq/../../compiler_opt.h ../dmq/../../cfg_core.h \
  ../dmq/../../cfg/cfg.h ../dmq/../../mem/pkg.h \
  ../dmq/../../mem/memapi.h ../dmq/../../mem/src_loc.h \
  ../dmq/../../mem/meminfo.h ../dmq/../../mem/memdbg.h \
  ../dmq/../../mem/shm_mem.h ../dmq/../../mem/shm.h \
  ../dmq/../../parser/parse_uri.h \
  ../dmq/../../parser/../parser/msg_parser.h \
  ../dmq/../../parser/../comp_defs.h \
  ../dmq/../../parser/../lump_struct.h ../dmq/../.././parser/hf.h \
  ../dmq/../../parser/../flags.h ../dmq/../../parser/../ip_addr.h \
  ../dmq/../../ut.h ../dmq/../../parser/../md5utils.h \
  ../dmq/../../parser/parse_def.h ../dmq/../../parser/parse_cseq.h \
  ../dmq/../../parser/parse_via.h ../dmq/../../parser/parse_fline.h \
  ../dmq/../../parser/parse_retry_after.h ../dmq/../../parser/../error.h \
  ../dmq/../../parser/parse_param.h ../dmq/dmq_funcs.h \
  ../dmq/../../modules/tm/dlg.h \
  ../dmq/../../modules/tm/../../parser/parse_rr.h \
  ../dmq/../../parser/parse_nameaddr.h ../dmq/../../modules/tm/tm_load.h \
  ../dmq/../../modules/tm/defs.h \
  ../dmq/../../modules/tm/../../sr_module.h ../dmq/../../ver_defs.h \
  ../dmq/../../rpc.h ../dmq/../../route_struct.h ../dmq/../../select.h \
  ../dmq/../../usr_avp.h ../dmq/../../route.h ../dmq/../../action.h \
  ../dmq/../../str_hash.h ../dmq/../../hashes.h ../dmq/../../clist.h \
  ../dmq/../../kstats_types.h ../dmq/../../counters.h ../dmq/../../pt.h \
  ../dmq/../../globals.h ../dmq/../../poll_types.h ../dmq/../../timer.h \
  ../dmq/../../timer_ticks.h ../dmq/../../socket_info.h \
  ../dmq/../../locking.h ../dmq/../../lock_alloc.h \
  ../dmq/../../mi/mi_types.h ../dmq/../../pvar.h \
  ../dmq/../../modules/tm/t_hooks.h ../dmq/../../modules/tm/uac.h \
  ../dmq/../../modules/tm/h_table.h ../dmq/../../modules/tm/t_stats.h \
  ../dmq/../../modules/tm/../../xavp.h ../dmq/../../str_list.h \
  ../dmq/../../modules/tm/../../atomic_ops.h \
  ../dmq/../../atomic/atomic_common.h \
  ../dmq/../../atomic/atomic_native.h ../dmq/../../atomic/atomic_x86.h \
  ../dmq/../../modules/tm/../../hash_func.h \
  ../dmq/../../modules/tm/config.h \
  ../dmq/../../modules/tm/../../mem/shm_mem.h \
  ../dmq/../../modules/tm/lock.h ../dmq/../../modules/tm/sip_msg.h \
  ../dmq/../../modules/tm/../../dns_cache.h ../dmq/../../resolve.h \
  ../dmq/../../dns_func.h ../dmq/../../dns_wrappers.h \
  ../dmq/../../modules/tm/t_fwd.h ../dmq/../../modules/tm/../../proxy.h \
  ../dmq/../../modules/tm/t_lookup.h ../dmq/../../modules/tm/t_funcs.h \
  ../dmq/../../modules/tm/../../udp_server.h \
  ../dmq/../../modules/tm/../../msg_translator.h \
  ../dmq/../../modules/tm/../../forward.h ../dmq/../../stats.h \
  ../dmq/../../tcp_server.h ../dmq/../../tcp_conn.h \
  ../dmq/../../tcp_init.h ../dmq/../../tcp_options.h \
  ../dmq/../../sctp_core.h ../dmq/../../events.h \
  ../dmq/../../modules/tm/timer.h ../dmq/../../modules/tm/ut.h \
  ../dmq/../../modules/tm/t_reply.h ../dmq/../../modules/tm/../../tags.h \
  ../dmq/../../crc.h ../dmq/../../modules/tm/callid.h \
  ../dmq/../../modules/tm/t_cancel.h ../dmq/../../modules/tm/t_suspend.h \
  ../dmq/../../modules/tm/t_append_branches.h \
  ../dmq/../../modules/tm/t_serial.h ../dmq/worker.h \
  ../../lib/srutils/srjson.h ../../parser/parse_content.h \
  ../usrloc/usrloc.h ../usrloc/ul_callback.h ../usrloc/../../qvalue.h \
  ../usrloc/dlist.h ../usrloc/udomain.h \
  ../usrloc/../../lib/kcore/statistics.h \
  ../usrloc/../../lib/kcore/kstats_wrapper.h \
  ../usrloc/../../lib/srdb1/db.h ../usrloc/../../lib/srdb1/db_key.h \
  ../usrloc/../../lib/srdb1/db_op.h ../usrloc/../../lib/srdb1/db_val.h \
  ../usrloc/../../lib/srdb1/db_con.h ../usrloc/../../lib/srdb1/db_res.h \
  ../usrloc/../../lib/srdb1/db_cap.h ../usrloc/../../lib/srdb1/db_row.h \
  ../usrloc/../../lib/srdb1/db_pooling.h \
  ../usrloc/../../lib/srdb1/db_locking.h ../usrloc/urecord.h \
  ../usrloc/hslot.h ../usrloc/ucontact.h ../../parser/parse_from.h \
  ../dmq/../../parser/parse_to.h ../dmq/../../parser/parse_addr_spec.h)
