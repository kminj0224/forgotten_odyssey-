/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015347c  Symbol: ~CCParticleSystem */

/* cocos2d::CCParticleSystem::~CCParticleSystem() */

CCParticleSystem * __thiscall cocos2d::CCParticleSystem::~CCParticleSystem(CCParticleSystem *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_001534c8 + 0x153488);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  if (*(void **)(this + 0x140) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x140));
    *(undefined4 *)(this + 0x140) = 0;
  }
  if (*(CCObject **)(this + 0x1e0) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1e0));
  }
  FUN_001ed6b8(this + 0x100);
  CCNode::~CCNode((CCNode *)this);
  return this;
}


