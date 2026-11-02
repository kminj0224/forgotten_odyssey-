/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151f50  Symbol: ~CCParticleExplosion */

/* cocos2d::CCParticleExplosion::~CCParticleExplosion() */

CCParticleExplosion * __thiscall
cocos2d::CCParticleExplosion::~CCParticleExplosion(CCParticleExplosion *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151f74 + 0x151f5c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  CCParticleSystemQuad::~CCParticleSystemQuad((CCParticleSystemQuad *)this);
  return this;
}


