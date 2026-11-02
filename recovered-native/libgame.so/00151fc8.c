/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151fc8  Symbol: ~CCParticleRain */

/* cocos2d::CCParticleRain::~CCParticleRain() */

CCParticleRain * __thiscall cocos2d::CCParticleRain::~CCParticleRain(CCParticleRain *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151fec + 0x151fd4);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


