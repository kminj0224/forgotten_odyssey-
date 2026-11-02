/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe854  Symbol: Lethal */

/* Hero3::Lethal() */

Hero3 * __thiscall Hero3::Lethal(Hero3 *this)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  CCNode *pCVar5;
  int *this_00;
  CCNode **ppCVar6;
  code *pcVar7;
  int **ppiVar8;
  char *pcVar9;
  undefined8 uVar10;
  _ccColor4B local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint aCStack_20 [12];
  
  iVar1 = DAT_000fe9b8;
  ppiVar8 = *(int ***)(DAT_000fe9b4 + 0xfe860);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar8,1);
  iVar2 = DAT_000fe9bc;
  pcVar9 = (char *)(iVar1 + 0xfe872);
  uVar10 = (**(code **)(*piVar3 + 0xa8))();
  *(undefined4 *)(this + 0x114) = 0;
  this[0x118] = (Hero3)0x0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  vDrawScript_Lethal(pcVar9,(char *)(DAT_000fe9c8 + 0xfe8ae),(char *)(iVar2 + 0xfe888),
                     (CCNode *)this,local_38,local_34,1,2,true);
  this_00 = *ppiVar8;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this_00,1);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x38))();
  uVar10 = __addsf3(*puVar4,DAT_000fe9cc);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  vDrawScript_Effect(pcVar9,(char *)(DAT_000fe9d0 + 0xfe8ec),(CCNode *)this_00,local_30,local_2c,3);
  puVar4 = (undefined4 *)(DAT_000fe9d4 + 0xfe906);
  uVar10 = vScript_Unit(pcVar9,(char *)(DAT_000fe9d8 + 0xfe8fe),(CCNode *)this,2,1);
  ppCVar6 = (CCNode **)*puVar4;
  pCVar5 = *ppCVar6;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  vDrawScript_Lethal(pcVar9,(char *)(DAT_000fe9e4 + 0xfe934),(char *)(iVar2 + 0xfe888),pCVar5,
                     local_28,local_24,10,DAT_000fe9e0,true);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar6,DAT_000fe9e0);
  uVar10 = (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  local_3c = (_ccColor4B)0x0;
  local_3b = 0;
  local_3a = 0;
  local_39 = 0xcc;
  piVar3 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight
                            (&local_3c,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = (**(code **)(**ppiVar8 + 0xcc))(*ppiVar8,piVar3,2,2);
  if (this[0x118] != (Hero3)0x0) {
    pcVar7 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
    (*pcVar7)(piVar3,aCStack_20);
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar8,3);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return this;
}


