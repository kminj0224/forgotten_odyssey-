/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010fe14  Symbol: FileLode */

/* New_UI::FileLode() */

void __thiscall New_UI::FileLode(New_UI *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  N_Draw_Number *this_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  CCSpriteFrameCache **ppCVar7;
  undefined4 *puVar8;
  CCSpriteFrameCache *pCVar9;
  int *piVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar11;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  CCPoint local_e8;
  int local_e4;
  CCPoint local_e0;
  int local_dc;
  CCPoint local_d8;
  int local_d4;
  CCPoint local_d0;
  int local_cc;
  CCPoint local_c8;
  int local_c4;
  CCPoint local_c0;
  int local_bc;
  CCPoint local_b8;
  int local_b4;
  CCPoint local_b0;
  int local_ac;
  CCPoint local_a8;
  int local_a4;
  CCPoint local_a0;
  int local_9c;
  CCPoint local_98;
  int local_94;
  CCPoint local_90;
  int local_8c;
  CCPoint local_88;
  int local_84;
  CCPoint local_80;
  int local_7c;
  CCPoint local_78;
  int local_74;
  CCPoint local_70;
  int local_6c;
  CCPoint local_68;
  int local_64;
  CCPoint local_60;
  int local_5c;
  CCPoint local_58;
  int local_54;
  CCPoint local_50;
  int local_4c;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar5 = DAT_001101e8 + 0x10fe20;
  puVar8 = *(undefined4 **)(iVar5 + DAT_001101ec);
  __mulsf3(*puVar8,0x3f000000);
  uVar11 = __mulsf3(puVar8[1],0x3f000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_e8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar1 = (int *)vDrawImage((CCNode *)this,(char *)(DAT_001101f0 + 0x10fe4e),local_e8,local_e4,0);
  (**(code **)(*piVar1 + 0xec))(piVar1,0);
  ppCVar7 = *(CCSpriteFrameCache ***)(iVar5 + DAT_001101f4);
  uVar11 = __mulsf3(*puVar8,0x3f000000);
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_e0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001101fc + 0x10fe8e),local_e0,local_dc,1);
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110208 + 0x10feb2),local_d8,local_d4,0x10
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110210 + 0x10fed6),local_d0,local_cc,0x11
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_0011021c + 0x10fefa),local_c8,local_c4,0x17
                     );
  iVar3 = DAT_00110224;
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(iVar3 + 0x10ff1c),local_c0,local_bc,0x12);
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110230 + 0x10ff44),local_b8,local_b4,0x14
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_0011023c + 0x10ff68),local_b0,local_ac,0x18
                     );
  piVar10 = *(int **)(iVar5 + DAT_00110240);
  piVar6 = *(int **)(iVar5 + DAT_00110248);
  iVar2 = *(int *)(*piVar10 +
                   (*piVar6 * 9 + (int)*(char *)(*piVar10 + *piVar6 + DAT_00110244 + 4) +
                   DAT_0011024c) * 4 + 4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawNumber((CCNode *)this,iVar2,local_a8,local_a4,0xe,0,0x19);
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame(pCVar9,(CCNode *)this,(char *)(iVar3 + 0x10ff1c),local_a0,local_9c,0x1a);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1a);
  uVar11 = (**(code **)(*piVar1 + 0x2c))(piVar1,DAT_0011025c);
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110264 + 0x110012),local_98,local_94,0x1c
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110270 + 0x110036),local_90,local_8c,0x24
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_0011027c + 0x11005a),local_88,local_84,0x25
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110288 + 0x11007e),local_80,local_7c,0x20
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110294 + 0x1100a2),local_78,local_74,0x21
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001102a0 + 0x1100c6),local_70,local_6c,0x27
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001102a8 + 0x1100ea),local_68,local_64,0x2a
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001102b4 + 0x11010e),local_60,local_5c,0x1d
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001102c0 + 0x110132),local_58,local_54,0x2c
                     );
  pCVar9 = *ppCVar7;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_001102c8 + 0x110156),local_50,local_4c,0x2d);
  piVar1 = *(int **)(iVar5 + DAT_001102cc);
  iVar3 = __fixsfsi(*(undefined4 *)*piVar1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,extraout_s0,extraout_s1);
  vDrawNumber((CCNode *)this,iVar3,local_48,local_44,0xb,2,0x26);
  iVar3 = __fixsfsi(*(undefined4 *)(*piVar1 + 4));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,extraout_s0_00,extraout_s1_00);
  vDrawNumber((CCNode *)this,iVar3,local_40,local_3c,0xb,0,0x28);
  iVar3 = __fixsfsi(*(undefined4 *)(*piVar1 + 8));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0_01,extraout_s1_01);
  vDrawNumber((CCNode *)this,iVar3,local_38,local_34,0xc,2,0x29);
  iVar3 = __fixsfsi(*(undefined4 *)(*piVar1 + 0xc));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0_02,extraout_s1_02);
  uVar11 = vDrawNumber((CCNode *)this,iVar3,local_30,local_2c,0xc,0,0x2b);
  pCVar9 = **(CCSpriteFrameCache ***)(iVar5 + DAT_00110484);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  uVar11 = vDrawFrame(pCVar9,(CCNode *)this,(char *)(DAT_00110490 + 0x110332),local_28,local_24,0x1e
                     );
  iVar3 = *(int *)(*piVar10 + (*piVar6 + DAT_00110494) * 4 + 4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  vDrawMoney((CCNode *)this,iVar3,local_20,local_1c,0xd,0,0x1f);
  iVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,0x1f);
  *(undefined4 *)(iVar3 + 0x120) = DAT_0011049c;
  this_00 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x1f);
  N_Draw_Number::SetMoney_Re(this_00,*(int *)(*piVar10 + (*piVar6 + DAT_00110494) * 4 + 4),0);
  uVar4 = New_UI_HERO_HP::node();
  *(undefined4 *)(this + 0x110) = uVar4;
  (**(code **)(*(int *)this + 0xcc))(this,uVar4,0x13,0x13);
  uVar4 = New_UI_BOSS_HP::node();
  *(undefined4 *)(this + 0x114) = uVar4;
  (**(code **)(*(int *)this + 0xcc))(this,uVar4,0x1b,0x1b);
  uVar4 = New_UI_MONEY::node();
  *(undefined4 *)(this + 0x118) = uVar4;
  (**(code **)(*(int *)this + 0xcc))(this,uVar4,0x22,0x22);
  uVar4 = New_UI_MANA::node();
  *(undefined4 *)(this + 0x11c) = uVar4;
  (**(code **)(*(int *)this + 0xcc))(this,uVar4,0x23,0x23);
  uVar4 = New_UI_HERO_EXP::node();
  *(undefined4 *)(this + 0x120) = uVar4;
  (**(code **)(*(int *)this + 0xcc))(this,uVar4,0x15,0x15);
  FileLode_SkillIcon(this,(int)*(char *)(*piVar10 + *piVar6 + DAT_001104a0 + 4));
  File_Unit_Lode();
  File_Hero_Icon_Lode();
  if (***(int ***)(iVar5 + DAT_001104a4) - 3U < 2) {
    SetTimer(this,0x78);
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2c);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2d);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x11);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  return;
}


