db_query.o: $(wildcard  db_query.c ../../dprint.h ../../compiler_opt.h \
  ../../cfg_core.h ../../cfg/cfg.h ../../cfg/../str.h db_ut.h \
  ../../pvar.h ../../usr_avp.h ../../parser/msg_parser.h \
  ../../parser/../comp_defs.h ../../parser/../lump_struct.h \
  ../.././parser/hf.h ../../parser/../flags.h ../../parser/../ip_addr.h \
  ../../ut.h ../../config.h ../../types.h ../../mem/mem.h \
  ../../mem/pkg.h ../../mem/memapi.h ../../mem/src_loc.h \
  ../../mem/meminfo.h ../../mem/memdbg.h ../../mem/shm_mem.h \
  ../../mem/shm.h ../../mem/../lock_ops.h ../../fastlock.h \
  ../../sched_yield.h ../../parser/../md5utils.h \
  ../../parser/parse_def.h ../../parser/parse_cseq.h \
  ../../parser/parse_via.h ../../parser/parse_fline.h \
  ../../parser/parse_retry_after.h ../../parser/../error.h db_key.h db.h \
  db_op.h db_val.h db_con.h db_res.h db_cap.h db_row.h db_pooling.h \
  db_locking.h db_query.h ../../globals.h ../../poll_types.h \
  ../../timer.h ../../clist.h ../../timer_ticks.h)
