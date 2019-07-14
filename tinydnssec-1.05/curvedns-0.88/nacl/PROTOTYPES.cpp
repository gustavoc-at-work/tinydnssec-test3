extern std::string crypto_auth(const std::string &,const std::string &);
extern void crypto_auth_verify(const std::string &,const std::string &,const std::string &);
extern std::string crypto_box(const std::string &,const std::string &,const std::string &,const std::string &);
extern std::string crypto_box_open(const std::string &,const std::string &,const std::string &,const std::string &);
extern std::string crypto_box_keypair(std::string *);
extern std::string crypto_hash(const std::string &);
extern std::string crypto_onetimeauth(const std::string &,const std::string &);
extern void crypto_onetimeauth_verify(const std::string &,const std::string &,const std::string &);
extern std::string crypto_scalarmult(const std::string &,const std::string &);
extern std::string crypto_scalarmult_base(const std::string &);
extern std::string crypto_secretbox(const std::string &,const std::string &,const std::string &);
extern std::string crypto_secretbox_open(const std::string &,const std::string &,const std::string &);
extern std::string crypto_stream(size_t,const std::string &,const std::string &);
extern std::string crypto_stream_xor(const std::string &,const std::string &,const std::string &);