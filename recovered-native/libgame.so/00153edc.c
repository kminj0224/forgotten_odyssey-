/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153edc  Symbol: update */

/* cocos2d::CCParticleSystem::update(float) */

void __thiscall cocos2d::CCParticleSystem::update(CCParticleSystem *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  CCDirector *pCVar3;
  CCPoint CVar4;
  CCPoint CVar5;
  CCPoint CVar6;
  undefined4 in_r1;
  undefined4 uVar7;
  CCPoint *pCVar8;
  float __x;
  float __x_00;
  undefined8 uVar9;
  CCPoint local_58;
  int local_54;
  CCPoint local_50;
  undefined4 local_4c;
  CCPoint local_48;
  CCPoint local_44;
  CCPoint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint local_30;
  CCPoint local_2c;
  CCPoint local_28;
  CCPoint local_24;
  CCPoint local_20;
  CCPoint local_1c;
  
  if (this[0x14c] != (CCParticleSystem)0x0) {
    uVar7 = *(undefined4 *)(this + 0x1d8);
    iVar1 = __aeabi_fcmpeq(uVar7,0);
    if (iVar1 == 0) {
      uVar7 = __divsf3(0x3f800000,uVar7);
      uVar2 = __addsf3(*(undefined4 *)(this + 0x144),in_r1);
      *(undefined4 *)(this + 0x144) = uVar2;
      while ((*(uint *)(this + 0x150) < *(uint *)(this + 0x1dc) &&
             (iVar1 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x144),uVar7), iVar1 != 0))) {
        addParticle(this);
        uVar2 = __subsf3(*(undefined4 *)(this + 0x144),uVar7);
        *(undefined4 *)(this + 0x144) = uVar2;
      }
      uVar7 = __addsf3(in_r1,*(undefined4 *)(this + 0x104));
      *(undefined4 *)(this + 0x104) = uVar7;
      uVar2 = *(undefined4 *)(this + 0x154);
      iVar1 = __aeabi_fcmpeq(uVar2,DAT_001542e4);
      if ((iVar1 == 0) && (iVar1 = __aeabi_fcmplt(uVar2,uVar7), iVar1 != 0)) {
        stopSystem(this);
      }
    }
  }
  *(undefined4 *)(this + 0x148) = 0;
  local_50 = *(CCPoint *)(DAT_001542dc + 0x153f6c);
  local_4c = *(undefined4 *)(DAT_001542dc + 0x153f70);
  if (*(int *)(this + 0x1f0) == 0) {
    CCNode::convertToWorldSpace(&local_50);
  }
  else {
    if (*(int *)(this + 0x1f0) != 1) goto LAB_0015429e;
    local_50 = *(CCPoint *)(this + 0x28);
    local_4c = *(undefined4 *)(this + 0x2c);
  }
  CVar4 = local_50;
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar7 = CCDirector::getContentScaleFactor(pCVar3);
  local_50 = __mulsf3(CVar4,uVar7);
  uVar7 = local_4c;
  pCVar3 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar3);
  local_4c = __mulsf3(uVar7,uVar2);
LAB_0015429e:
  do {
    while( true ) {
      if (*(uint *)(this + 0x150) <= *(uint *)(this + 0x148)) {
        (**(code **)(*(int *)this + 0x238))(this);
        return;
      }
      pCVar8 = (CCPoint *)(*(int *)(this + 0x140) + *(uint *)(this + 0x148) * 100);
      CVar4 = __subsf3(pCVar8[0x10],in_r1);
      pCVar8[0x10] = CVar4;
      iVar1 = __aeabi_fcmpgt(CVar4,0);
      if (iVar1 == 0) break;
      if (*(int *)(this + 0x1f8) == 0) {
        CCPoint::CCPoint((CCPoint *)&local_48);
        CCPoint::CCPoint((CCPoint *)&local_40);
        CCPoint::CCPoint((CCPoint *)&local_28);
        local_40 = *(CCPoint *)(DAT_001542e0 + 0x153ffe);
        local_3c = *(int *)(DAT_001542e0 + 0x154002);
        iVar1 = __aeabi_fcmpeq(*pCVar8,0);
        if ((iVar1 == 0) || (iVar1 = __aeabi_fcmpeq(pCVar8[1],0), iVar1 == 0)) {
          ccpNormalize((cocos2d *)&local_58,pCVar8);
          local_40 = local_58;
          local_3c = local_54;
        }
        local_28 = local_40;
        local_24 = local_3c;
        FUN_001533ea(&local_58,&local_40,pCVar8[0x13]);
        local_40 = local_58;
        CVar4 = local_24 + 0x80000000;
        local_3c = local_54;
        local_24 = local_28;
        local_28 = CVar4;
        FUN_001533ea(&local_58,&local_28,pCVar8[0x14]);
        local_28 = local_58;
        local_24 = local_54;
        __addsf3(local_40,local_58);
        uVar9 = __addsf3(local_3c,local_24);
        CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        uVar7 = __addsf3(local_38,*(undefined4 *)(this + 0x108));
        uVar9 = __addsf3(local_34,*(undefined4 *)(this + 0x10c),0x108,this + 0x108,uVar7);
        CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        local_48 = local_20;
        local_44 = local_1c;
        FUN_001533ea(&local_58,&local_48,in_r1);
        local_48 = local_58;
        local_44 = local_54;
        uVar7 = __addsf3(pCVar8[0x11],local_58);
        uVar9 = __addsf3(pCVar8[0x12],local_44);
        CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        pCVar8[0x11] = local_20;
        pCVar8[0x12] = local_1c;
        FUN_001533ea(&local_58,pCVar8 + 0x11,in_r1,local_1c,uVar7);
        local_48 = local_58;
        local_44 = local_54;
        __addsf3(*pCVar8,local_58);
        uVar9 = __addsf3(pCVar8[1],local_44);
        CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        *pCVar8 = local_20;
        pCVar8[1] = local_1c;
      }
      else {
        uVar7 = __mulsf3(in_r1,pCVar8[0x16]);
        CVar5 = __addsf3(uVar7,pCVar8[0x15]);
        pCVar8[0x15] = CVar5;
        uVar7 = __mulsf3(in_r1,pCVar8[0x18]);
        CVar6 = __addsf3(uVar7,pCVar8[0x17]);
        pCVar8[0x17] = CVar6;
        CVar4 = CVar5;
        cosf(__x);
        CVar5 = __mulsf3(CVar5 + 0x80000000,CVar6);
        *pCVar8 = CVar5;
        sinf(__x_00);
        CVar4 = __mulsf3(CVar4 + 0x80000000,CVar6);
        pCVar8[1] = CVar4;
      }
      uVar7 = __mulsf3(in_r1,pCVar8[8]);
      CVar4 = __addsf3(pCVar8[4],uVar7);
      pCVar8[4] = CVar4;
      uVar7 = __mulsf3(in_r1,pCVar8[9]);
      CVar4 = __addsf3(pCVar8[5],uVar7);
      pCVar8[5] = CVar4;
      uVar7 = __mulsf3(in_r1,pCVar8[10]);
      CVar4 = __addsf3(pCVar8[6],uVar7);
      pCVar8[6] = CVar4;
      uVar7 = __mulsf3(in_r1,pCVar8[0xb]);
      CVar4 = __addsf3(pCVar8[7],uVar7);
      pCVar8[7] = CVar4;
      uVar7 = __mulsf3(in_r1,pCVar8[0xd]);
      CVar4 = __addsf3(uVar7,pCVar8[0xc]);
      iVar1 = __aeabi_fcmpgt(CVar4,0);
      if (iVar1 == 0) {
        CVar4 = 0;
      }
      pCVar8[0xc] = CVar4;
      uVar7 = __mulsf3(in_r1,pCVar8[0xf]);
      CVar6 = __addsf3(pCVar8[0xe],uVar7);
      pCVar8[0xe] = CVar6;
      CCPoint::CCPoint((CCPoint *)&local_30);
      if (*(uint *)(this + 0x1f0) < 2) {
        __subsf3(local_50,pCVar8[2]);
        uVar9 = __subsf3(local_4c,pCVar8[3]);
        CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        CVar4 = __subsf3(*pCVar8,local_28);
        uVar9 = __subsf3(pCVar8[1],local_24);
        CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
        local_30 = local_20;
        local_2c = local_1c;
      }
      else {
        local_30 = *pCVar8;
        local_2c = pCVar8[1];
      }
      (**(code **)(*(int *)this + 0x234))
                (this,pCVar8,&local_30,*(code **)(*(int *)this + 0x234),CVar4);
      *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
    }
    if (*(int *)(this + 0x148) != *(int *)(this + 0x150) + -1) {
      memcpy((void *)(*(int *)(this + 0x140) + *(int *)(this + 0x148) * 100),
             (void *)(*(int *)(this + 0x140) + (*(int *)(this + 0x150) + -1) * 100),100);
    }
    iVar1 = *(int *)(this + 0x150);
    *(int *)(this + 0x150) = iVar1 + -1;
  } while ((iVar1 + -1 != 0) || (this[500] == (CCParticleSystem)0x0));
  CCNode::unscheduleUpdate((CCNode *)this);
  (**(code **)(**(int **)(this + 0x74) + 0xd0))(*(int **)(this + 0x74),this,1);
  return;
}


