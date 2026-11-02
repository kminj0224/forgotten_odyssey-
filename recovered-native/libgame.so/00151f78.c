/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151f78  Symbol: ~CCParticleSmoke */

/* cocos2d::CCParticleSmoke::~CCParticleSmoke() */

CCParticleSmoke * __thiscall cocos2d::CCParticleSmoke::~CCParticleSmoke(CCParticleSmoke *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151f9c + 0x151f84);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


