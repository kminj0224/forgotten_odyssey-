/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208880  Symbol: FUN_00208880 */

int FUN_00208880(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  switch(param_2) {
  case 1:
    goto LAB_002089fc;
  case 2:
    goto LAB_002089fc;
  case 3:
    goto LAB_002089fc;
  case 4:
    goto LAB_002089fc;
  case 5:
    goto switchD_0020888c_caseD_42;
  case 6:
    goto switchD_0020888c_caseD_42;
  case 7:
    goto switchD_0020888c_caseD_42;
  case 8:
    goto switchD_0020888c_caseD_42;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    goto LAB_002089fc;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    goto switchD_0020888c_caseD_42;
  case 0x17:
    goto LAB_002089a8;
  case 0x18:
    goto LAB_002089a8;
  case 0x19:
    goto LAB_002089a8;
  case 0x1a:
    goto LAB_002089a8;
  case 0x1b:
    goto LAB_002089a8;
  case 0x1c:
    goto LAB_002089a8;
  case 0x1d:
    goto LAB_002089fc;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    goto switchD_0020888c_caseD_42;
  case 0x24:
    break;
  case 0x25:
    goto LAB_002089a8;
  case 0x26:
    if (param_4 == 0) {
      return 0;
    }
    goto LAB_002089a8;
  case 0x27:
    goto LAB_002089fc;
  case 0x28:
    goto switchD_0020888c_caseD_42;
  case 0x29:
    goto LAB_002089fc;
  case 0x2a:
    goto LAB_002089a8;
  case 0x2b:
    goto LAB_002089a8;
  case 0x2c:
    goto switchD_0020888c_caseD_42;
  case 0x2d:
    goto switchD_0020888c_caseD_42;
  case 0x2e:
    break;
  case 0x2f:
    goto LAB_002089fc;
  case 0x30:
    goto LAB_002089fc;
  case 0x31:
    goto LAB_002089fc;
  case 0x32:
    goto LAB_002089fc;
  case 0x33:
    goto LAB_002089fc;
  case 0x34:
    goto LAB_002089fc;
  case 0x35:
    goto LAB_002089fc;
  case 0x36:
    goto LAB_002089fc;
  case 0x37:
    break;
  case 0x38:
    goto LAB_002089fc;
  case 0x39:
    goto switchD_0020888c_caseD_42;
  case 0x3a:
    goto switchD_0020888c_caseD_42;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    goto switchD_0020888c_caseD_42;
  case 0x3f:
    goto switchD_0020888c_caseD_42;
  case 0x40:
    goto switchD_0020888c_caseD_42;
  case 0x41:
    break;
  case 0x42:
LAB_002089fc:
    if ((param_3 == 0 || param_4 == 0) ||
       (iVar2 = *(int *)(param_1 + 0x14), *(int *)(param_1 + 0x18) <= iVar2))
    goto switchD_0020888c_caseD_42;
    goto LAB_002089c8;
  default:
    goto switchD_0020888c_caseD_42;
  }
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
LAB_002089a8:
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar2 < *(int *)(param_1 + 0x18)) {
LAB_002089c8:
      iVar1 = *(int *)(param_1 + 0x10) + iVar2 * 0xc;
      *(int *)(param_1 + 0x14) = iVar2 + 1;
      if (iVar1 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2 * 0xc) = param_2;
        *(int *)(iVar1 + 4) = param_3;
        *(int *)(iVar1 + 8) = param_4;
      }
    }
    else {
switchD_0020888c_caseD_42:
      iVar1 = 0;
    }
  }
  return iVar1;
}


