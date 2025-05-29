// $(document).ready(function(){
// let seconds = 5;

// const countdownElement = document.getElementById('message');

// const cont = document.getElementById("contact")


// const countdown = setInterval(function() {
//     seconds--;
//     countdownElement.innerHTML = "Anda akan masuk otomatis masuk grup WhatsApp setelah " + seconds + " detik";
    
//     if (seconds <= 0) {
//         countdownElement.innerHTML = "";
//         // document.getElementById('redirect').click();
//         $.ajax({
//             url     : "/pendaftaran-habsyi/redirect",
//             type    : "GET",
//             success : function(res){
//                 console.log(res)
//                 window.location.href = `intent://chat/#Intent;package=com.whatsapp;scheme=whatsapp;end;action=android.intent.action.VIEW;S.group_code=JB3ODVO3Nx5GjHDKaZMgG1;end`
                
//             }
//         })
//         clearInterval(countdown);
//         // window.history.replaceState(null, document.title,"/pendaftaran-habsyi/hasil/redirect")
//         // getUrl();
//         // window.location.href = getUrl();
        
//         // Redirect dari JavaScript menggunakan URL dari backend
//         // countdownElement.innerHTML = "Jika anda tidak masuk grup silakan hubungi nomor dibawah"
//         // cont.setAttribute("style","display: inline");
//         // window.location.href = "{{ $third_party_url }}";
//     }
// }, 1000);

// });

//     $(document).ready(function(){
    //     const form = document.getElementById('myform'); 
       
    //     const myModal = new bootstrap.Modal(document.getElementById('myModal'));

    //     var i = 3;
        
    //     form.addEventListener('submit', function(e) {
    //         e.preventDefault(); 
    //         myModal.show(myModal);
    //         const countdown = setInterval(function(){
    //                 i--;
    //                 $("#seconds").html(`
    //                     ${i} detik...
    //                 `)
                    
    //                 if(i <= 1){
    //                     clearInterval(countdown);
    //                     form.submit();
    //                 }
    //             },1000)
    //     });
    // })
        

$(document).ready(function(){
            const myModal = new bootstrap.Modal(document.getElementById('myModal'));
            // myModal.show(myModal);
            $.ajaxSetup({
                headers: {
                    'X-CSRF-TOKEN': $('meta[name="csrf-token"]').attr('content')
                }
            });
            $("#myform").on("submit", function(e){
            
                e.preventDefault();
                myModal.show(myModal);
                let i = 3;
                var data = $(this).serialize();
                const countdown = setInterval(function(){
                    i--;
                    $("#seconds").html(`
                        ${i} detik...
                    `)
                    
                    if(i <= 1){
                        clearInterval(countdown);
                      
                        $.ajax({
                            url: "/pendaftaran-habsyi",
                            type: "POST",
                            data: data,
                            success: function(res) {
                        
                                location.href = res;
                            },
                            error: function(xhr){
                                console.log(xhr.responseJSON.errors);
                            }
                        })
                    }
                    
                },1000)
                 
            })
            
        })
        