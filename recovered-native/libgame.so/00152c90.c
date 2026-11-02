/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00152c90  Symbol: initWithTotalParticles */

/* cocos2d::CCParticleSun::initWithTotalParticles(unsigned int) */

bool __thiscall cocos2d::CCParticleSun::initWithTotalParticles(CCParticleSun *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = CCParticleSystemQuad::initWithTotalParticles((CCParticleSystemQuad *)this,param_1);
  if (iVar1 != 0) {
    uVar5 = (**(code **)(*(int *)this + 0x214))(this,1);
    *(undefined4 *)(this + 0x154) = DAT_00152de0;
    *(undefined4 *)(this + 0x1f8) = 0;
    CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    *(undefined4 *)(this + 0x108) = local_28;
    *(undefined4 *)(this + 0x10c) = local_24;
    uVar4 = DAT_00152de4;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x110) = uVar4;
    *(undefined4 *)(this + 0x114) = DAT_00152de8;
    *(undefined4 *)(this + 0x170) = DAT_00152dec;
    *(undefined4 *)(this + 0x174) = DAT_00152df0;
    CCDirector::sharedDirector();
    CCDirector::getWinSize();
    pcVar3 = *(code **)(*(int *)this + 0x3c);
    __mulsf3(local_30,0x3f000000);
    uVar5 = __mulsf3(local_2c,0x3f000000);
    CCPoint::CCPoint(aCStack_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    (*pcVar3)(this,aCStack_20);
    uVar4 = *(undefined4 *)(DAT_00152df4 + 0x152d38);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(DAT_00152df4 + 0x152d34);
    *(undefined4 *)(this + 0x164) = uVar4;
    *(undefined4 *)(this + 0x16c) = 0x3f000000;
    uVar2 = DAT_00152dfc;
    *(undefined4 *)(this + 0x178) = DAT_00152df8;
    uVar4 = DAT_00152de0;
    *(undefined4 *)(this + 0x168) = 0x3f800000;
    *(undefined4 *)(this + 0x17c) = uVar2;
    *(undefined4 *)(this + 0x180) = uVar4;
    uVar2 = __floatunsisf(*(undefined4 *)(this + 0x1dc));
    uVar4 = DAT_00152e00;
    *(undefined4 *)(this + 0x1d8) = uVar2;
    *(undefined4 *)(this + 0x188) = uVar4;
    *(undefined4 *)(this + 0x18c) = 0x3e800000;
    *(undefined4 *)(this + 400) = DAT_00152e04;
    *(undefined4 *)(this + 0x194) = 0x3f800000;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0x3f800000;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  return iVar1 != 0;
}


