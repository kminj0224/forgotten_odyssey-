/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011f5b8  Symbol: Draw_String_Touch */

/* Tutorial_Layer::Draw_String_Touch(char const*, bool) */

void __thiscall Tutorial_Layer::Draw_String_Touch(Tutorial_Layer *this,char *param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CCPoint *pCVar5;
  code *pcVar6;
  undefined4 uVar7;
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
  
  uVar7 = *(undefined4 *)(this + 0x118);
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f7b0 + 0x11f5cc));
  if (param_2) {
    uVar9 = (**(code **)(*piVar1 + 0x24))(piVar1,DAT_0011f7c4);
    pcVar6 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar6)(piVar1,aCStack_48);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    uVar9 = __addsf3(uVar7,DAT_0011f7b8);
    cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar6)(piVar1,aCStack_40);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f7c8 + 0x11f6c6));
    pcVar6 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_00,extraout_s1_00);
    (*pcVar6)(piVar2,aCStack_38);
    local_70 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    __subsf3(*puVar3,DAT_0011f7c0);
    uVar9 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    pCVar5 = aCStack_30;
  }
  else {
    uVar9 = (**(code **)(*piVar1 + 0x24))(piVar1,DAT_0011f7b4);
    pcVar6 = *(code **)(*piVar1 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar6)(piVar1,aCStack_68);
    pcVar6 = *(code **)(*piVar1 + 0x3c);
    uVar9 = __subsf3(uVar7,DAT_0011f7b8);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    (*pcVar6)(piVar1,aCStack_60);
    (**(code **)(*(int *)this + 0xcc))(this,piVar1,2,2);
    piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011f7bc + 0x11f62c));
    pcVar6 = *(code **)(*piVar2 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0,extraout_s1);
    (*pcVar6)(piVar2,aCStack_58);
    local_70 = *(code **)(*piVar2 + 0x3c);
    puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    __addsf3(*puVar3,DAT_0011f7c0);
    uVar9 = (**(code **)(*piVar1 + 0x38))(piVar1);
    cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
    pCVar5 = aCStack_50;
  }
  (*local_70)(piVar2,pCVar5);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,1,1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  __subsf3(*puVar3,DAT_0011f7cc);
  uVar9 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  fVar8 = (float)cocos2d::CCSize::CCSize
                           ((CCSize *)aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            (param_1,aCStack_28,0,(char *)(DAT_0011f7d4 + 0x11f752),fVar8);
  pcVar6 = *(code **)(*piVar1 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar7 = __mulsf3(*puVar3,0x3f000000);
  __addsf3(uVar7,DAT_0011f7d8);
  iVar4 = (**(code **)(*piVar2 + 0x7c))(piVar2);
  uVar9 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar1,aCStack_20);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,0,0);
  return;
}


