/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012eed8  Symbol: init */

/* MainScene::init() */

void MainScene::init(void)

{
  int iVar1;
  time_t __seedval;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = cocos2d::CCScheduler::sharedScheduler();
  iVar3 = DAT_0012ef7c;
  *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  iVar1 = DAT_0012ef84;
  iVar3 = iVar3 + 0x12eef0;
  **(undefined4 **)(iVar3 + DAT_0012ef80) = 0;
  __seedval = time((time_t *)0x0);
  srand48(__seedval);
  cocos2d::CCDirector::sharedDirector();
  puVar4 = *(undefined4 **)(iVar3 + DAT_0012ef88);
  uVar6 = cocos2d::CCDirector::getWinSize();
  *puVar4 = local_28;
  puVar4[1] = local_24;
  cocos2d::CCSize::CCSize((CCSize *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  uVar2 = *puVar4;
  puVar5 = *(undefined4 **)(iVar3 + DAT_0012ef94);
  *puVar5 = local_20;
  puVar5[1] = local_1c;
  __divsf3(uVar2,*puVar5);
  uVar6 = __extendsfdf2();
  __divsf3(puVar4[1],puVar5[1]);
  uVar7 = __extendsfdf2();
  uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(iVar1 + 0x12ef1e),uVar2,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),
                 (int)uVar7,uVar2);
}


