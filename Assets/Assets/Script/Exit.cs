using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System;

public class Exit : MonoBehaviour, IPointerClickHandler
{
    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.button == PointerEventData.InputButton.Left)
        {
            Application.Quit();
        }
    }
}
