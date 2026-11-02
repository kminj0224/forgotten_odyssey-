/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe674  Symbol: Lethal */

/* Hero5::Lethal() */

Hero5 * __thiscall Hero5::Lethal(Hero5 *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CCNode *pCVar4;
  undefined4 *puVar5;
  CCNode **ppCVar6;
  char *pcVar7;
  undefined8 uVar8;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  iVar1 = DAT_000fe73c;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fe738 + 0xfe680),1);
  iVar2 = DAT_000fe740;
  pcVar7 = (char *)(iVar1 + 0xfe692);
  uVar8 = (**(code **)(*piVar3 + 0xa8))();
  *(undefined4 *)(this + 0x114) = 0;
  this[0x118] = (Hero5)0x0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawScript_Lethal(pcVar7,(char *)(DAT_000fe74c + 0xfe6cc),(char *)(iVar2 + 0xfe6b2),
                     (CCNode *)this,local_28,local_24,1,2,true);
  puVar5 = (undefined4 *)(DAT_000fe754 + 0xfe6e4);
  uVar8 = vScript_Unit(pcVar7,(char *)(DAT_000fe750 + 0xfe6e2),(CCNode *)this,2,1);
  ppCVar6 = (CCNode **)*puVar5;
  pCVar4 = *ppCVar6;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawScript_Lethal(pcVar7,(char *)(DAT_000fe75c + 0xfe712),(char *)(iVar2 + 0xfe6b2),pCVar4,
                     local_20,local_1c,10,DAT_000fe760,true);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar6,DAT_000fe760);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


