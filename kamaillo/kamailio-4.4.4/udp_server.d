udp_server.o: $(wildcard  udp_server.c udp_server.h ip_addr.h str.h compiler_opt.h \
  ut.h comp_defs.h config.h types.h dprint.h cfg_core.h cfg/cfg.h \
  mem/mem.h mem/pkg.h mem/memapi.h mem/src_loc.h mem/meminfo.h \
  mem/memdbg.h mem/shm_mem.h mem/shm.h mem/../lock_ops.h fastlock.h \
  sched_yield.h globals.h poll_types.h receive.h cfg/cfg_struct.h \
  cfg/../atomic_ops.h atomic/atomic_common.h atomic/atomic_native.h \
  atomic/atomic_x86.h cfg/../mem/shm_mem.h cfg/../locking.h lock_alloc.h \
  cfg/../bit_test.h events.h parser/msg_parser.h parser/../lump_struct.h \
  parser/hf.h parser/../flags.h parser/../md5utils.h parser/parse_def.h \
  parser/parse_cseq.h parser/parse_via.h parser/parse_fline.h \
  parser/parse_retry_after.h parser/../error.h stun.h)
