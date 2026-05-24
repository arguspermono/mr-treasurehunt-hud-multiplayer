using TMPro;
using UnityEngine;

public class AnswerData : MonoBehaviour
{
    [Header("UI Elements")]
    public TMP_Text infoTextObject; // Tarik TextMeshPro (Frontplate) dari dalam tombol ini

    [Header("References")]
    public GameEvents events; // Tarik file GameEvents dari folder Assets ke sini

    // Deklarasi cukup 1 kali di sini
    private bool sudahDiklik = false;

    private int _answerIndex = -1;
    public int AnswerIndex { get { return _answerIndex; } }

    public void UpdateData(string info, int index)
    {
        infoTextObject.text = info;
        _answerIndex = index;
    }

    public void SwitchState()
    {
        // 1. CEK GEMBOK: Jika sudah diklik, abaikan klik selanjutnya
        if (sudahDiklik) return;

        // 2. PASANG GEMBOK
        sudahDiklik = true;

        if (events.UpdateQuestionAnswer != null)
        {
            events.UpdateQuestionAnswer(this);
        }

        // Jeda sebentar agar data tersimpan sebelum dinilai GameManager
        Invoke("KirimKeManager", 0.1f);
    }

    void KirimKeManager()
    {
        if (events != null && events.CheckAnswer != null)
        {
            events.CheckAnswer();
        }
    }

    public void Reset()
    {
        // 3. BUKA GEMBOK: untuk soal berikutnya
        sudahDiklik = false;

        // 4. MATIKAN HIGHLIGHT: Reset status toggle pada Interactable MRTK
        var interactable = GetComponent<Microsoft.MixedReality.Toolkit.UI.Interactable>();
        if (interactable != null)
        {
            interactable.IsToggled = false;
        }
    }
}