/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154c48  Symbol: ~CCParticleSystemPoint */

/* cocos2d::CCParticleSystemPoint::~CCParticleSystemPoint() */

CCParticleSystemPoint * __thiscall
cocos2d::CCParticleSystemPoint::~CCParticleSystemPoint(CCParticleSystemPoint *this)

{
  ~CCParticleSystemPoint(this);
  operator_delete(this);
  return this;
}


