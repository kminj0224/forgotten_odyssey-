/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011f3a8  Symbol: Draw_String */

/* Tutorial_Layer::Draw_String(char const*, bool) */

void __thiscall Tutorial_Layer::Draw_String(Tutorial_Layer *this,char *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  CCPoint *pCVar6;
  code *pcVar7;
  float extraout_s0;
  float extraout_s0_00;
  float fVar8;
  undefined8 uVar9;
  float extraout_s1;
  float extraout_s1_00;
  code *local_70;
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
  
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f590 + 0x11f3bc));
  if (param_2) {
    uVar9 = (**(code **)(*piVar1 + 0x24))(piVar1,DAT_0011f5a0);
    pcVar7 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    uVar9 = (*pcVar7)(piVar1,aCStack_48);
    pcVar7 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(piVar1,aCStack_40);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f5a4 + 0x11f4a6));
    pcVar7 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
    (*pcVar7)(piVar2,aCStack_38);
    local_70 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    __subsf3(*puVar3,DAT_0011f59c);
    uVar9 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    pCVar6 = aCStack_30;
  }
  else {
    uVar9 = (**(code **)(*piVar1 + 0x24))(piVar1,DAT_0011f594);
    pcVar7 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    uVar9 = (*pcVar7)(piVar1,aCStack_68);
    pcVar7 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar7)(piVar1,aCStack_60);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f598 + 0x11f414));
    pcVar7 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0,extraout_s1);
    (*pcVar7)(piVar2,aCStack_58);
    local_70 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    __addsf3(*puVar3,DAT_0011f59c);
    uVar9 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    pCVar6 = aCStack_50;
  }
  (*local_70)(piVar2,pCVar6);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,1,1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  __subsf3(*puVar3,DAT_0011f5a8);
  uVar9 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  fVar8 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (param_1,aCStack_28,0,(char *)(DAT_0011f5b0 + 0x11f532),fVar8);
  pcVar7 = *(code **)(*piVar1 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar4 = __mulsf3(*puVar3,0x3f000000);
  __addsf3(uVar4,DAT_0011f5b4);
  iVar5 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar9 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar7)(piVar1,aCStack_20);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,0,0);
  return;
}


