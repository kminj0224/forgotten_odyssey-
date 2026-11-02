/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed130  Symbol: Skill_Target */

/* Hero_HeroSkill::Skill_Target(int) */

void __thiscall Hero_HeroSkill::Skill_Target(Hero_HeroSkill *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  CCPoint aCStack_20 [12];
  
  *(int *)(this + 0x114) = param_1;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2a);
  pcVar2 = *(code **)(*piVar1 + 0x3c);
  uVar3 = __subsf3(DAT_000ed184,
                   *(undefined4 *)(*(int *)(DAT_000ed188 + 0xed156) + param_1 * 0x10 + 4));
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (*pcVar2)(piVar1,aCStack_20);
  Draw_Skill_Icon_Text(this,param_1);
  Skill_Button_Data();
  return;
}


