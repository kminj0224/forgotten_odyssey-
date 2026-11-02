/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001534e0  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSystem::initWithTotalParticles(unsigned int) */

bool __thiscall
cocos2d::CCParticleSystem::initWithTotalParticles(CCParticleSystem *this,uint param_1)

{
  undefined4 uVar1;
  CCPoint *pCVar2;
  int iVar3;
  CCPoint *this_00;
  
  *(uint *)(this + 0x1dc) = param_1;
  if (*(void **)(this + 0x140) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x140));
    *(undefined4 *)(this + 0x140) = 0;
  }
  iVar3 = *(int *)(this + 0x1dc);
  pCVar2 = (CCPoint *)operator_new__(iVar3 * 100);
  this_00 = pCVar2;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    CCPoint::CCPoint(this_00);
    CCPoint::CCPoint(this_00 + 8);
    CCPoint::CCPoint(this_00 + 0x44);
    this_00 = this_00 + 100;
  }
  *(CCPoint **)(this + 0x140) = pCVar2;
  if (pCVar2 != (CCPoint *)0x0) {
    this[0x14c] = (CCParticleSystem)0x1;
    uVar1 = DAT_00153574;
    *(undefined4 *)(this + 0x1e4) = 1;
    *(undefined4 *)(this + 0x1e8) = uVar1;
    *(undefined4 *)(this + 0x1f0) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    this[500] = (CCParticleSystem)0x0;
    CCNode::scheduleUpdateWithPriority((CCNode *)this,1);
  }
  else {
    CCObject::release((CCObject *)this);
  }
  return pCVar2 != (CCPoint *)0x0;
}


