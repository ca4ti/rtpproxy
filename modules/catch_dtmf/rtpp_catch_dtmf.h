struct rtpp_catch_dtmf;
struct po_manager;
struct rtpp_log;
struct rtpp_notify;
struct rtpp_subc_ctx;

DEFINE_METHOD(rtpp_catch_dtmf, rtpp_catch_dtmf_command, int,
  const struct rtpp_subc_ctx *);

struct rtpp_catch_dtmf {
    struct rtpp_refcnt *rcnt;
    rtpp_catch_dtmf_command_t handle_command;
};

struct rtpp_catch_dtmf *rtpp_catch_dtmf_ctor(struct rtpp_log *,
  struct po_manager *, struct rtpp_notify *);

void catch_dtmf_data_free(void *);
