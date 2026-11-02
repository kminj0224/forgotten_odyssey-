/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011efa0  Symbol: Draw_String */

/* Tutorial_Layer::Draw_String(char const*, bool, bool) */

void __thiscall
Tutorial_Layer::Draw_String(Tutorial_Layer *this,char *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CCPoint *pCVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar9;
  float extraout_s1;
  undefined8 uVar10;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar11;
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCSize aCStack_28 [2];
  CCPoint aCStack_20 [12];
  
  uVar8 = *(undefined4 *)(this + 0x11c);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f288 + 0x11efb6));
  if (param_2) {
    uVar10 = (**(code **)(*piVar1 + 0x34))(piVar1,DAT_0011f28c);
    pcVar6 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar1,aCStack_a8);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    uVar10 = __subsf3(uVar8,DAT_0011f290);
    cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar1,aCStack_a0);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f294 + 0x11f018));
    pcVar6 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_98,extraout_s0_00,extraout_s1_00);
    (*pcVar6)(piVar2,aCStack_98);
    pcVar6 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar8 = __mulsf3(*puVar3,0x3f000000);
    uVar8 = __subsf3(uVar7,uVar8);
    __subsf3(uVar8,DAT_0011f298);
    iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
    uVar10 = __addsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f29c);
    cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar2,aCStack_90);
  }
  else {
    pcVar6 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_88,extraout_s0,extraout_s1);
    (*pcVar6)(piVar1,aCStack_88);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    uVar10 = __addsf3(uVar8,DAT_0011f290);
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar1,aCStack_80);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f2a0 + 0x11f0d0));
    pcVar6 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_78,extraout_s0_01,extraout_s1_01);
    (*pcVar6)(piVar2,aCStack_78);
    pcVar6 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    uVar7 = *puVar3;
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar8 = __mulsf3(*puVar3,0x3f000000);
    uVar8 = __subsf3(uVar7,uVar8);
    __subsf3(uVar8,DAT_0011f298);
    iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
    uVar10 = __subsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f29c);
    cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar6)(piVar2,aCStack_70);
  }
  uVar10 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,1,1);
  fVar11 = (float)((ulonglong)uVar10 >> 0x20);
  fVar9 = (float)uVar10;
  if (param_3) {
    pcVar6 = *(code **)(*piVar2 + 0x74);
    if (param_2) {
      cocos2d::CCPoint::CCPoint(aCStack_68,fVar9,fVar11);
      (*pcVar6)(piVar2,aCStack_68);
      pcVar6 = *(code **)(*piVar2 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar8 = __mulsf3(*puVar3,0x3f000000);
      uVar8 = __subsf3(uVar7,uVar8);
      __subsf3(uVar8,DAT_0011f298);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar10 = __addsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f29c);
      cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pCVar5 = aCStack_60;
    }
    else {
      cocos2d::CCPoint::CCPoint(aCStack_58,fVar9,fVar11);
      (*pcVar6)(piVar2,aCStack_58);
      pcVar6 = *(code **)(*piVar2 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar8 = __mulsf3(*puVar3,0x3f000000);
      uVar8 = __subsf3(uVar7,uVar8);
      __subsf3(uVar8,DAT_0011f298);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar10 = __subsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f29c);
      cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pCVar5 = aCStack_50;
    }
  }
  else {
    pcVar6 = *(code **)(*piVar2 + 0x74);
    if (param_2) {
      cocos2d::CCPoint::CCPoint(aCStack_48,fVar9,fVar11);
      (*pcVar6)(piVar2,aCStack_48);
      pcVar6 = *(code **)(*piVar2 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar8 = __mulsf3(*puVar3,0x3f000000);
      uVar8 = __addsf3(uVar7,uVar8);
      __addsf3(uVar8,DAT_0011f298);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar10 = __addsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f29c);
      cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pCVar5 = aCStack_40;
    }
    else {
      cocos2d::CCPoint::CCPoint(aCStack_38,fVar9,fVar11);
      (*pcVar6)(piVar2,aCStack_38);
      pcVar6 = *(code **)(*piVar2 + 0x3c);
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar7 = *puVar3;
      puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
      uVar8 = __mulsf3(*puVar3,0x3f000000);
      uVar8 = __addsf3(uVar7,uVar8);
      __addsf3(uVar8,DAT_0011f394);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar10 = __subsf3(*(undefined4 *)(iVar4 + 4),DAT_0011f398);
      cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
      pCVar5 = aCStack_30;
    }
  }
  (*pcVar6)(piVar2,pCVar5);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  __subsf3(*puVar3,DAT_0011f39c);
  uVar10 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  fVar9 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (param_1,aCStack_28,0,(char *)(DAT_0011f3a4 + 0x11f336),fVar9);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar8 = __mulsf3(*puVar3,0x3f000000);
  __addsf3(uVar8,DAT_0011f394);
  iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar10 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  (*pcVar6)(piVar1,aCStack_20);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,0,0);
  return;
}


