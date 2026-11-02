/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe584  Symbol: Lethal */

/* Hero6::Lethal() */

Hero6 * __thiscall Hero6::Lethal(Hero6 *this)

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
  
  iVar1 = DAT_000fe64c;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(DAT_000fe648 + 0xfe590),1);
  iVar2 = DAT_000fe650;
  pcVar7 = (char *)(iVar1 + 0xfe5a2);
  uVar8 = (**(code **)(*piVar3 + 0xa8))();
  *(undefined4 *)(this + 0x114) = 0;
  this[0x118] = (Hero6)0x0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawScript_Lethal(pcVar7,(char *)(DAT_000fe65c + 0xfe5dc),(char *)(iVar2 + 0xfe5c2),
                     (CCNode *)this,local_28,local_24,1,2,true);
  puVar5 = (undefined4 *)(DAT_000fe664 + 0xfe5f4);
  uVar8 = vScript_Unit(pcVar7,(char *)(DAT_000fe660 + 0xfe5f2),(CCNode *)this,2,1);
  ppCVar6 = (CCNode **)*puVar5;
  pCVar4 = *ppCVar6;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  vDrawScript_Lethal(pcVar7,(char *)(DAT_000fe66c + 0xfe622),(char *)(iVar2 + 0xfe5c2),pCVar4,
                     local_20,local_1c,10,DAT_000fe670,true);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar6,DAT_000fe670);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


