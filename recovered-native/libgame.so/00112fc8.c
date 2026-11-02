/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00112fc8  Symbol: Unit_Return_Money */

/* Unit_Return_Money(int) */

void Unit_Return_Money(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = DAT_001130f0 + 0x112fd0;
  if (param_1 == 0xbe) {
LAB_0011307e:
    puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
    uVar1 = *puVar4;
    uVar2 = DAT_00113110;
  }
  else {
    if (0xbe < param_1) {
      if (param_1 == 0xe6) {
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_00113120;
      }
      else if (param_1 < 0xe7) {
        if (param_1 == 0xd2) {
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_00113118;
        }
        else if (param_1 == 0xdc) {
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_0011311c;
        }
        else {
          if (param_1 != 200) {
            return;
          }
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_00113114;
        }
      }
      else if (param_1 == 0xfa) {
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_00113128;
      }
      else if (param_1 < 0xfb) {
        if (param_1 != 0xf0) {
          return;
        }
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_00113124;
      }
      else if (param_1 == 0x104) {
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_0011312c;
      }
      else {
        if (param_1 != 0x10e) {
          return;
        }
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_00113130;
      }
      goto LAB_001130e8;
    }
    if (param_1 != 0x8c) {
      if (param_1 < 0x8d) {
        if (param_1 == 0x78) {
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_001130fc;
        }
        else if (param_1 == 0x82) {
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_00113100;
        }
        else {
          if (param_1 != 0x6e) {
            return;
          }
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_001130f8;
        }
        goto LAB_001130e8;
      }
      if (param_1 == 0xa0) {
        puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
        uVar1 = *puVar4;
        uVar2 = DAT_00113108;
        goto LAB_001130e8;
      }
      if (0xa0 < param_1) {
        if (param_1 == 0xaa) {
          puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
          uVar1 = *puVar4;
          uVar2 = DAT_0011310c;
          goto LAB_001130e8;
        }
        if (param_1 != 0xb4) {
          return;
        }
        goto LAB_0011307e;
      }
      if (param_1 != 0x96) {
        return;
      }
    }
    puVar4 = (undefined4 *)**(undefined4 **)(iVar3 + DAT_001130f4);
    uVar1 = *puVar4;
    uVar2 = DAT_00113104;
  }
LAB_001130e8:
  uVar2 = __addsf3(uVar1,uVar2);
  *puVar4 = uVar2;
  return;
}


