parser/parse_subscription_state.o: $(wildcard  parser/parse_subscription_state.c \
  parser/parse_subscription_state.h parser/hf.h parser/../str.h \
  parser/../comp_defs.h parser/../dprint.h parser/../compiler_opt.h \
  parser/../cfg_core.h parser/../cfg/cfg.h parser/../trim.h \
  parser/../mem/mem.h parser/../mem/../config.h parser/../types.h \
  parser/../mem/pkg.h parser/../mem/memapi.h parser/../mem/src_loc.h \
  parser/../mem/meminfo.h parser/../mem/memdbg.h parser/../ut.h \
  parser/../mem/shm_mem.h parser/../mem/shm.h \
  parser/../mem/../lock_ops.h parser/../fastlock.h \
  parser/../sched_yield.h parser/parser_f.h parser/parse_param.h)
