/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cc4d0  Symbol: ~EpisodeChild */

/* EpisodeChild::~EpisodeChild() */

EpisodeChild * __thiscall EpisodeChild::~EpisodeChild(EpisodeChild *this)

{
  ~EpisodeChild(this);
  operator_delete(this);
  return this;
}


