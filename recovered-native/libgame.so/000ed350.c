/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed350  Symbol: Lode_img */

/* Hero_HeroSkill::Lode_img() */

void Hero_HeroSkill::Lode_img(void)

{
  int iVar1;
  int *in_r0;
  int *piVar2;
  int *piVar3;
  float in_s0;
  float in_s1;
  undefined8 uVar4;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  CCPoint local_18;
  int local_14;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,in_s0,in_s1);
  uVar4 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed498 + 0xed36a),local_48,local_44,0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed4a0 + 0xed388),local_40,local_3c,1);
  iVar1 = DAT_000ed4a8;
  uVar4 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed4ac + 0xed3b8),local_38,local_34,local_30,
                     local_2c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed4b8 + 0xed3da),local_28,local_24,7);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed4c4 + 0xed3fa),local_20,local_1c,0x2d);
  piVar3 = *(int **)(iVar1 + 0xed402);
  if (*piVar3 != 0x1a) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    vDrawFrame((CCNode *)in_r0,(char *)(DAT_000ed4cc + 0xed422),local_18,local_14,0x2e);
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0x2d);
  (**(code **)(*piVar2 + 0x6c))(piVar2,0);
  if (*piVar3 != 0x1a) {
    piVar3 = (int *)(**(code **)(*in_r0 + 0x90))(in_r0);
    (**(code **)(*piVar3 + 0x90))();
  }
  Draw_Skill_icon((int)in_r0);
  SetSkillNumber((Hero_HeroSkill *)in_r0);
  Set_ReSkillNumber((Hero_HeroSkill *)in_r0);
  Skill_Target((Hero_HeroSkill *)in_r0,0);
  return;
}


