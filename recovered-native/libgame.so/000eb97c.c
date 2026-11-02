/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eb97c  Symbol: Draw_Skill_icon */

/* Hero_HeroSkill::Draw_Skill_icon(int) */

void Hero_HeroSkill::Draw_Skill_icon(int param_1)

{
  int in_r1;
  char *pcVar1;
  float in_s0;
  float in_s1;
  undefined8 uVar2;
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
  CCPoint local_18;
  int local_14;
  
  if (in_r1 == 1) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,in_s0,in_s1);
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebc88 + 0xeb99c),local_d8,local_d4,2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_d0,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebc90 + 0xeb9ba),local_d0,local_cc,3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_c8,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebc98 + 0xeb9d8),local_c8,local_c4,4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebca0 + 0xeb9f6),local_c0,local_bc,5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_b8,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    pcVar1 = (char *)(DAT_000ebca8 + 0xeba16);
  }
  else if (in_r1 == 2) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_b0,in_s0,in_s1);
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcac + 0xeba34),local_b0,local_ac,2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcb0 + 0xeba50),local_a8,local_a4,3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcb4 + 0xeba6e),local_a0,local_9c,4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_98,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcb8 + 0xeba8c),local_98,local_94,5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_90,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    pcVar1 = (char *)(DAT_000ebcbc + 0xebaac);
    local_b8 = local_90;
    local_b4 = local_8c;
  }
  else if (in_r1 == 3) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,in_s0,in_s1);
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcc0 + 0xebaca),local_88,local_84,2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcc4 + 0xebae8),local_80,local_7c,3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcc8 + 0xebb04),local_78,local_74,4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_70,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebccc + 0xebb22),local_70,local_6c,5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    pcVar1 = (char *)(DAT_000ebcd0 + 0xebb42);
    local_b8 = local_68;
    local_b4 = local_64;
  }
  else if (in_r1 == 4) {
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,in_s0,in_s1);
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcd4 + 0xebb60),local_60,local_5c,2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcd8 + 0xebb7e),local_58,local_54,3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcdc + 0xebb9c),local_50,local_4c,4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebce0 + 0xebbb8),local_48,local_44,5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    pcVar1 = (char *)(DAT_000ebce4 + 0xebbd8);
    local_b8 = local_40;
    local_b4 = local_3c;
  }
  else {
    if (in_r1 != 5) goto LAB_000ebc76;
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebce8 + 0xebbf6),local_38,local_34,2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcec + 0xebc14),local_30,local_2c,3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcf0 + 0xebc32),local_28,local_24,4);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    uVar2 = vDrawFrame((CCNode *)param_1,(char *)(DAT_000ebcf4 + 0xebc50),local_20,local_1c,5);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    pcVar1 = (char *)(DAT_000ebcf8 + 0xebc72);
    local_b8 = local_18;
    local_b4 = local_14;
  }
  vDrawFrame((CCNode *)param_1,pcVar1,local_b8,local_b4,6);
LAB_000ebc76:
  *(int *)(param_1 + 0x110) = in_r1;
  return;
}


