/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001214bc  Symbol: scene */

/* GameScene::scene() */

int * GameScene::scene(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)cocos2d::CCScene::node();
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)node();
    iVar4 = *piVar2;
    puVar5 = *(undefined4 **)(DAT_00121508 + 0x1214d4);
    uVar3 = __divsf3(*puVar5,DAT_0012150c);
    (**(code **)(iVar4 + 0x2c))(piVar2,uVar3);
    uVar3 = __divsf3(puVar5[1],DAT_00121510);
    (**(code **)(*piVar2 + 0x34))(piVar2,uVar3);
    (**(code **)(*piVar1 + 0xc4))(piVar1,piVar2);
  }
  return piVar1;
}


