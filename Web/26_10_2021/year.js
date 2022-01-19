function Search() 
{
    var can;
    var chi;
    var x = document.getElementsByTagName('input');
    var yr = x[0].value;
    if(yr >= 'A' && yr <= 'z') alert("Yêu cầu nhập năm");
    else 
    {
        switch(yr%10) {
            case 0 : can = 'Canh' ; break;
            case 1 : can = 'Tân' ; break;
            case 2 : can = 'Nhâm' ; break;
            case 3 : can = 'Quý' ; break;
            case 4 : can = 'Giáp' ; break;
            case 5 : can = 'Ất' ; break;
            case 6 : can = 'Bính' ; break;
            case 7 : can = 'Đinh' ; break;
            case 8 : can = 'Mậu' ; break;
            case 9 : can = 'Kỷ' ; break;
        }
        switch(yr%12) {
            case 0 : chi = 'Thân' ; break;
            case 1 : chi = 'Dậu' ; break;
            case 2 : chi = 'Ất' ; break;
            case 3 : chi = 'Hợi' ; break;
            case 4 : chi = 'Tý' ; break;
            case 5 : chi = 'Sửu' ; break;
            case 6 : chi = 'Dần' ; break;
            case 7 : chi = 'Mão' ; break;
            case 8 : chi = 'Thìn' ; break;
            case 9 : chi = 'Tỵ' ; break;
            case 10 : chi ='Ngọ' ; break;
            case 11 : chi = 'Mùi' ; break;
        }
        x[1].value = can +" "+ chi ;
        document.getElementById('result').innerHTML = x[1].value
    }
    
} 
function Xoa() 
{
    var x = document.getElementsByTagName('input');
    x[0].value = x[0].value.substr(0,x[0].value.length-1)
    x[1].value = x[1].value.substr(0,x[1].value.length-1)
}

