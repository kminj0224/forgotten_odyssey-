/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9d68  Symbol: onEnter */

/* Hero_BaseSkill::onEnter() */

void __thiscall Hero_BaseSkill::onEnter(Hero_BaseSkill *this)

{
  int *piVar1;
  undefined8 uVar2;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  CCPoint local_34;
  int local_30;
  int local_2c;
  CCPoint local_28;
  CCPoint local_24;
  int local_20;
  int local_1c;
  CCPoint local_18;
  int local_14;
  
  uVar2 = (**(code **)(*(int *)this + 0x114))(this,1);
  *(undefined4 *)(this + 0x110) = 0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  uVar2 = vDrawFrame((CCNode *)this,(char *)(DAT_000e9e78 + 0xe9d9c),local_48,local_44,2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  uVar2 = vDrawFrame((CCNode *)this,(char *)(DAT_000e9e80 + 0xe9dba),local_40,local_3c,1);
  uVar2 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_38,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  uVar2 = vDrawFrame((CCNode *)this,(char *)(DAT_000e9e88 + 0xe9de4),local_38,local_34,local_30,
                     local_2c);
  uVar2 = cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_28,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  uVar2 = vDrawFrame((CCNode *)this,(char *)(DAT_000e9e94 + 0xe9e16),local_28,local_24,local_20,
                     local_1c);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000e9ea0 + 0xe9e38),local_18,local_14,0x18);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x18);
  (**(code **)(*piVar1 + 0x6c))(piVar1,0);
  SetSkillNumber(this);
  Set_ReSkillNumber(this);
  Draw_Skill_Icon_Text(this,0);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


